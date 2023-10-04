#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k=0;
    while(1)
    {
        int n,m;
        cin>>n;
        if(n==0)break;
        cin>>m;
        if(k!=0)cout<<endl;
        k=1;
       int loss[n+5]={0};
       int win[n+5]={0};

       m= m * n * (n -1) / 2;

        while(m--)
        {
            string arr,frr;
            int a,b;
            cin>>a>>arr>>b>>frr;
            if(arr==frr)continue;
            if(arr=="rock")
            {
                if(frr=="paper")win[b]++,loss[a]++;
                if(frr=="scissors")win[a]++,loss[b]++;
            }
            else if(arr=="paper")
            {
                if(frr=="scissors")win[b]++,loss[a]++;
                if(frr=="rock")win[a]++,loss[b]++;
            }
            else if(arr=="scissors")
            {
                if(frr=="paper")win[a]++,loss[b]++;
                if(frr=="rock")win[b]++,loss[a]++;
            }
        }

        for(int i=1;i<=n;i++)
        {
            double a=win[i];
            double b=win[i]+loss[i];
            if(b==0)
            {
                cout<<"-"<<endl;
                continue;
            }
            double c=a/b;
            //cout<<win[i]<<" "<<play[i]<<endl;
            printf("%.3f\n",c);
        }

    }
}
