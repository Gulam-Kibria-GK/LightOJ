#include<bits/stdc++.h>
using namespace std;
#define mx 20004
struct st
{
    double got;
    double total;
}arr[mx];
double Mid;
bool comp(st a, st b)
{
    return (a.got - Mid*a.total)  > (b.got - Mid*b.total);
}
bool check(double mid, int n, int use)
{
    Mid = mid/100.0;
    sort(arr+1, arr+1+n, comp);
    double Got = 0, Total = 0;
    for(int i=1; i<=use; i++){
        Got+=arr[i].got;
        Total+=arr[i].total;
    }
    double avg = (Got/Total)*100;
    return avg >= mid;
}
int main()
{
    int tc,n,cs=1, use;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d%d",&n,&use);
        use = n-use;
        for(int i=1; i<=n; i++)
            scanf("%lf%lf",&arr[i].got, &arr[i].total);
        double lo = 0, hi = 100, mid,ans = 0;
        for(int i=1; i<=30; i++){
            mid = (lo+hi)/2.0;
            if(check(mid, n, use)){
                lo = mid;
                ans = max(ans, mid);
            }
            else hi = mid;
        }
        printf("Case %d: %.10f\n", cs++,ans);
    }
}
