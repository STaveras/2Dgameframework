#include "GameObject.h"
#include "Animation.h"

void GameObject::_OnAnimationStopped(const Event& e)
{
	for (unsigned int i = 0; i < m_States.Size(); i++)
		if (m_States.At(i) == (GameObjectState*)e.GetSender())
			return this->SendInput("ANIMATION_STOPPED");
}

GameObject::GameObjectState* GameObject::AddState(const char* szName)
{
	GameObjectState* state = m_States.CreateDerived<GameObjectState>();
	state->SetName(szName);

    return state;
}

void GameObject::SetAnimation(Animation* ani)
{
	// TODO: Should set the CURRENT state's animation
	if (m_States.Size())
		((GameObjectState*)m_States[m_States.Size()-1])->SetRenderable(ani);
	else
		throw "GameObject: Does not have any states.";
}

void GameObject::SetStateAnimation(const char* stateName, Animation* ani)
{
	GameObjectState* state = (GameObjectState*)GetState(stateName);
	state->_Renderable = ani;
}

void GameObject::GameObjectState::OnEnter(State* prev)
{
	_RunTime = 0;
	_Renderable->SetVisibility(true);

	switch(_Renderable->GetRenderableType())
	{
	case RENDERABLE_TYPE_ANIMATION:
		((Animation*)_Renderable)->Play();
		break;
	}
}

bool GameObject::GameObjectState::OnExecute(float time)
{
	_RunTime += time;

	switch(_Renderable->GetRenderableType())
	{
	case RENDERABLE_TYPE_ANIMATION:
		{
			Animation* animation = (Animation*)_Renderable;

			if (animation->Update(time))
				return true;
			else
				return false;
		}
		break;
	}

	if (_ExecuteTime > 0 && _RunTime >= _ExecuteTime) {
		return false;
	}

	return true;
}

void GameObject::GameObjectState::OnExit(void)
{
	switch(_Renderable->GetRenderableType())
	{
	case RENDERABLE_TYPE_ANIMATION:
		((Animation*)_Renderable)->Stop();
		break;
	}

	_Renderable->SetVisibility(false);
}

void GameObject::Setup(void) 
{
	Engine2D::GetInstance()->GetEventSystem()->RegisterCallback<GameObject>("ANIMATION_STOPPED",this,&GameObject::_OnAnimationStopped);
}

void GameObject::Shutdown(void)
{
	Engine2D::GetInstance()->GetEventSystem()->UnregisterAll<GameObject>(this, &GameObject::_OnAnimationStopped);
}