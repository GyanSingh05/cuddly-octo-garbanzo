#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int > doctor;
 vector<int > ::iterator it;

for (int it = 0; it < 10; it++)
{
    doctor.push_back(rand());
}

for ( it = doctor.begin(); it != doctor.end(); it++)
{
    cout<<*it<<endl;
}

  



   return 0;
}