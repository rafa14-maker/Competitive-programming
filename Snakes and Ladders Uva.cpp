#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;
int frr[N];

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=1;i<=a;i++)frr[i]=1;
        map<int,int>mp;
        while(b--)
        {
            int x,y;
            cin>>x>>y;
            mp[x]=y;
        }
        bool win =false;

        int idx=0;

        while(c--)
        {
            idx++;
            if(idx>a)idx=1;

            int x;
            cin>>x;


            if(!win)
            {
                frr[idx]+=x;
                if(mp[frr[idx]])frr[idx]=mp[frr[idx]];
                if(frr[idx]==100)win=true;
            }
        }
        for(int i=1;i<=a;i++)
        {
            printf("Position of player %d is %d.\n",i,frr[i]);
        }
    }
}
