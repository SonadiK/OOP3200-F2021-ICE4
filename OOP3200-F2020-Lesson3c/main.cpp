#include <iomanip>
#include <iostream>

#include "GameObject.h"
#include "Vector2D.h"

int main()
{
	//GameObject gameObject1;
	int id1;
	std::cout << "Enter the first gameObject ID: ";
	std::cin >> id1;
	Vector2D point1;
    std::cout << "Enter the first point (x, y): ";
	std::cin >> point1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point1 << " for the first gameObject" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	GameObject gameObject1(id1, point1);

	//GameObject gameObject2;
	int id2;
	std::cout << "Enter the second gameObject ID: ";
	std::cin >> id2;
	Vector2D point2;
	std::cout << "Enter the second point (x, y): ";
	std::cin >> point2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point2 << " for the second gameObject" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	//gameObject1.SetPosition(point2);
	GameObject gameObject2(id2, point2);

	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first gameObject is: " << gameObject1.GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second gameObject is: " << gameObject2.GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first Game Object and second Game Object is: " << Vector2D::Distance(gameObject1.GetPosition(), gameObject2.GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first Game Object to the second Game Object is: " << Vector2D::SignedAngle(gameObject1.GetPosition(), gameObject2.GetPosition()) << std::endl;

	//display first and second game objects.
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	std::cout << "First Game Object details: " << std::endl;
	std::cout << gameObject1.ToString() << std::endl;

	std::cout << "Second Game Object details: " << std::endl;
	std::cout << gameObject2.ToString() << std::endl;
}

