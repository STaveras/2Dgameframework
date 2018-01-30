// main.cpp
#include "Engine2D.h"
#include "Input.h"
#include "InputEvent.h"
#include "Game.h"
#include "GameState.h"
#include "GameObject.h"
#include "Renderer.h"
#include "Window.h"

#include "SDSParser.h"

//Game *game = NULL;

class FlappyTurd : public Game
{
   class PlayState : public GameState
   {
      Player* _Player; // Probably should just go in GameState...?
      Sprite* _Background;

      class Turd : public GameObject
      {
         // Currently unused
         //class TurdState : public GameObjectState
         //{
         //public:
           // void OnEnter()
           // {
           //	 //GameObjectState::OnEnter();
           // }

           // void OnExit()
           // {

           // }
         //};

      public:
         Turd(void)
         {
            GameObjectState* Falling = this->AddState("Falling");
            Falling->setRenderable(new Sprite("./data/images/turd0.png", 0xFFFF00FF));
            Falling->setDirection(vector2(0.01f, 1.0f));
            Falling->setForce(10);

            GameObjectState* Rising = this->AddState("Rising");
            Rising->setRenderable(new Sprite("./data/images/turd1.png", 0xFFFF00FF));
            Rising->setExecuteTime(0.27);
            Rising->setDirection(vector2(0.0f, -1.0f));
            Rising->setForce(100);

            RegisterTransition("Falling", "BUTTON_PRESSED", "Rising");
            RegisterTransition("Rising", "BUTTON_PRESSED", "Rising"); // lets you chain together flaps
         }

         ~Turd(void) 
         {
            for (unsigned int i = 0; i < m_States.Size(); i++)
               delete ((GameObjectState*)m_States.At(i))->GetRenderable();
         }
      };

   public:

      void OnEnter(void)
      {
         GameState::OnEnter();

         _Background = AddSprite("./data/images/bg.png");

         _objectManager.AddObject("Turd", new Turd);
         _objectManager.GetGameObject("Turd")->Initialize();

         _Player = new Player;
         _Player->SetGamePad(_inputManager.CreateGamePad());
         _Player->GetGamePad()->AddButton(VirtualButton("BUTTON", KBK_SPACE));
         _Player->SetGameObject(_objectManager.GetGameObject("Turd"));
         _Player->Setup();
      }

      //void OnExecute(float time)
      //{
      //   GameState::OnExecute(time);
      //}

      void OnExit(void)
      {  
         // Figure out pausing...? (Wrapping this in a 'paused' bool before pushing the PauseState?)
         _Player->Shutdown();

         _objectManager.RemoveObject("Turd");

         delete _Player->GetGameObject();
         delete _Player;

         RemoveSprite(_Background);

         GameState::OnExit();
      }
   };

   friend PlayState;

public:
   void Begin(void)
   {
      this->push(new PlayState);
   }

   void End(void)
   {
      void* playState = this->top(); this->pop(); delete playState;
   }
}game;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
   Window rndrWind = Window(320, 460, "Flap a Turd", "� � � �");
   rndrWind.Initialize(hInstance, lpCmdLine);

   DirectInput* pInput = (DirectInput*)Input::CreateDirectInputInterface(rndrWind.GetHWND(), hInstance);
   RendererDX* pRenderer = (RendererDX*)Renderer::CreateDXRenderer(rndrWind.GetHWND(), 320, 480, false, false);

   Engine2D* engine = Engine2D::GetInstance();
   engine->SetInputInterface(pInput);
   engine->SetRenderer(pRenderer);
   engine->SetGame(&game);
   engine->Initialize();

   while (!rndrWind.HasQuit() && !engine->HasQuit())
   {
      rndrWind.Update();
      engine->Update();
   }

   engine->Shutdown();

   Input::DestroyInputInterface(pInput);
   Renderer::DestroyRenderer(pRenderer);

   rndrWind.Shutdown();
}
// Stan Taveras 