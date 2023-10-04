#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    int m=1e8;
    for(int i=0;i<n;i++)cin>>arr[i],m=min(m,arr[i]);

    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            v.push_back(i);
        }
    }

    int counter=0;

    for(int i=0;i<v.size();i++)
    {
        int p=v[i],flag=0;
     //   cout<<p<<endl;
        for(int j=p+1;j<n&&j<p+k;j++)
        {
            if(arr[j]!=m)
            {
                flag++;
                arr[j]=m;
                v.push_back(j);
            }
            else if(flag>0)flag++;
            else break;
        }
        if(flag>0)counter++;
        flag=0;
        for(int j=p-1;j>=0&&j>p-k;j--)
        {
             if(arr[j]!=m)
             {
                 flag++;
                 arr[j]=m;
                 v.push_back(j);
             }
            else if(flag>0)flag++;
            else break;
        }
         if(flag>0)counter++;
        flag=0;
    }
    cout<<counter<<endl;
}
