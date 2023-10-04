#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    sort(arr,arr+n);

    set<int>s;

    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
int sum=0;
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        int k=*it;
        int t=0,kp=0;
        for(int i=0;i<n;i++)
        {
            int counter=0;
            int p=arr[i];
            while(p>0)
            {
                if(p==k)
                {
                    kp=counter;
                 //  counter++;
                   t++;
                   break;
                }
                p=floor(p/2);
                counter++;
            }
             if(t>=3)break;
        }
        if(t>=3) sum=min(kp,sum);
    }

}
