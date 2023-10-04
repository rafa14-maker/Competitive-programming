#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int arr[n+5]={0};
    char prev='a';
    int qt=0;
    int idx=n-1;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(prev=='a')arr[i]=idx;
        else
        {
            if(s[i]=='?')qt++,arr[i]=idx;
            else
            {
                if(prev==s[i])
                {
                    if(qt%2==1)
                    {
                        arr[i]=idx;
                        qt=0;
                    }
                    else
                    {
                        arr[i]=i+qt;
                        idx=i;
                        qt=0;
                    }
                }
                else if(prev!=s[i])
                {
                    if(qt%2==0)
                    {
                        arr[i]=idx;
                        qt=0;
                    }
                    else
                    {
                        arr[i]=i+qt;
                        idx=i;
                        qt=0;
                    }
                }
            }
        }
       if(s[i]!='?') prev=s[i];
    }

// for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;

    long long sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=(arr[i]-i+1);
    }

   cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
