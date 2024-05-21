// e. Create a program to demonstrate the use of access specifiers like private, protected, and public in inheritance."
#include <iostream>

// Base class
class Base {
private:
    int privateMember;    // Accessible only within Base class
protected:
    int protectedMember;  // Accessible within Base class and its derived classes
public:
    int publicMember;     // Accessible from anywhere
};

// Derived class inheriting privately
class DerivedPrivate : private Base {
public:
    // Access Base's publicMember publicly
    void accessPublicMember() {
        std::cout << "DerivedPrivate accessing Base's public member: " << publicMember << std::endl;
    }
    // Trying to access Base's protectedMember and privateMember here would result in compilation errors
};

// Derived class inheriting protectedly
class DerivedProtected : protected Base {
public:
    // Access Base's publicMember publicly
    void accessPublicMember() {
        std::cout << "DerivedProtected accessing Base's public member: " << publicMember << std::endl;
    }
    // Access Base's protectedMember within the derived class
    void accessProtectedMember() {
        std::cout << "DerivedProtected accessing Base's protected member: " << protectedMember << std::endl;
    }
    // Trying to access Base's privateMember here would result in a compilation error
};

// Derived class inheriting publicly
class DerivedPublic : public Base {
public:
    // Access Base's publicMember publicly
    void accessPublicMember() {
        std::cout << "DerivedPublic accessing Base's public member: " << publicMember << std::endl;
    }
    // Access Base's protectedMember publicly
    void accessProtectedMember() {
        std::cout << "DerivedPublic accessing Base's protected member: " << protectedMember << std::endl;
    }
    // Access Base's privateMember would result in a compilation error
};

int main() {
    // Create objects of derived classes
    DerivedPrivate derivedPrivate;
    DerivedProtected derivedProtected;
    DerivedPublic derivedPublic;

    // Trying to access Base's members from derived classes
    // This would result in compilation errors due to different access specifiers used in inheritance

    // derivedPrivate.publicMember = 10; // Error: 'publicMember' is inaccessible
    // derivedPrivate.protectedMember = 20; // Error: 'protectedMember' is inaccessible
    // derivedPrivate.privateMember = 30; // Error: 'privateMember' is inaccessible

    // derivedProtected.publicMember = 10; // Error: 'publicMember' is inaccessible
    // derivedProtected.protectedMember = 20; // Error: 'protectedMember' is inaccessible
    // derivedProtected.privateMember = 30; // Error: 'privateMember' is inaccessible

    // derivedPublic.publicMember = 10; // OK
    // derivedPublic.protectedMember = 20; // Error: 'protectedMember' is inaccessible
    // derivedPublic.privateMember = 30; // Error: 'privateMember' is inaccessible

    // Accessing members from derived classes through member functions
    derivedPrivate.accessPublicMember(); // OK
    // derivedPrivate.accessProtectedMember(); // Error: 'accessProtectedMember' is inaccessible

    derivedProtected.accessPublicMember(); // OK
    derivedProtected.accessProtectedMember(); // OK

    derivedPublic.accessPublicMember(); // OK
    derivedPublic.accessProtectedMember(); // OK

    return 0;
}
