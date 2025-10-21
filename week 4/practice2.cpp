#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Please input your age\n";
    cin>>age;
    if (age >= 18){
        cout<<"Your are an adult";
    }else{

        cout<<"You are NOT an adult";
    }
    return 0;
}