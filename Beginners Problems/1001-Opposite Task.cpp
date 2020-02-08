#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,t,i,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n>10)
            cout<<"10"<<" "<<n-10<<endl;
        else
        cout<<'0'<<" "<<n<<endl;
    }
    return 0;
}
