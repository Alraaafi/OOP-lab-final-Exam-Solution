#include <iostream>
using namespace std;
int main() {
    int term,sum=0,multi=0,i,j;

    cout<<"Enter Term of Series: ";
    cin>>term;

    cout<<"The Multiple Series is: "<<endl;
    j=1;
    for(i=1; j<term; i++)
    {
        cout<<i<<"*"<<i+1<<"+";
        sum = sum + (i*(i+1));
        j++;
    }
    cout<<i<<"*"<<i+1<<" = "<<sum+(i*(i+1))<<endl;
    //Alraaafi
}

