#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    map<int,int>mp;
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    for(int i=0;i<3;i++)
    {
        int flag=0;
        for(int j=0;j<3;j++)
        {
            if(mp[arr[i][j]]>0)flag++;
        }
        if(flag==3)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    for(int j=0;j<3;j++)
    {
        int flag=0;
        for(int i=0;i<3;i++)
        {
            if(mp[arr[i][j]]>0)flag++;
        }
        if(flag==3)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    if((mp[arr[0][0]]&&mp[arr[1][1]]&&mp[arr[2][2]])||(mp[arr[0][2]]&&mp[arr[1][1]]&&mp[arr[2][0]]))
    {
        cout<<"Yes"<<endl;
            return 0;
    }
    cout<<"No"<<endl;
}
