#include<iostream>
#include<string>
using namespace std;
int main()
{

string input;
cin>>input;


if (input[8]=='A'){
    
    if (input[0]=='1' && input[1]=='2')
    {
     cout<<"00"<<input.substr(2,6);   
    }
    else{ 
        cout<<input.substr(0,8);
    }

}



else if(input[8]=='P'){
    
   if (input[0]=='1' && input[1]=='2')
    {
     cout<<"12"<<input.substr(2,6);   
    }
    else{ 
        
        int k= stoi(input.substr(0,2));
        k=k+12;
        
        cout<<k<<input.substr(2,6);
    }
}


   return 0;
}