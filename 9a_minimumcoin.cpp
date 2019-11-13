#include<bits/stdc++.h> 
using namespace std; 

int minCoins(int coins[], int m, int V) 
{  
if (V == 0) return 0; 
 
int res = INT_MAX; 
for (int i=0; i<m; i++) 
{ 
	if (coins[i] <= V) 
	{ 
		int sub_res = minCoins(coins, m, V-coins[i]); 
		if (sub_res != INT_MAX && sub_res + 1 < res) 
			res = sub_res + 1; 
	} 
} 
return res; 
}  
int main() 
{ 
	int coins[20],m,V;  
    cout<<"Enter no. of coins : ";
    cin>>m;
    for( int i =0;i<m;i++)
    {
        cout<<"Enter coin "<<i+1<<"'s value : ";
        cin>>coins[i];
    }    
    cout<<"Enter value : ";
    cin>>V;
	cout << "Minimum coins required is : "<< minCoins(coins, m, V)<<endl; 
	return 0; 
} 
