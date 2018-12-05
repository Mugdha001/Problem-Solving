//insertion sort
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
   int key=0;
   for(i=1; i<arrsize; i++){
       key=arr[i];
       j=i-1;
       while(j>=0 && key<arr[j]){
           arr[j+1]=arr[j];
           arr[j]=key;
           j--;
       }
   }
   
   for(i=0; i<arrsize; i++){
       cout<<arr[i]<<"\t";
   }
   
   return 0;
}