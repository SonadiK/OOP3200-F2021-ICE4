#pragma once

#ifndef __GAME_OBJECT__
#define __GAME_OBJECT
#include "Vector2D.h"

class GameObject
{
public:
	//default constructor
	GameObject();
	//Parameterized constructor
	GameObject(int id, float x, float y);
	GameObject(int id, const Vector2D& position);
	//Rule of three
	//Destructor
	~GameObject();
	//copy constructor
	GameObject(const GameObject& other_object);
	//Assignment operator
	GameObject& operator=(const GameObject& other_object);

	//Accessor
	Vector2D GetPosition() const;
	int GetID() const;

	//Mutator
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& new_position); //set the position by passing in the reference to the vector
	void SetID(int id);

	//utility functions
	std::string ToString() const;

private:
	Vector2D m_position;//member variable
	int m_id;
};

#endif/*defined (__GAME_OBJECT__)*/
