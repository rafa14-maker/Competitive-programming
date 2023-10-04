#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    if(n==2)
    {
        int a,b;
        cin>>a>>b;
        cout<<max(a,b)<<endl;
        return ;
    }

    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    deque<int>q;
    int idx= -1;
    for(int i=0;i<n;i++)
    {
        if(q.empty())q.push_back(arr[i]);
        else
        {
            int f = q.back();
            if(idx== -1)
            {
                q.push_back(arr[i]);
                if(f>arr[i])idx = 2;
                else if(f<arr[i])idx = 1;
            }
            else
            {
                if(arr[i]>f)
                {
                    if(idx==1)
                    {
                        q.pop_back();
                        q.push_back(arr[i]);
                        continue;
                    }
                    else
                    {
                        q.push_back(arr[i]);
                        idx = 1;
                    }
                }
                else if(arr[i]<f)
                {
                      if(idx==1)
                    {
                      //  q.pop();
                        q.push_back(arr[i]);
                        idx=2;
                        continue;
                    }
                    else
                    {
                        q.pop_back();
                        q.push_back(arr[i]);
                       // idx = 0;
                    }
                }
            }
        }
    }
   cout<< q.size() <<endl;
    while(!q.empty())
    {
        int f = q.front();
        cout<<f<<" ";
        q.pop_front();
    }
    cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
