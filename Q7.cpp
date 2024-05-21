// Create a variable template that generates a unique ID for each type passed to it.

#include <iostream>
#include <typeinfo>
#include <typeindex>

template<typename T>
constexpr size_t typeID = std::hash<std::type_index>{}(typeid(T));

int main() {
    std::cout << "ID for int: " << typeID<int> << std::endl;
    std::cout << "ID for double: " << typeID<double> << std::endl;
    std::cout << "ID for char: " << typeID<char> << std::endl;
    std::cout << "ID for std::string: " << typeID<std::string> << std::endl;
    return 0;
}