#include<thread>
#include<iostream>
#include<iostream>
#include<chrono>

using namespace std;
int main()
{

    string org="hello world";
    string main=" ";
    char user;
    for (int i = 0; i < 11; i++)
    {
        if(i==5){
            main=main+' ';
            continue;
        }
        for (int j = 97; j <= 122; j++)
        {
            this_thread::sleep_for(chrono::milliseconds(1));
            user=j;
            main=main+user;
            cout<<main<<endl;
            if(user==org[i]){
                break;user='\0';
            }
            
         main.pop_back();
        }
        
    }
    





   return 0;
}