#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"enter a value"<<endl;
    cin>>n;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        { 
             cout<<"non prime"<<endl;
             break;
        }
    }
    if(i==n){
        cout<<"prime"<<endl;
    }
    return 0;
}