#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,sum=0,counter=0;
        cin>>n;
        int arr[n+5];
        vector<int>v;
        for(int i=0;i<n;i++)cin>>arr[i];

        for(int i=0;i<n;i++)
        {
          if(arr[i]%3==0)
          {
            sum++;
            continue;
          }
          else
          {
              counter+=arr[i];
              if(counter%3==0)sum++,counter=0;
          }
        }
        cout<<sum<<endl;
    }
}
