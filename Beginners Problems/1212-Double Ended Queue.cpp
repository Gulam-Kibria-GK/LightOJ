#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,t,j=0,n,m,a,b,c;
    cin>>t;
    while(t--)
    {
        j++;
        deque<ll>q;
        cin>>n>>m;
        cout<<"Case "<<j<<":"<<endl;
        while(m--)
        {
            string st;
            cin>>st;
            if(st=="pushLeft")
            {
                cin>>a;
                if(q.size()<n)
                {
                    cout<<"Pushed in left: "<<a<<endl;
                    q.push_front(a);
                }
                else
                {
                    cout<<"The queue is full"<<endl;
                }
            }
            else if(st=="pushRight")
            {
                cin>>a;
                if(q.size()<n)
                {
                    q.push_back(a);
                    cout<<"Pushed in right: "<<a<<endl;
                }
                else
                {
                    cout<<"The queue is full"<<endl;
                }
            }
            else if(st=="popLeft")
            {
                if(q.size())
                {

                    cout<<"Popped from left: "<<q.front()<<endl;
                    q.pop_front();
                }
                else
                {
                    cout<<"The queue is empty"<<endl;
                }
            }
            else if(st=="popRight")
            {
                if(q.size())
                {
                    cout<<"Popped from right: "<<q.back()<<endl;
                    q.pop_back();
                }
                else
                {
                    cout<<"The queue is empty"<<endl;
                }
            }
        }

        //cout<<endl;
    }
}
