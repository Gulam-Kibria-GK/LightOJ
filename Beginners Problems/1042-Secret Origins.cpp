#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll fun(string sa)
{
    //cout<<sa<<endl;
    reverse(sa.begin(),sa.end());
    ll siz=sa.size();
    ll value=0;
    for(ll k=0; k<=siz; k++){
        if(sa[k]=='1'){
            value+=(powl(2,k));
        }
    }
    return value;
}

int main()
{
    ll i,j,k=0,n,m,a,b;
    cin>>j;
    while(j--){
        k++;
        cin>>n;
        m=n;
        string st="";
        while(n!=0){
            if(n%2)
                st+='1';
            else
                st+='0';
            n/=2;
        }
        ll mi=1000000007;
        string ans;
        st+='0';
        //st="";
        //st="abb";
        reverse(st.begin(),st.end());
        next_permutation(st.begin(),st.end());
        //cout<<st<<endl;
        cout<<"Case "<<k<<": "<<(fun(st))<<endl;
    }
}
