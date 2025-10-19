#include <iostream>

using namespace std;

int main(){
 double purchase_amount;
 const double rate = 0.06;
 cout<<"Input Purchase Amount\n";cin>>purchase_amount;
 double sales_tax = purchase_amount*rate;
 cout<<"Your sales tax is "<<sales_tax;
 return 0;
}
