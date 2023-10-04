#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        int ci[1000],si[1000],ti[1000];
        for(int i=0;i<t;i++)
        {
            cin>>ci[i]>>ti[i]>>si[i];
        }
        int counter=0,sum=0;
        for(int i=0;i<t;i++)
        {
            while(counter<ti[i]&&ci[i]>0)
            {
                ci[i]--;
                sum+=si[i];
                counter++;
            }
        }
        cout<<sum<<endl;
    }
}
