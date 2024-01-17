#include<iostream>
#include<vector>
using namespace std;

int main()
{

int n;
cin>>n;
vector<int> nums;
for (int i = 0; i < n; i++)
{
    int a;
    cin>>a;
    nums.push_back(a);
}


        bool flag=false;
        int array[n]={0};
        for(int i=0;i<n;i++){
            array[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(array[i]>1){
                flag=true;
            }
        }
        return flag;



   return 0;
}