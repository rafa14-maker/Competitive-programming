#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>vk,vs;

    for(int i=0;i<n;i++)
    {
        if(vk.size()==0)vk.push_back(arr[i]);
        else
        {
            int f=vk.back();
            if(f!=arr[i])vk.push_back(arr[i]);
            else
            {
                if(vs.size()==0)vs.push_back(arr[i]);
                else
                {
                    int kp=vs.back();
                    if(kp!=arr[i])vs.push_back(arr[i]);
                }
            }
        }
    }

    cout<<vk.size()+vs.size()<<endl;

}

int main()
{
    solve();
}
