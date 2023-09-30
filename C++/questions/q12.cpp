#include<iostream>
using namespace std;
void printer(int n){

     if(n==0){
        return;
     }

    else{
        cout<<n<<endl;     
        printer(n-1);
     
    }

}
int main()
{


int n;
cin >> n ;

printer(n);



   return 0;
}