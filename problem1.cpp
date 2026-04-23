#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char name[50];
    int studentID;
    int age;

public:
    // 1. init() - Initialize member variables
    void init(const char* n, int id, int a) {
        strcpy(name, n);  // Copy name into member variable
        studentID = id;   // Save student ID
        age = a;          // Save age
    }

    // 2. printStudentInfo() - Print student information
    void printStudentInfo() {
        cout << "Name: " << name << ", ID: " << studentID << ", Age: " << age << endl;
    }

    // 3. getID() - Return student ID
    int getID() {
        return studentID;
    }

    // 4. getAge() - Return age
    int getAge() {
        return age;
    }

    // 5. getName() - Return name
    char* getName() {
        return name;
    }

    // Helper functions for swapping
    void setName(const char* n) {
        strcpy(name, n);
    }

    void setID(int id) {
        studentID = id;
    }

    void setAge(int a) {
        age = a;
    }
};

// 6. personSwap() - Swap all information between two Person objects
void personSwap(Person &p1, Person &p2) {
    // Create temporary variables to hold p1's data
    char tempName[50];
    int tempID, tempAge;

    // Store p1's data in temporary variables
    strcpy(tempName, p1.getName());
    tempID = p1.getID();
    tempAge = p1.getAge();

    // Copy p2's data into p1
    p1.setName(p2.getName());
    p1.setID(p2.getID());
    p1.setAge(p2.getAge());

    // Copy temporary data (p1's original data) into p2
    p2.setName(tempName);
    p2.setID(tempID);
    p2.setAge(tempAge);
}

int main() {
    Person alice, bob;

    // Initialize two students
    alice.init("Alice", 2026312345, 20);
    bob.init("Bob", 2019354321, 25);

    cout << "Before Swap:" << endl;
    alice.printStudentInfo();
    bob.printStudentInfo();

    cout << endl;

    // Swap their information
    personSwap(alice, bob);

    cout << "After Swap:" << endl;
    alice.printStudentInfo();
    bob.printStudentInfo();

    return 0;
}
