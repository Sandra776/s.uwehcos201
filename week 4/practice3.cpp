#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(0));
    int num1= rand() % 10;
    int num2 = rand()% 10;

    if (num1<num2){
        int num3= num2;
        num2=num1;
        num1=num3;  
    }
    int answ;
    cout<<"What is the difference between two random numbers from 0-9?\n";
    cin>>answ;
    int ans = num1-num2;
    if (answ==ans){
      cout<<"You are correct";
    }else{
        cout<<"You are wrong, the difference is "<<ans;
    }

}
