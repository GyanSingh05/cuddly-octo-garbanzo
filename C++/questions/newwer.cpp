#include<iostream>
using namespace std;
void y1917(int y){
    if(y%4==0){
        cout<<"13.09."<<y;
    } 
    else{
         cout<<"12.09."<<y;
    }

}
void y1918(int y){
    cout<<"30.08.1918";
    
    }

void y1919(int y){
    if(y%400==0){
         cout<<"13.09."<<y;
    }
    if(y%4==0 || y%100!=0){
         cout<<"13.09."<<y;
    }
    else{
         cout<<"12.09."<<y;
    }
    
    
}
int main()
{   int year;
     cin >> year ;

     if((year<1700) || (year>2700) ){
        cout<<"INPUT Rejected"<<endl<<"YOU DEGENERATE";
     }
   

    if(year<1918){
        y1917(year);
    }

    if(year==1918){
        y1918(year);
    }
    if(year>1918){
        y1919(year);
    }


   return 0;
}