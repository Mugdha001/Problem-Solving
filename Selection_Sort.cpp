//selection sort
#include <iostream>
using namespace std;

int main()
{  
   int arrsize;
   int ele;
   cout<<"Enter size of array"<<endl;
   cin>>arrsize;
   int arr[arrsize];
   cout<<"Enter array elements"<<endl;
   int i=0,j=0;
   for(i=0; i<arrsize; i++){
       cin>>ele;
       arr[i]=ele;
   }
   int temp=0;
   int min=0;
   int pos=0;
   for(i=0; i<arrsize-1; i++){
       min=arr[i];
       for(j=i; j<arrsize; j++){
           if(arr[j]<min){
               min=arr[j];
               pos=j;
               
           }
       }
       if(arr[i]!=min){
       temp=arr[i];
       arr[i]=min;
       arr[pos]=temp;
       }
   }
   
   for(i=0; i<arrsize; i++){
       cout<<arr[i]<<"\t";
   }
   
   return 0;
}