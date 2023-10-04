#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    pair<int,int>p[m+5];

    for(int i=0;i<m;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
  int counter=0,flag=0;
    for(int i=0;i<m;i++)
    {
        if(p[i].first==i+1)
        {
            counter++;
        }
        if(p[i].second==i+1)
        {
            flag++;
        }
    }
    if(flag>0&&counter>0)
    {
        cout<<"yes"<<endl;
    }
    else cout<<"NO"<<endl;
}
