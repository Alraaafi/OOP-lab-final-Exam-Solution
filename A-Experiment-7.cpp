#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,i,j,k=2;
    cout<<"Enter N: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1;j<=n*2-i*2; j++) cout<<" ";
        for(j=1;j<=i*2-1; j++)
        {
            if((i*2)/2>=j )
              {
                  cout<<left<<setw(2)<<(char)(j+64);
                  k=j+64;
              }
            else
            {

                cout<<left<<setw(2)<<(char)(--k);
            }
        }
        cout<<endl;
    }
    //patent by �Alraaafi
}
