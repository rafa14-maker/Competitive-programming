#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int r,s,p;
    cin>>r>>s>>p;
    string arr;
    cin>>arr;
    string frr;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='r')frr+='p';
        else if(arr[i]=='p')frr+='s';
        else if(arr[i]=='s')frr+='r';
    }

    for(int i=0;i<frr.size();i++)
    {
        if(i-k>=0&&frr[i]==frr[i-k])
        {
            frr[i]='9';
        }
    }

    int a=0,b=0,c=0;

    for(int i=0;i<frr.size();i++)
    {
        if(frr[i]=='r')a++;
        if(frr[i]=='s')b++;
        if(frr[i]=='p')c++;
    }
    long long sum = a*r+b*s+c*p;
    cout<<sum<<endl;
}
