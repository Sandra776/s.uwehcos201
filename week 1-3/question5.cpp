#include <iostream>
using namespace std;

int main(){
    double prin, rate;
    cout<<"Interest calculator program\nEnter starting balance:\n";
    cin>>prin;
    cout<<"Enter annual interest rate:\n";
    cin>>rate;
    double balance1 = prin+(prin*rate)/100;
    cout<<"Balance after one year= "<<balance1<<"\n";
    double balance2 = balance1 +(balance1*rate)/100;
    cout<<"Balance after 2 years= "<<balance2;
}