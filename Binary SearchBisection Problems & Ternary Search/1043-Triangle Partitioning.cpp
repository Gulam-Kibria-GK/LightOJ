#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    ll i,n;
    cin>>n;
    for(i=0;i<n;i++){
        double ab,ac,bc,rate,new_rate;
        double ad,ae,de,s,ade,abc,bdec,l,r;
        cin>>ab>>ac>>bc>>rate;
        l=0.0;
        r=ab;
        while(l<=r){
            ad=(l+r)/2.0;
            ae=(ad*ac)/ab;
            de=(ad*bc)/ab;
            s=(ad+ae+de)/2;
            ade=sqrt(s*(s-ad)*(s-de)*(s-ae));

            s=(ab+bc+ac)/2;
            bdec=sqrt(s*(s-ab)*(s-bc)*(s-ac))-ade;

            new_rate=ade/bdec;
            if(fabs(new_rate-rate)<1e-8){
                printf("Case %lld: %.8lf\n",i+1,ad);
                break;
            }
            if(new_rate>rate){
                r=ad;
            }
            else{
                l=ad;
            }
        }
    }
}
