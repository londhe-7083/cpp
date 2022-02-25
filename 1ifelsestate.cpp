#include<iostream>
 using namespace std; 

  int main (){
    int saving ;

    cout<<"saving" ;
    cin>>saving;

    if (saving<5000)
    {
     // cout<<"going to road trip";

      if(saving<4500)
      cout<<"going to hotel";

      else
      cout<<" going with harshee";

    }

    else if (saving<30000)
    cout<<"going to party 2";

    else 
    cout<<"way to pune ";

    return 0;
  }