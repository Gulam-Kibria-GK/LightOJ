#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll i,j=0,k,n,m,a,b,c;
	cin>>k;
	while(k--){
		j++;
		cin>>n;
		m=n;
		vector<pair<ll,string> >v;
		string st;
		while(n--){
		cin>>st;
		cin>>a>>b>>c;
		v.push_back({(a*b*c),st});
		}
		sort(v.begin(),v.end());
		/*for(i=0;i<m;i++){
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}*/
		cout<<"Case "<<j<<": ";
		if(v[m-1].first-v[0].first==0){
			cout<<"no thief"<<endl;
		}
		else{
			cout<<v[m-1].second<<" took chocolate from "<<v[0].second<<endl;
		}
		//v.clear();

	}
	return 0;

}
