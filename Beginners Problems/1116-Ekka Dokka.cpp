#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll i,j=0,k,n,m,a,b;
	cin>>k;
	while(k--)
	{
		j++;
		cin>>n;
		m=n;
		cout<<"Case "<<j<<": ";
		if(n%2){
			cout<<"Impossible"<<endl;
		}
		else{
			while(true){
					if(n%2){
						cout<<n<<" "<<(m/n)<<endl;
						break;
					}
					n/=2;

			}
		}
	}
}
