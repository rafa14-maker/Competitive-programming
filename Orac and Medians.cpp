#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
       // vector<int>v;
       int arr[n+5];
        bool fr=false,br=false;
        for(int i=1;i<=n;i++)
        {
           cin>>arr[i];
           if(arr[i]==k)fr=true;
           if(i>1&&arr[i-1]>=k&&arr[i]>=k)br=true;
           if(i>2&&arr[i-2]>=k&&arr[i]>=k)br=true;
        }

        if(fr&&br)cout<<"yes"<<endl;
        else if(fr&&n==1)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
