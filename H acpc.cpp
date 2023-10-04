#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    int px=1e9,mn = -1;
    int idx=0;

    for(int i=0;i<n;i++)
    {
        if(i+1<n&&i+2<n)
        {
            idx++;
            vector<int>v;
            v.push_back(arr[i]);
          //  v.push_back(arr[i+1]);
            v.push_back(arr[i+2]);
            sort(v.begin(),v.end());
            int ans = v[1];
            if(px>ans)
            {
                px=ans;
                mn=idx;
            }
        }
    }
  //
    cout<<mn<<" "<<px<<endl;

}
