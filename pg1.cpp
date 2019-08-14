#include<iostream>
using namespace std;
int main(){
int n,start,end,sqrt,mid;
cout<<"enter num";
cin>>n;
start=0;
end=n-1;
mid=(start+end)/2;
while(start<=end){
if(mid*mid==n){
sqrt=mid;
break;
}
else if(n<mid*mid){
      end=mid-1;}
else{
     start=mid+1;
sqrt=mid;
}
mid =(start+end)/2;
}
 cout<<"the sqrt is"<<sqrt<<endl;
return 0;
}
