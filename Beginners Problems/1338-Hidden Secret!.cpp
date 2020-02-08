#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<string,ll>mm;
vector<string>v,v1;
int main()
{
    ll i,j,k,l,n,m,m1,a,b,c,f;
    cin>>n;
    string st,st2;
    string st3,st4;
    getchar();
    for(i=0; i<n; i++)
    {
        getline(cin,st);
        //getchar();
        getline(cin,st3);
        //getchar();
        st+=" ";
        st3+=" ";
        m1=st3.size();
        m=st.size();
        st2="";
        st4="";
        for(j=0; j<m; j++)
        {
            if(st[j]>='A' && st[j]<='Z')
                st[j]=st[j]+32;
        }
        for(j=0; j<m; j++)
        {
            if(st[j]!=' ')
            {
                st2+=st[j];
            }
        }
        a=v.size();
//        for(j=0; j<a; j++)
//        {
//            cout<<v[j]<<endl;
//        }
        for(j=0; j<m1; j++)
        {
            if(st3[j]>='A' && st3[j]<='Z')
                st3[j]=st3[j]+32;
        }

        for(j=0; j<m1; j++)
        {
            if(st3[j]!=' ')
            {
                st4+=st3[j];
            }
        }
        b=v1.size();
        f=1;
        sort(st2.begin(),st2.end());
        sort(st4.begin(),st4.end());
        if(st2==st4)f=0;
//        for(j=0; j<b; j++)
//        {
//            cout<<v1[j]<<endl;
//        }
        if(f==1){
            cout<<"Case "<<i+1<<": No"<<endl;
        }
        else{
             cout<<"Case "<<i+1<<": Yes"<<endl;
        }
        //v.clear();
        //v1.clear();
    }
    return 0;
}
