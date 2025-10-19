#include <iostream>

using namespace std;

int main(){

   int a= 1;
   int b=2;
   cout<<"The original value of A is "<<a<<"\nThe original value of B is "<<b;
   int c=b;
   b=a;
   a=c;
   cout<<"\n\nthe value of A after switch is " <<a<<"\nthe value of B after switch is "<<b<<endl;
   return 0;
}
