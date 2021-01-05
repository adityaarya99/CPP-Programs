/******************************************************************************

 I am your Host and Dost ADITYA ARYA!!!!!!!!!!!!!

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int num1,num2,gcd;
  cout<<"Enter your first  Number";
 cin>>num1;
 cout<<"Enter your second Number";
 cin>>num2;
 for(int i=1;i<=num1 && i<=num2;++i)
 {
     if(num1%i==0 && num2%i==0)
     {
         gcd = i;
     }
 }
 cout<<"Your GCD is "<<gcd;
    return 0;
}
