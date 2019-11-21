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
const int n=100006;

char arr[n+3];
struct{
    ll sum;
    ll prop;
}  tree[n*3];

void init(ll node,ll b,ll e)
{
    if(b>=e)
    {
        if(b == e)tree[node].sum=arr[b-1]-48;
        return ;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node].sum=tree[left].sum+tree[right].sum;
}

void update(ll node,ll b,ll e,ll i,ll j){
    if(b > e)return;
    if(b > j || e <i)return;
    if(b >= i && e <= j){
        tree[node].sum += ((e-b+1));
        tree[node].prop += 1;
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    update(left,b,mid,i,j);
    update(right,mid+1,e,i,j);
    tree[node].sum = tree[left].sum + tree[right].sum + (e-b+1)*tree[node].prop;
}


ll query(ll node,ll b,ll e,ll i,ll c=0)
{
    if(b > e)return 0;
    if(b > i || e < i)return 0;
    if(b ==i&& e==i)return tree[node].sum + c*(e-b+1);
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;
    ll x=query(left,b,mid,i,c+tree[node].prop);
    ll y=query(right,mid+1,e,i,c+tree[node].prop);
    return x + y;
}

int main()
{
    ll i,j,k,t,m,nn,b,a,p,q,r;
    scanf("%lld",&t);
    for(k=1; k<=t; k++)
    {
        memset(tree,0,sizeof(tree));
        scanf("%s",&arr);
        nn=strlen(arr);
        init(1,1,nn);
        printf("Case %lld:\n", k);
        char ch;
        scanf("%lld",&m);
        while(m--){
            getchar();
            scanf("%c",&ch);
            if(ch=='I'){
                scanf("%lld %lld",&a,&b);
                update(1,1,nn,a,b);
            }
            else{
                scanf("%lld",&a);
                ll ans=query(1,1,nn,a);
                printf("%lld\n",ans%2);
            }
        }
    }

}
