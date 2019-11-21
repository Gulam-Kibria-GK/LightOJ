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
ll dx[]= {1,-1,0,0};
ll dy[]= {0,0,1,-1};
ll vis[1003][1003],vis2[1003][1003];
char ch[1005][1005];
stack<pair<ll,ll> >st;
pair<ll,ll> u2,u;
ll k,n,l,m,ans;

bool chack(ll x,ll y){
    if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] && ch[x][y]!='#')return 1;
    else return 0;
}

void bfs(ll s,ll d){
    ll i,j,k,siz,vn;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            vis[i][j]=0;
        }
    }
    queue<pair<ll,ll> >q;
    st.push({s,d});
    q.push({s,d});
    vis[s][d]=1;
    if(ch[s][d]=='C')ans++;
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(i=0; i<4; i++){
            ll x=u.first+dx[i];
            ll y=u.second+dy[i];
            if(chack(x,y)){
                st.push({x,y});
                if(ch[x][y]=='C')ans++;
                q.push({x,y});
                vis[x][y]=1;
            }
        }
    }
    while(st.size()){
            u2=st.top();
            st.pop();
            ll x=u2.first;
            ll y=u2.second;
            if(vis2[x][y]<=ans)vis2[x][y]=ans;
    }
}

int main(){
    ll i,j,t,a,b,c,x,y,cunt=0;
    cin>>t;
    while(t--){
        cunt++;
        cin>>n>>m>>c;
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                cin>>ch[i][j];
                vis2[i][j]=-1;
            }
        }
        cout<<"Case "<<cunt<<":"<<endl;
        for(int ii=0; ii<c; ii++){
            cin>>x>>y;
            x--;y--;
            if(vis2[x][y]==-1)bfs(x,y);
            cout<<vis2[x][y]<<endl;
            ans=0;
        }
    }
    return 0;
}
