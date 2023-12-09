#include <iostream>
using namespace std;
class Counter {
public:
  static int count1;
  int count2=0;

  void print()
  {
      cout << ++count1 << " " << ++count2 <<endl;
  }
};

int Counter::count1;

int main() {
    Counter obj1,obj2,obj3;
    obj1.print();
    obj1.print();
    obj2.print();
    obj3.print();
    obj3.print();
//Alraaafi
  return 0;
}
