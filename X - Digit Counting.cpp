#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin>>p;
    while(p--)
    {
        int n;
        scanf("%d",&n);
        int frr[10]={0};
        for(int i=1;i<=n;i++)
        {
            int k=i;
            while(k>0)
            {
                int r=k%10;
                frr[r]++;
                k/=10;
            }
        }
        for(int i=0;i<9;i++)printf("%d ",frr[i]);
        printf("%d",frr[9]);
        printf("\n");
    }
}
