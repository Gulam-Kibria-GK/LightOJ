#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll i,j=0,k,t,n,m;
	cin>>t;
	while(t--){
		j++;
		char ch;
		cin>>n>>m;
		ll arr[n+2];
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		ll x,y;
		while(m--){
			cin>>ch;
			if(ch=='R'){
				reverse(arr+0,arr+n);
			}
			else if(ch=='P'){
				cin>>x>>y;
				swap(arr[x],arr[y]);
			}
			else if(ch=='S'){
				cin>>x;
				for(i=0;i<n;i++){
					arr[i]=arr[i]+x;
				}
			}else if(ch=='M'){
				cin>>x;
				for(i=0;i<n;i++){
					arr[i]=arr[i]*x;
				}
			}else if(ch=='D'){
				cin>>x;
				for(i=0;i<n;i++){
					arr[i]=arr[i]/x;
				}
			}
		}
		cout<<"Case "<<j<<":"<<endl;
		for(i=0;i<n-1;i++){
			cout<<arr[i]<<" ";
		}
		cout<<arr[n-1]<<endl;
	}
}
