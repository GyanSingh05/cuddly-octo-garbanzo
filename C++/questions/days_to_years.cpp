#include<iostream>
using namespace std;
int main()
{

    int days;
    cin >> days;

    bool stopper=true;
    int years=0;
    int months=0;
    int weeks=0;
    
    while(stopper){

        if(days>=365){
            days=days-365;
            years++;
            }
        else if (days<365 && days>=30){
            days=days-30;
            months++;
        }
        else if(days<30 && days>=7){
            days = days - 7;
            weeks++;
        }
        else if(days<7 && days>=0){
            stopper=false;
        }

    }
    

        cout<<years<<" years, "<<months << " months, "<< weeks <<" weeks and "<<days<<" days;";



   return 0;
}