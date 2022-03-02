#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll i,j=0,k,n,m,a,b;
	cin>>k;
	while(k--){
		j++;
		cout<<"Case "<<j<<": ";
		cin>>n>>m>>a>>b;
		if(abs(n-a)==abs(m-b)){
			cout<<1<<endl;
		}
		else if(((n+m)%2)==((a+b)%2)){
				cout<<2<<endl;
		}
		else{
			cout<<"impossible"<<endl;
		}
	}
}
