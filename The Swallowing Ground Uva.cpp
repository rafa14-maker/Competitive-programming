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
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            arr[i]=(a-b);
        }
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]!=arr[i+1])flag++;
        }
        if(flag==0)cout<<"yes";
        else cout<<"no";
        cout<<endl;
        if(q)cout<<"\n";
    }
}
