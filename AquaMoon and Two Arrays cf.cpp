#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    int frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>frr[i];
    int sum=0;
    vector<pair<int,int> >vp,vm;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>frr[i])
        {
            sum-=(arr[i]-frr[i]);
            vm.push_back(make_pair(arr[i]-frr[i],i));
        }
        else
        {
            sum+=(frr[i]-arr[i]);
            vp.push_back(make_pair(arr[i]-frr[i],i));
        }
    }

    if(sum!=0)
    {
        cout<<-1<<endl;
        return ;
    }

     int idx1= 0 ,idx2=0;

     while(idx1>vm.size()&&idx2>vp.size())
     {
         int a = vm[idx1];
         int b = vp[idx2];
         if(arr[a-1]>0&&arr[b-1]>0)
         {
             cout<<a<<" "<<b<<endl;
             arr[a-1]--;
             arr[b-1]--;
         }
         if(arr[a-1]<=0)idx1++;
         if(arr[b-1]<=0)idx2++;
     }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
