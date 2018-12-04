//bubble sort
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
   for(i=0; i<arrsize-1; i++){
       for(j=0; j<arrsize-i; j++){
           if(arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
           //cout<<arr[j]<<"\t";
       }
       //cout<<endl;
   }
   for(i=0; i<arrsize; i++){
       cout<<arr[i]<<"\t";
   }
   
   
   return 0;
}