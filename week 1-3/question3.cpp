
#include <cmath>
#include <iostream>
using namespace std;

int main(){
    double a,b;
    cout<<"input Length of the other 2 sides to get the hypotenuse\n";
    cin>>a;
    cin>>b;
    double hyp = sqrt(a*a+b*b);
    cout<<"the hypotenuse is "<<hyp;
}