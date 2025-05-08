// Que:22:-.Write a C++ program to demonstrate the use of dynamic_cast for safe downcasting in a polymorphic class hierarchy.

#include <iostream>
#include <typeinfo> // For typeid
using namespace std;

// Base class (must have at least one virtual function for dynamic_cast)
class Animal {
public:
    virtual void speak() const { cout << "Animal sound\n"; }
    virtual ~Animal() {} // Virtual destructor for safe polymorphism
};

// Derived class 1
class Dog : public Animal {
public:
    void speak() const override { cout << "Woof!\n"; }
    void fetch() const { cout << "Dog fetches the stick.\n"; }
};

// Derived class 2
class Cat : public Animal {
public:
    void speak() const override { cout << "Meow!\n"; }
    void purr() const { cout << "Cat purrs...\n"; }
};

int main() {
    // Create base class pointer pointing to a Dog
    Animal* animalPtr = new Dog();

    // Safe downcasting using dynamic_cast
    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr);
    if (dogPtr) { // Check if cast succeeded
        cout << "Downcast to Dog successful.\n";
        dogPtr->fetch(); // Call Dog-specific method
    } else {
        cout << "Downcast to Dog failed.\n";
    }

    // Attempt invalid downcast (Animal* is a Dog, not a Cat)
    Cat* catPtr = dynamic_cast<Cat*>(animalPtr);
    if (catPtr) {
        cout << "Downcast to Cat successful.\n";
        catPtr->purr();
    } else {
        cout << "Downcast to Cat failed (expected, since animalPtr points to a Dog).\n";
    }

    // Cleanup
    delete animalPtr;
    return 0;
}

// Output
// Downcast to Dog successful.
// Dog fetches the stick.
// Downcast to Cat failed (expected, since animalPtr points to a Dog).