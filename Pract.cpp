#include <iostream>
using namespace std;

struct subject{
    int id;
    string name;
    float point;
    string grade;
};

int main(){

// //First subject
//     subject mySubject1;
//     mySubject1.id = 1;
//     mySubject1.name = "math";
//     mySubject1.point = 80;
//     mySubject1.grade = "b";
// // Second subject 

//     subject mySubject2;
//     mySubject2.id = 1;
//     mySubject2.name = "Programming";
//     mySubject2.point = 90;
//     mySubject2.grade = "a";

// // printing

// cout << mySubject1.name << mySubject1.grade << mySubject1.point;

string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

    return 0;
}