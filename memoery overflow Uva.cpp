#include<bits/stdc++.h>
using namespace std;

void solve(int test)
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int counter=0;

    int frr[n+5]={0};

    for(int i=0;i<s.size();i++)
    {
        for(int j=max(0,i-k);j<i;j++)
        {
            if(s[i]==s[j])frr[j]++;
        }
    }
    for(int i=0;i<n;i++)if(frr[i]!=0)counter++;

    printf("Case %d: %d\n",test,counter);
}

int main()
{
    int q;
    cin>>q;
    int test=0;
    while(q--)solve(++test);
}
