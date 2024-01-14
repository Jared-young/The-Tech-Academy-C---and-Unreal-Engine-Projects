// Assignment 214.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Dog {
public:
    // Properties
    std::string breed;
    std::string color;
    double height;
    double weight;

    // Methods
    void shake() {
        std::cout << "Dog is shaking.\n";
    }

    void sit() {
        std::cout << "Dog is sitting.\n";
    }

    void layDown() {
        std::cout << "Dog is laying down.\n";
    }
};

int main() {
    // Create an instance of the Dog class
    Dog myDog;

    // Set properties for the dog object
    myDog.breed = "Hound";
    myDog.color = "Brown";
    myDog.height = 2.0; // 2 feet
    myDog.weight = 60.0; // 60 pounds

    // Display the state of the dog object
    std::cout << "Dog State:\n";
    std::cout << "Breed: " << myDog.breed << "\n";
    std::cout << "Color: " << myDog.color << "\n";
    std::cout << "Height: " << myDog.height << " feet\n";
    std::cout << "Weight: " << myDog.weight << " pounds\n";

    // Call methods on the dog object
    myDog.shake();
    myDog.sit();
    myDog.layDown();

    return 0;
}