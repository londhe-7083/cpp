#include<iostream>
 using namespace std;

  int main ()
  {
      int col , row;
      cout<<"enter a value of row and column "<<endl;
      cin>>row>>col;

      for(int i=1;i<=row;i++)
      {for(int j=1;j<=col;j++)
      
      {cout<<"  * "; }
      cout<<endl;
      }
      return 0;
      
  }