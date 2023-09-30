#include <bits/stdc++.h> 
#include <vector>
vector<int> findSpans(vector<int> &price) {
        int testcases;
    cin >> testcases;

    for(int i=1;i<=testcases;i++){
    
    
           int n;
    cin >> n ; 

    int price[n];

    for(int i=0; i<n ; i++){

        cin>>price[i];


    }

    int span[n]={0};

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j >=0; j--)
        {
            if(price[j]<=price[i]){
                span[i] =span[i]+1;
            }
            if (price[j]>price[i]){
               
                break;
                
            }
        }
        
    }
    
    
}
return span;
}