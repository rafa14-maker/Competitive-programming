#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long k;
        cin>>n>>k;
        string s;
        cin>>s;
        queue<int>z;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')z.push(i);
        }
        string ans;
        for(int i=0;i<n;i++)
        {
            if((z.empty()))ans+='1';
            else
            {
                int f=z.front();
                int ne=f-i;
                if(ne>k)ans+='1';
                else
                {
                    k-=ne;
                    z.pop();
                    ans+='0';
                }
            }
        }
        cout<<ans<<"\n";
    }
}
