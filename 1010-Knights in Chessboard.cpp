#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll i,j=0,k,n,m,a;
	cin>>k;
	while(k--){
		j++;
		cin>>n>>m;
		cout<<"Case "<<j<<": ";
		ll temp=min(n,m);
		m=max(n,m);
		n=temp;
		if(n==1){
			cout<<m<<endl;
		}
		else if(n==2){
			if(m%2){
				cout<<m+1<<endl;
			}
			else{
				if((m/2)%2==0){
					cout<<m<<endl;
				}
				else{
					cout<<m+2<<endl;
				}
			}
		}
		else{
			cout<<((n*m)/2+(n*m)%2)<<endl;
		}
	}
}
