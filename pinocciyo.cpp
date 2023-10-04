#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k, cnt=0;
        scanf("%d", &k);
        int ara[k];
        for(int j=0; j<k; j++)
            scanf("%d", &ara[j]);
      int   a = ara[0]-2;
        cnt = ceil(a/5.0);
        for(int j=1; j<k; j++)
        {
            a = ara[j]-ara[j-1];
            cnt += ceil(a/5.0);
        }
        printf("Case %d: %d\n", i, cnt);
    }
}

