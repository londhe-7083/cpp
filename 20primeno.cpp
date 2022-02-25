#include<iostream>
using namespace std;

 int main ()
 {
   int n,i; 
   cout<<"enter a no";
   cin>>n;
 
 for(i=2; i<n; i++)

 {
   if(n%i==0){
   cout<<"is not prime ";
   {break;}   
 }
}

if(i==n)
{cout<<"is prime";}
 
 return 0;
 }