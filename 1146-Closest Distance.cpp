#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define limit 1e-10

struct li{
    double x,y;
}arr[5];


double dis(li p1, li p2) {
   double temp =(p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y);
   return sqrt(temp);
}


double ter_search(){
    ll i,j;
    double one3=dis(arr[0],arr[2]);
    double two3=dis(arr[1],arr[3]);
    while(abs(one3-two3)>limit){
        //cout<<(abs(one3-two3))<<endl;
        li f0,f1,s2,s3;
        f0.x=((2.0*arr[0].x)+arr[1].x)/3.0;
        f0.y=((2.0*arr[0].y)+arr[1].y)/3.0;
        f1.x=(arr[0].x+(2.0*arr[1].x))/3.0;
        f1.y=(arr[0].y+(2.0*arr[1].y))/3.0;

        s2.x=((2.0*arr[2].x)+arr[3].x)/3.0;
        s2.y=((2.0*arr[2].y)+arr[3].y)/3.0;
        s3.x=(arr[2].x+(2.0*arr[3].x))/3.0;
        s3.y=(arr[2].y+(2.0*arr[3].y))/3.0;

        one3=dis(f0,s2);
        two3=dis(f1,s3);

        if(one3>two3){
            arr[0]=f0;
            arr[2]=s2;
        }
        else{
            arr[1]=f1;
            arr[3]=s3;
        }
    }
    //all return value are accepted....
    return one3;
    //return two3;
    //return (one3+two3)/2;
}

int main()
{
    ll i,j=0,k;
    cin>>k;
    while(k--)
    {
        j++;
        for(i=0;i<4;i++){
            cin>>arr[i].x>>arr[i].y;
        }
        cout<<"Case "<<j<<": ";
        double ans=ter_search();
        printf("%.8lf\n",ans);
    }
}
