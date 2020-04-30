#include <bits/stdc++.h>
using namespace std;

#define ll long long

map<string,ll>mm;

ll solve(ll n){
	ll a,b,c,d;
	a=n/4;
	b=n/100;
	c=n/400;
	d=a-b+c;
	return d;
}


int main()
{
	ll i,j=0,k,t,n;
	cin>>t;
	mm["January"]=1;
	mm["February"]=2;
	mm["March"]=3;
	mm["April"]=4;
	mm["May"]=5;
	mm["June"]=6;
	mm["July"]=7;
	mm["August"]=8;
	mm["September"]=9;
	mm["October"]=10;
	mm["November"]=11;
	mm["December"]=12;
	while(t--){
		j++;
		ll f,l;
		string st,st2;
		ll date,year,date1,year1;
		cin>>st;
		scanf("%lld, %lld", &date,&year);
    	cin>>st2;
        scanf("%lld, %lld", &date1,&year1);
        if(mm[st]<=2){
        		f=year-1;
        }
        else{
        	f=year;
        }
        if((mm[st2]>2)||(mm[st2]==2 && date1==29)){
        		l=year1;
        }
        else{
        	l=year1-1;
        }
        //cout<<f<<" "<<l<<endl;
        ll ans1=solve(f);
        ll ans2=solve(l);
        cout<<"Case "<<j<<": ";
        cout<<ans2-ans1<<endl;

}
}