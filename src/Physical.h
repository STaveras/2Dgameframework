#pragma once

// I'm going to just... plug in a library :|

#include "Positionable.h"
#include "Cyclable.h"

// For actually making physics a thing in this "engine" sometime in the future...
class Physical : public Positionable, public Cyclable
{
protected:

	bool _static;

	float _mass;
	float _rotation;
	float _restitution;

	vector2 _velocity;

public:
	Physical(void) :
		Cyclable(),
		_static(false),
		_mass(1.0f),
		_rotation(0.0f),
		_restitution(1.0f), // bouncy ;)
		_velocity(0.0f, 0.0f) {

	}

	bool isStatic(void) const { return _static; }

	float getMass(void) const { return _mass; }
	float getRotation(void) const { return _rotation; }
	float getRestitution(void) const { return _restitution; }

	void setMass(float mass) { _mass = mass; }
	void setRotation(float rotation) { _rotation = rotation; } // UNDONE: PLEASE DON'T USE THIS ON ANYTHING OTHER THAN A CAMERA (cus collision objects don't rotate yet... :/)
	void setStatic(bool isStatic) { _static = isStatic; }

	vector2 getVelocity(void) const { return _velocity; }
	void setVelocity(vector2 velocity) { _velocity = velocity; }

	virtual void addImpulse(vector2 direction, double force) {

		_velocity += (direction * (float)force);

	}

	virtual void update(float time) {

		if (_static)
			return;

		this->setPosition(this->getPosition() += _velocity * time);

	}

	virtual void collision(Physical* body) {

		if (_static)
			return;

		//vector2 toBody = body->getPosition() - this->getPosition();

		//float distance = toBody.length();

		//toBody.normalize();

		//this->setPosition(this->getPosition() - toBody);

	}
};
