#include<iostream>
using namespace std;
class students{
      public:
      string name;
      int age;
      string stream;

   void print(){
      cout<<"name: "<<name<<endl;
      cout<<"age: "<<age<<endl;
      cout<<"stream: "<<stream<<endl;
      cout<< endl;

   }

};
int main()
{


 int n;
 cout<<"enter the number of students:"<<endl;
 cin>>n;

 students st[n];

 for(int i=0;i<n;i++){
   
 cout<<endl;
 cout<<"enter name of "<<i+1<<"th student :"<<endl;
 cin>>st[i].name;
 if(st[i].name=="terminate"){
   break;
 }
 
      cout<<"enter age: "<<i+1<<"th student :"<<endl;
      cin>>st[i].age;
      cout<<"enter stream: "<<i+1<<"th student :"<<endl;
      cin>>st[i].stream;
   
 
 
 }

 cout<<endl<<"=================================================================================================================================="<<endl<<endl;
            
for (int i = 0; i < n; i++)
{
   
   if(st[i].name=="terminate"){
   break;
 }
 cout<<i+1<<"th student";
   st[i].print();
}

   return 0;
}