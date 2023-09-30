#include<iostream>
using namespace std;
int main()
{

int n;
cin >> n;

int altitude=0;
int valley=0;
int i_am_at=0;
    for(int i = 1 ; i <= n ; i++ ){

        char k ;
        cin >> k;

        if (k == 'U'){
             
            altitude++;
  
        }

        else if ( k == 'D' ){
            altitude--;

        }


        if( altitude<0 && (i_am_at==0||i_am_at==1))
        
        {
            i_am_at=-1;
            valley++;
        }
        


        else if (altitude<0 && ( i_am_at==-1|| i_am_at==1))
        {
            
        }
        
        else if (altitude>0){


            i_am_at=1;
        }

       else if(altitude==0){
        i_am_at=0;
       }











    
    }

cout<<valley;

   return 0;
}