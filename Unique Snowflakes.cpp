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

        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];

        map<int,int>mp;

        int l=0,r=0,counter=0,flag=1;

        while(r<n&&l<n)
        {
          //  cout<<r<<" "<<l<<endl;
            if(r<n&&mp[arr[r]]==0)
            {
                mp[arr[r]]++;
                counter++;
                r++;
                flag=max(counter,flag);
            }
            else if(l<n)
            {
                flag=max(counter,flag);
                mp[arr[l]]--;
                l++;
                counter--;
            }
            else break;
        }
        cout<<flag<<endl;
    }
}
