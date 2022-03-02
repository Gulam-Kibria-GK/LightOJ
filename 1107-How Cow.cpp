#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll i,j=0,k,n,m;
	cin>>k;
	while(k--){
		ll x,y,a,b,p,q;
		cin>>x>>y>>a>>b;
		j++;
		cin>>n;
		cout<<"Case "<<j<<":"<<endl;
		while(n--){
			cin>>p>>q;
			if((x<p && p<a) && (y<q && q<b)){
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}
		}
	}
}
