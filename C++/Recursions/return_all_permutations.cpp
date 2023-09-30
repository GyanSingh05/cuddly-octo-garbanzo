#include<iostream>
using namespace std;
void recursion(int n){
  n++;
  cout<< n;

  return;
}
int main()
{

int*n = new int[11];
*n=10;
*n[2]=52;
recursion(*n);




   return 0;
}