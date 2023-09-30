//to reverse output a string using recursions
#include<iostream>
using namespace std;
void revstr(string str){
 if(str.length()==0){
   return;
   }
 
 revstr(str.substr(1));
 cout<<str[1];

}
int main()
{

string str;
cin>>str;

revstr(str);





   return 0;
}