#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
int temp,max,k;
  cout<<"enter k to find k largest elements";
  cin>>k;
 for(int i=0;i<k;i++){
   for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;}
          max=a[n-i-1];
        }
      cout<<"the largest element in the pass is "<<i<<" "<<max<<"\n";
       }
} 
   

int main(){
  int n,l;
  cout<<"enter n";
  cin>>n;
  int a[n];
  cout<<"enter array elements";
  for(int i=0;i<n;i++)
    cin>>a[i];
  bubblesort(a,n);
  cout<<"the sorted array is \n";
  for(int i=0;i<n;i++)
   cout<<a[i]<<"\n";
  return 0;
}
