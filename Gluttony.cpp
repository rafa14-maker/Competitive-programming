#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long k;
    cin>>n>>k;
    vector<int>arr;
    vector<int>frr;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
     for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        frr.push_back(a);
    }

    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    sort(frr.begin(),frr.end());

    long long lower = -1;
    long long upper = 1000000000000;

    while(lower+1<upper)
    {
        long long team_score = (lower+upper)/2;
        long long t = 0;
        for(int i=0;i<n;i++)
        {
            long long ai = team_score/frr[i];
            long long train = max(0LL,arr[i]-ai);
            t+=train;
        }
        if(t<=k)upper = team_score;
        else lower = team_score;
    }

    cout<<upper<<endl;

}
