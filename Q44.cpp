// c. Develop a program to demonstrate function overriding and virtual functions in inheritance hierarchy. 
#include <iostream>
#include <string>

// Base class Animal
class Animal {
public:
    // Virtual function makeSound
    virtual void makeSound() const {
        std::cout << "Animal makes a generic sound" << std::endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    // Override makeSound function
    void makeSound() const override {
        std::cout << "Dog barks: Woof! Woof!" << std::endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    // Override makeSound function
    void makeSound() const override {
        std::cout << "Cat meows: Meow! Meow!" << std::endl;
    }
};

// Derived class Cow
class Cow : public Animal {
public:
    // Override makeSound function
    void makeSound() const override {
        std::cout << "Cow moos: Moo! Moo!" << std::endl;
    }
};

int main() {
    // Create objects of different animals
    Dog dog;
    Cat cat;
    Cow cow;

    // Demonstrate function overriding and virtual functions
    std::cout << "Dog says: ";
    dog.makeSound();

    std::cout << "Cat says: ";
    cat.makeSound();

    std::cout << "Cow says: ";
    cow.makeSound();

    // Using base class pointer to access derived class objects
    Animal* ptrAnimal = nullptr;

    ptrAnimal = &dog;
    std::cout << "Pointer to Dog says: ";
    ptrAnimal->makeSound();

    ptrAnimal = &cat;
    std::cout << "Pointer to Cat says: ";
    ptrAnimal->makeSound();

    ptrAnimal = &cow;
    std::cout << "Pointer to Cow says: ";
    ptrAnimal->makeSound();

    return 0;
}
