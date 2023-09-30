#include<iostream>
using namespace std;
void pointer(int* ptr){
    *ptr++;
    return;
}
int main()
{

int x=10;
pointer(&x);


cout<<x;

   return 0;
}