#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<chrono>
using namespace std;
using namespace chrono;


int main() {
    auto start = high_resolution_clock::now();
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    string h;
    int hr;
    cin>>s;
    hr = ((s[0]-'0')*10)+(s[1]-'0');
    if(s[8]=='P'&&s[9]=='M'&& hr ==12) cout<<to_string(hr);
    else if(s[8]=='P'&&s[9]=='M') cout<<to_string(hr+12);
    else if(s[8]=='A'&&s[9]=='M'&&hr==12) cout<<"00";
    
    else cout<< s[0]<<s[1];
    
   
    for(int i =2;i<8;i++)
        cout<<s[i];
    cout<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
 
// To get the value of duration use the count()
// member function on the duration object
cout << duration.count() << endl;
    return 0;
}