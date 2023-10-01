#include<iostream>
using namespace std;
class hero{
          private:
          string name;
          char clas;
          public:
          
          
      hero(){

      }
      hero(string name , char clasxs){

         this->name=name;
         this->clas=clasxs;

      }
       

     void setname(string name){
        this->name=name;
        return ;
     }
     void setclass( char clas){
          this->clas= clas;
          return ;
     }
     string getname(){
          return name;
     }
     char getclass(){
          return clas;
     }

};
int main()
{

   hero saitama;
   saitama.setname("saitama sensei");
   saitama.setclass('c');
    cout<< saitama.getname() << endl << saitama.getclass()<<endl;
    saitama.setname("genos kun");
    saitama.setclass('s');
    cout<< saitama.getname() << endl << saitama.getclass()<<endl;
    hero bang(saitama);
    cout<< bang.getname() << endl << bang.getclass()<<endl;
   return 0;
}