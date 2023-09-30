#include<iostream>
#include<string>
using namespace std;
int find(int num){
    
    int first;
    int temp=num;
    
    while(temp>9 && temp>0){
       temp= num%10;
       if(temp<9){
        first=temp;
        break;
       }
    }
    return first;

}
int main()
{

    int num;
    cin >> num ;

    string main;
    string temp;

    main=to_string(num);
    
    int nump=num;

    cout<<main<<endl;
    cout<<temp;

    int carry;

    for(int i=1;i<=temp.length();i++){
    
        int maint=stoi(main);
        int mainto=find(maint);

        int temper=mainto*(nump-1);


        temp.push_back(to_string(find(temper)));

        carry=((temper-find(temper))/10); 

    
    }
    
    


   return 0;
}