#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;
 
// Create a simple class with attributes and methods.
// Instantiate objects from the class and call their methods
class Person{
    public:
    string f_name, l_name;
    int age;
    void printName(){
        cout << f_name << " " << l_name << endl;
        }
    void age_person(){
        cout << age;
    }
};

int main(){
    Person p1;
    p1.f_name = "Megumi";
    p1.l_name = "Kato";
    p1.age = 23;
    p1.printName();
    p1.age_person();
    return 0;
}