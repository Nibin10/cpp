// b. Implement multiple inheritance by creating classes like ""Student"" and ""Employee"" inheriting from classes like ""Person"" and ""WorkDetails."" 
#include <iostream>
#include <string>

// Base class Person
class Person {
protected:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Function to display information
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Base class WorkDetails
class WorkDetails {
protected:
    std::string company;
    double salary;

public:
    // Constructor
    WorkDetails(const std::string& c, double s) : company(c), salary(s) {}

    // Function to display work details
    void displayWorkDetails() const {
        std::cout << "Company: " << company << ", Salary: " << salary << std::endl;
    }
};

// Derived class Student inheriting from Person
class Student : public Person {
private:
    int studentID;

public:
    // Constructor
    Student(const std::string& n, int a, int id) : Person(n, a), studentID(id) {}

    // Function to display student information
    void displayStudentInfo() const {
        std::cout << "Student ID: " << studentID << std::endl;
    }
};

// Derived class Employee inheriting from Person and WorkDetails
class Employee : public Person, public WorkDetails {
private:
    int employeeID;

public:
    // Constructor
    Employee(const std::string& n, int a, const std::string& c, double s, int id)
        : Person(n, a), WorkDetails(c, s), employeeID(id) {}

    // Function to display employee information
    void displayEmployeeInfo() const {
        std::cout << "Employee ID: " << employeeID << std::endl;
    }
};

int main() {
    // Creating objects of Student and Employee
    Student student("John", 20, 1234);
    Employee employee("Alice", 30, "ABC Company", 50000, 5678);

    // Displaying student information
    std::cout << "Student Information:" << std::endl;
    student.displayInfo();
    student.displayStudentInfo();
    std::cout << std::endl;

    // Displaying employee information
    std::cout << "Employee Information:" << std::endl;
    employee.displayInfo();
    employee.displayWorkDetails();
    employee.displayEmployeeInfo();

    return 0;
}
