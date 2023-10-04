#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        vector<pair<int,int> >v;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back(make_pair(b,a));
        }
        if(flag>0)
        {
            cout<<-1<<endl;
            continue;
        }
        int arr[n+5]={0};
        for(int i=0;i<n;i++)
        {
            int k=v[i].first;
            if(i+1+k>=0&&i+1+k<=n&&arr[i+1+k]!=0)
            {
                flag++;
                break;
            }
            else if(i+1+k>=0&&i+1+k<=n)
            {
                arr[i+1+k]=v[i].second;
            }
        }

        for(int i=1;i<=n;i++)
        {
            if(arr[i]==0)flag++;
        }

         if(flag>0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=1;i<n;i++)cout<<arr[i]<<" ";
        cout<<arr[n]<<endl;

    }
}
