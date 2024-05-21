// d. Create a function that takes a pointer to a structure and modifies its members. 
#include <iostream>
#include <string>

// Define a structure
struct Person {
    std::string name;
    int age;
};

// Function to modify the members of a structure using a pointer
void modifyPerson(Person *ptr) {
    // Check if pointer is not null to avoid dereferencing nullptr
    if (ptr != nullptr) {
        ptr->name = "John Doe";
        ptr->age = 30;
    }
}

int main() {
    // Create an instance of the structure
    Person person;

    // Call the function with a pointer to the structure
    modifyPerson(&person);

    // Print the modified members of the structure
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;

    return 0;
}
