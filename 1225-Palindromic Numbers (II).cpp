#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int i,j,n,ll,lk;
    scanf("%d",&n);
    getchar();
    char st[100],st2[100];
    for(i=0; i<n; i++)
    {
        scanf("%s",st);
        int h=0,f=strlen(st);
        strcpy(st2,st);
        for(j=0; j<f/2; j++)
        {
            if(st[j]!=st2[f-j-1])
            {
                h=1;
                printf("Case %d: No\n",i+1);
                break;
            }
        }
        if(h==0)
            printf("Case %d: Yes\n",i+1);
    }
    return 0;
}
