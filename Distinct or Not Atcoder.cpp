#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==0)
        {
            mp[arr[i]]=1;
        }
        else
        {
            counter++;
            break;
        }
    }
    if(counter==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
