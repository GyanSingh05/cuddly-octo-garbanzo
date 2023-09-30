#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int items, noteat;
    cin >> items >> noteat;
    
    vector<int> arra;
    
       
    for(int i=0; i<items; i++){
        
        int entry;
        cin>>entry;
        arra.push_back(entry);
        
    }
    
    
    int paid;
    cin>>paid;
    int payback;
    int total=0;
    for (int i=0; i<items; i++) {
        if(i==noteat)continue;
        total=total+arra[i];
    }
    
    if((total/2)==paid){
        cout<<"Bon Appetit";
    }
    else if((total/2)<paid){
        cout<<(paid-(total/2));
    }
    else if((total/2)>paid){
        cout<<(paid-(total/2));
    }
    
    
    
    
    
    
    return 0;
}