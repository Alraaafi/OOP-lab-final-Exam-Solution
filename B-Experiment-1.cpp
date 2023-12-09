#include <iostream>
using namespace std;
class Person {
public:
  string name;
  int age;
  void print_info() {
    cout << "Name: " << name <<endl;
     cout << "Age: " << age <<    endl;
  }
};

int main() {
  Person person1;
  person1.name = "Tanvir Ahmed Rafi";
  person1.age = 19;
  person1.print_info();

 //Alraaafi
}