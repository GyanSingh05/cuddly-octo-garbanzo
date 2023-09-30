#include<iostream>
using namespace std;
void Merge(int arr[],int st,int md, int nd){

   int sorted[10];

   int aron[5];
   int bron[5];

   for (int i = 0; i <5; i++)
   {
      aron[i]=arr[i+st];
   }
   for (int i = 0; i < 5; i++)
   {
      bron[i]=arr[i+md+1];
   }
   int sit=0;
   int ait=0;
   int bit=0;

                                             
   while(ait<5 && bit<5){
      if(aron[ait]<bron[bit]){
         arr[sit]=aron[ait];
         sit++;
         ait++;

      }
      else if(aron[ait]>bron[bit]){
      
         arr[sit]=bron[bit];
         sit++;
         bit++;
      }
   }
   while(ait<5){

       sorted[sit]=aron[ait];
         sit++;
         ait++;
         
   }
   while(bit<5){

       sorted[sit]=aron[ait];
         sit++;
         bit++;

   }

   for(int i=0;i<nd ;i++){
   
   
      cout<<sorted[i]<<" ";
   
   
   }
   
   
   
}
   
void MergeSort(int arr[],int start,int mid, int end){

    if(start>=mid || mid>=end){

      return;

    }
   MergeSort(arr,start,(start+mid)/2,mid);
   MergeSort(arr,mid,(end+mid)/2,end);

      Merge(arr,start,mid,end);
   

}


int main()
{

   

   int n;
   cin>>n;
   

   

   int arr[n];

   for (int i = 0; i < n; i++)
   {
      cin>>arr[i];
   }
   
    Merge(arr,0,n/2-1,n-1);

   return 0;
}