/*
 * Project OOP3200 - F2021_ICE4
* @author Sonadi Kannangara
* @studentID  100778336
* @version 1.0
* @date    05 October 2021
* Last modified date : 08 October 2021
* Activity    ICE 4 - In Class Exercise 4
 *
 */

 // OOP3200-F2021-ICE4.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iomanip>
#include <iostream>
#include <vector>

#include "GameObject.h"
#include "vector"

//constructing gameObject array
static void BuildGameObjects(std::vector<GameObject*>& game_objects, const int num = 2)
{
	for(auto count = 0; count < num; ++count)
	{
		int id;
		std::cout << "Enter the first gameObject ID: ";
		std::cin >> id;
		Vector2D point;
		std::cout << "Enter the gameObject position (x, y): ";
		std::cin >> point;
		std::cout << "\n--------------------------------------------------------------" << std::endl;
		std::cout << "You entered  " << id << " for the gameObject's ID " << std::endl;
		std::cout << "You Entered " << point << " for the gameObject's position" << std::endl;
		std::cout << "--------------------------------------------------------------\n" << std::endl;
		//auto find the type by itself.
		auto* gameObject = new GameObject(id, point); //use new as a pointer to add memory to the heap
		game_objects.push_back(gameObject);
	}
}

static void CompareGameObjects(GameObject* object1, GameObject* object2)
{
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first gameObject is: " << object1->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second gameObject is: " << object2->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first Game Object and second Game Object is: " << Vector2D::Distance(object1->GetPosition(), object2->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first Game Object to the second Game Object is: " << Vector2D::SignedAngle(object1->GetPosition(), object2->GetPosition()) << std::endl;

	//display first and second game objects.
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	std::cout << "First Game Object details: " << std::endl;
	std::cout << object1->ToString() << std::endl;

	std::cout << "Second Game Object details: " << std::endl;
	std::cout << object2->ToString() << std::endl;
}

int main()
{
	std::vector<GameObject*> gameObjects; 

	int num_of_GO;
	std::cout << "How many gameObjects do you need?: ";
	std::cin >> num_of_GO;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	BuildGameObjects(gameObjects,num_of_GO);

	int index1;
	std::cout << "What is the first object index?: ";
	std::cin >> index1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	int index2;
	std::cout << "What is the second object index?: ";
	std::cin >> index2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	CompareGameObjects(gameObjects[index1], gameObjects[index2]);
	CompareGameObjects(gameObjects[index1], gameObjects[index2]);
}

