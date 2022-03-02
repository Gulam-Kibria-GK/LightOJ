#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll i=0,j=0,k,n,m;
	cin>>k;
	while(k--){
		j++;
		cout<<"Case "<<j<<":"<<endl;
		stack<string>s,s1;
		s.push("http://www.lightoj.com/");
		string st,st2;
		while(true){
		//cout<<"ans-> :"<<s.size()<<" "<<s1.size()<<endl;
		cin>>st;
		if(st=="QUIT"){
			break;
		}
		else if(st=="VISIT"){
			cin>>st2;
			s.push(st2);
			cout<<st2<<endl;
			while(s1.size()){
				s1.pop();
			}
		}
		else if(st=="BACK"){
			if(s.size()>1){
				string g=s.top();
				s.pop();
				string g1=s.top();
				cout<<g1<<endl;
				s1.push(g);
			}
			else{
				cout<<"Ignored"<<endl;
			}
		}
		else if(st=="FORWARD"){
			if(s1.size()>=1){

				string g=s1.top();
				s1.pop();
				cout<<g<<endl;
				s.push(g);
			}
			else{
				cout<<"Ignored"<<endl;
			}
		}
	}

	}
}
