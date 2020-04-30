#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a=0,b=0,c=0,d=0,i,j,k,l,x,y,n,m,f=0,f2=0;
void ans(string st3){
    x=0;
    int xx=st3.size(),sum=1;
    reverse(st3.begin(),st3.end());
    for(int j=0; j<xx; j++){
        if(st3[j]-48)x+=sum;
        sum*=2;
    }
}
int main(){
    int z,q;
    cin>>z;
    for(q=0; q<z; q++){
        a=0,b=0,c=0,d=0,i,j,k,l,x,y,n,m,f=0,f2=0;
        string st,st2,st3="";
        cin>>st>>st2;
        st2+=".";
        n=st.size();
        for(i=0; i<n; i++){
            if(st[i]=='.')f++,i++;
            if(f==0)a=(10*a)+st[i]-48;
            else if(f==1)b=(10*b)+st[i]-48;
            else if(f==2)c=(10*c)+st[i]-48;
            else if(f==3)d=(10*d)+st[i]-48;
        }
        m=st2.size();f=0;
        for(i=0; i<m; i++){
            if(st2[i]=='.'){
                f++;i++;
                ans(st3);
                if(f==1)if(a!=x)f2=1;
                if(f==2)if(b!=x)f2=1;
                if(f==3)if(c!=x)f2=1;
                if(f==4)if(d!=x)f2=1;
                st3="";
            }
            st3+=st2[i];
        }
        if(f2==0)cout<<"Case "<<q+1<<": Yes"<<endl;
        else cout<<"Case "<<q+1<<": No"<<endl;
    }
}
