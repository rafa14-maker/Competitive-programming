#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5][3];
    int w=0,l=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        if(arr[i][0]>arr[i][1])w++;
        else if(arr[i][0]<arr[i][1])l++;
    }
    vector<pair<int,int> >v;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i][0]<arr[i][1]&&arr[i+1][0]<arr[i+1][1])
        {
            l--;
            i++;
            v.push_back(make_pair(i+1,i+2));
            continue;
        }
        else if((arr[i][0]>arr[i][1]&&arr[i+1][0]<arr[i+1][1])||(arr[i][0]<arr[i][1]&&arr[i+1][0]>arr[i+1][1]))
        {
            if(arr[i][0]+arr[i+1][0]>arr[i][1]+arr[i+1][1])
            {
                l--;
                w++;
                  v.push_back(make_pair(i+1,i+2));
            }
        }
    }
    if(w<=l)cout<<"-1"<<endl;
    else
    {
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

int main()
{
    solve();
}
