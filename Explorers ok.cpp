#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5][m+5];
    int frr[n+5][m+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]=0;
            frr[i][j]=0;
        }
    }
    int cnt=15;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(counter%2==0){
        for(int j=0;j<m;j++)
        {
           arr[i][j]=cnt;
           cnt--;
        }
        }
        else
        {
             for(int j=m-1;j>=0;j--)
        {
           arr[i][j]=cnt;
           cnt--;
        }
        }
        counter++;
    }
     cnt=1;
      counter=1;
      for(int j=0;j<m;j++)
    {
        if(counter%2==1){
        for(int i=0;i<n;i++)
        {
           frr[i][j]=cnt;
           cnt++;
        }
        }
        else
        {
            for(int i=n-1;i>=0;i--)
        {
           frr[i][j]=cnt;
           cnt++;
        }
        }
        counter++;
    }
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==frr[i][j])
            {
                v.push_back(arr[i][j]);
            }
        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
}
