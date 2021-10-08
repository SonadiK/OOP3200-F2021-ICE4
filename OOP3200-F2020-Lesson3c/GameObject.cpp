#include "GameObject.h"

GameObject::GameObject(): m_id(0), m_position(Vector2D()) //new empty Vector2D object 
{
}

GameObject::GameObject(const int id, const float x, const float y)
{
	SetID(id);
	SetPosition(x, y);
}

GameObject::GameObject(const int id, const Vector2D& position)
{
	SetID(id);
	SetPosition(position); //call the other position
}

GameObject::~GameObject() //default destructor
= default;

//Copy constructor
GameObject::GameObject(const GameObject& other_object)
{
	SetID(other_object.m_id); //memberwise copy
	SetPosition(other_object.m_position);
}

//Assignment operator
GameObject& GameObject::operator=(const GameObject& other_object)
{
	SetID(other_object.m_id);
	SetPosition(other_object.m_position);
	return (*this);
}

//Defining Accessors.
Vector2D GameObject::GetPosition() const
{
	return m_position;
}

int GameObject::GetID() const
{
	return m_id;
}

//Defining Mutator.
void GameObject::SetID(const int id)
{
	m_id = id;
}

void GameObject::SetPosition(const float x, const float y)
{
	m_position.Set(x, y);
}

//Utility function definition
//set the position by passing in the reference to the vector
void GameObject::SetPosition(const Vector2D& new_position)
{
	m_position = new_position;
}

//output string
std::string GameObject::ToString() const
{
	std::string output_string;
	output_string += "ID      : " + std::to_string(GetID()) + "\n";
	output_string += "Position: " + GetPosition().ToString() + "\n";
	return output_string;
}
