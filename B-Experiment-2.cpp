#include <iostream>
using namespace std;
void swp(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int a = 10;
    int b= 20;
    
    swp(&a,&b); //cal by ref
    cout<<a<<" "<<b<<endl; 

    //Alraaafi
}