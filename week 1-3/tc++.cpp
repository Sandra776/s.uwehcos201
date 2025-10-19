//header tags(inout output stream)
#include <iostream>
//global
using namespace std;
const float PI = 3.142; 
int main(){
 //local
 double r;
 cout<<"Put radius jo!!";cin>>r;
// cout<<"        *\n       * *\n      *   *\n     *******\n    *       *\n   *         *";
 double area = r*r*PI;
 cout<<area;
 return 0;
}
