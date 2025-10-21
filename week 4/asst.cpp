#include <iostream>
#include <ctime>
#include <string> 
#include <cstdlib>

using namespace std;

int main(){
    //input
    string name;
    bool student;
    int course;
    int loc;

    cout<<"Input your full name:";
    getline(cin, name);
    cout<<"\nAre you a PAU student?(1 for yes 0 for no):";cin>>student;
    cout<<"\nChoose the number beside the course you are studying\n1-photography\n2-painting\n3-fish farming\n4-Baking\n5-Public Speaking:\n";cin>>course;
    cout<<"\nChoose number beside the Location of choice\n1-Camp House A\n2-Camp House B\n3-Camp House C\n4-Camp House D\n5-Camp House E:\n";cin>>loc;

    //calc
    int days;
    int reg;
    int lodg;
    double discl;
    double discr;
    string courn;
    string locn;
    string stud;
    int promo;

    if(course ==1){
      courn ="photography";
      days=3;
      reg= 10000;
    }else if (course==2)
    {
      courn ="painting";
      days=5;
      reg= 8000;
    }else if (course==3)
    {
          courn ="Fish Farming";
          days=7;
          reg= 15000;
    }else if (course==4)
    {
          courn ="Baking";
          days=5;
          reg= 13000;
    }else if (course==5)
    {
          courn ="Public Speaking";
          days=2;
          reg= 5000;
    }
    

    if (loc==1){
        locn = "Camp House A";
        lodg= 10000;
    }else if (loc ==2)
    {
      locn = "Camp House B";
      lodg= 2500;
    }else if (loc ==3)
    {
      locn = "Camp House C";
      lodg= 5000;
    }else if (loc ==4)
    {
      locn = "Camp House D";
      lodg= 13000;
    }else if (loc ==5)
    {
      locn = "Camp House B";
      lodg= 5000;
    }
    
    
    if (student==1 && (loc==1 || loc==2)){
        stud ="(PAU Students:yes)";
        lodg= lodg-(lodg*0.05);
    }else{
       stud ="(PAU Student:no)" ;
    }
    
    if(days>5 || reg>12000){
       reg= reg-(reg*0.03);
    }
    double lodgt= lodg*days;
    double total = lodgt+reg;
    srand(time(0));
    int bonus= (rand() % 99)+1;

    if (bonus== 7 || bonus==77){
      promo = 500;
      total=total-promo;
    }else{
        promo=0;
    }

    cout<<"Name: "<<name<<" "<<stud<<"\nCourse: "<<courn<<"\nRegistration: N"<<reg<<"\nLodging: N"<<lodg<<"x"<<days<<"= N"<<lodgt<<"\nRandom draw: "<<bonus<<" Promo Applied: N"<<promo<<"\nTOTAL: N"<<total;
}