#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
    int a,b,c;
    cin>>a>>b>>c;
    int ans=1e8,x=0,y=0,z=0;
    for(int i=1;i<=11000;i++)
    {
        for(int j=i;j<=11000;j+=i)
        {
            for(int k=j;k<=11000;k+=j)
            {
                if(abs(a-i)+abs(b-j)+abs(c-k)<ans)
                {
                    ans=abs(a-i)+abs(b-j)+abs(c-k);
                    x=i;
                    y=j;
                    z=k;
                }
            }
        }
    }
    cout<<ans<<"\n"<<x<<" "<<y<<" "<<z<<"\n";
    }
}
