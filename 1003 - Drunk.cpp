/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v[10000];
ll satus[10000];
#define pb push_back
int wh=0;
int gr=1;
int bl=-1;
ll f=0;
void dfs(ll s)
{
    ll i,j,k,u,vn;
    satus[s]=gr;
    ll siz=v[s].size();
    for(i=0; i<siz; i++)
    {
        if(satus[v[s][i]]==gr)f=1;
        if(satus[v[s][i]]==wh)
        {
            dfs(v[s][i]);
        }
    }
    satus[s]=bl;
}

int main()
{
    ll i,j,n,m,c,t,ma=0;
    string a,b,d;
    map<string,ll>mm;
    cin>>t;
    for(j=0; j<t; j++)
    {
        f=0,c=1,ma=0;
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            if(mm.find(a)==mm.end()){
                mm[a]=c;
                c++;
            }
            if(mm.find(b)==mm.end()){
                mm[b]=c;
                c++;
            }
            v[mm[a]].pb(mm[b]);
        }
        ma=mm.size();
        for(i=1;i<=ma;i++){
            if(satus[i]==0)
                dfs(i);
        }
        if(f==0)
        {
            cout<<"Case "<<j+1<<": Yes"<<"\n";
        }
        else
        {
            cout<<"Case "<<j+1<<": No"<<"\n";
        }
        memset(satus,0,sizeof(satus));
        mm.clear();
        for(i=1;i<=ma;i++){
            v[i].clear();
        }
    }
}
