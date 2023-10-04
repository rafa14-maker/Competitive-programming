#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int counter=0,m=0,p=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
               counter++;
               if(counter>m)
               {
                   m=counter;
                   p=i;
               }
            }
            else
            {
                counter=0;
            }
        }

        cout<<p<<endl;
    }
}
