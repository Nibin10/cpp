// d. Write a program to implement hierarchical inheritance with classes like ""Animal,"" ""Mammal,"" and ""Dog."" 
#include <iostream>
#include <string>

// Base class Animal
class Animal {
protected:
    std::string species;

public:
    // Constructor
    Animal(const std::string& sp) : species(sp) {}

    // Function to display species
    void displaySpecies() const {
        std::cout << "Species: " << species << std::endl;
    }
};

// Derived class Mammal inheriting from Animal
class Mammal : public Animal {
protected:
    bool hasHair;

public:
    // Constructor
    Mammal(const std::string& sp, bool hair) : Animal(sp), hasHair(hair) {}

    // Function to display mammal information
    void displayMammalInfo() const {
        displaySpecies();
        std::cout << "Has Hair: " << (hasHair ? "Yes" : "No") << std::endl;
    }
};

// Derived class Dog inheriting from Mammal
class Dog : public Mammal {
private:
    std::string breed;

public:
    // Constructor
    Dog(const std::string& sp, bool hair, const std::string& br) : Mammal(sp, hair), breed(br) {}

    // Function to display dog information
    void displayDogInfo() const {
        displayMammalInfo();
        std::cout << "Breed: " << breed << std::endl;
    }
};

int main() {
    // Create an object of Dog
    Dog dog("Canis lupus familiaris", true, "Labrador Retriever");

    // Display dog information
    std::cout << "Dog Information:" << std::endl;
    dog.displayDogInfo();

    return 0;
}
