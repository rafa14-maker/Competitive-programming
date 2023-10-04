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
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)a++;
            if(arr[i]%2==1)b++;
        }
        if(a==n||b==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
