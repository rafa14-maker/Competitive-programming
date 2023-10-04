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
        int arr[n+5];
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j]&&abs(i-j)>1)
            {
                flag++;
                break;
            }
        }
    }
     if(flag==0)cout<<"NO"<<endl;
     else cout<<"YES"<<endl;

    }
}
