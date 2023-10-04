#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int t=0,counter=0;
    map<int,int>m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            if(m[arr[i]]>t)
            {
                cout<<-1<<endl;
                return 0;
            }
            m[arr[i]]=t+1;
            counter++;
        }
        else if(arr[i]<0)
        {
            int k=arr[i]*(-1);
            if(m[k]!=t+1)
            {
                cout<<-1<<endl;
                return 0;
            }
            m[k]=t+2;
            counter--;
        }
        if(counter==0)
        {
            t+=3;
            v.push_back(i+1);
        }
    }
    if(counter==0)
    {
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        {
            if(i==0)cout<<v[i]<<" ";
            else cout<<v[i]-v[i-1]<<" ";
        }
    }
    else
    {
        cout<<-1<<endl;
        return 0;
    }
}
