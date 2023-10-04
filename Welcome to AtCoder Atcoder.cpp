#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int frr[n+5]={0};
    int prr[n+5]={0};
    int p=0,q=0;
    while(k--)
    {
        int a;
        string s;
        cin>>a>>s;
        if(s=="AC")
        {
            if(frr[a]==0)
            {
                p++;
                q+=prr[a];
                frr[a]=1;
            }
        }
        else
        {
            prr[a]++;
        }
    }
    cout<<p<<" "<<q<<endl;
}
