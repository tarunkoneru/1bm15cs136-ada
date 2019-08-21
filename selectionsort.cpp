#include<iostream>
using namespace std;
int smallest(int arr[],int n,int j){
 int pos=j,small=arr[j];
 for(int i=j+1;i<n;i++){
      if(arr[i]<small){
          pos=i;
          small=arr[i];
      }
}
return pos;
}

void selectionsort(int a[],int n,int l){
    int index,temp;
   for(int i=0;i<l;i++){
      index=smallest(a,n,i);
       temp=a[i];
       a[i]=a[index];
       a[index]=temp;
   }
   cout<<"the kth smallest element is "<<a[l-1]<<"\n";
 
}
         
int main(){
  int n,l;
  cout<<"enter n";
  cin>>n;
  int a[n];
cout<<"enter k to find kth samllest element";
 cin>>l;
  cout<<"enter array elements";
  for(int i=0;i<n;i++)
    cin>>a[i];
  selectionsort(a,n,l);
cout<<"the sorted array is \n";
 for(int i=0;i<n;i++)
   cout<<a[i]<<"\n";
  return 0;
}

