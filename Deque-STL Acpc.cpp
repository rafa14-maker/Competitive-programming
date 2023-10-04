#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n+5];
        for(int i=1;i<=n;i++)cin>>arr[i];
        int mx=0;
        deque<int>dq;
        deque<int>idx;
        for(int i=1;i<=k;i++)
        {
            dq.push_front(arr[i]);
            idx.push_front(i);
            mx=max(mx,arr[i]);
        }
   //  if(n==k) cout<<mx<<" ";
     /* else
      {
           cout<<mx;
           continue;
      }*/
      cout<<mx;
       for(int i=k+1;i<=n;i++)
        {
             while(idx.size()>0&&i-idx.front()>=k)
            {
                dq.pop_front();
                idx.pop_front();
            }
            while(dq.size()>0&&dq.front()<=arr[i])
            {
                dq.pop_front();
                idx.pop_front();
            }

              while(idx.size()>0&&i-idx.back()>=k)
            {
                dq.pop_back();
                idx.pop_back();
            }
            while(dq.size()>0&&dq.back()<=arr[i])
            {
                dq.pop_back();
                idx.pop_back();
            }

            dq.push_back(arr[i]);
            idx.push_back(i);
           // cout<<arr[i]<<endl;
        cout<<" "<<dq.front();
      //     if(i==n)cout<<dq.front();
        }
        cout<<endl;
    }
}
