#include<iostream>
using namespace std;
int main()
{
    bool counter= false;

    int testcases;
    cin >> testcases;

    int n , d;
    cin>> n >> d;

    int cars[n];
    int speeds[n];

    while (counter!=n)
    {
        for(int i=1;i<=n;i++){
             
            if (cars[i]>=d){
                 continue ; 
                counter= true;
            }
            else {
                cars[i]=cars[i]+speeds[i] ; counter=false;
            }
        
        
        }
    }
    
    



   return 0;
}