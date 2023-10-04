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
      //  k--;
        int ca=-1,cb=-1;
        for(int i=n-1;i>=1;i--)
        {
            if(k==0)break;
            for(int j=n;j>i;j--)
            {
                k--;
                 if(k==0)
                 {
                     ca=i;
                     cb=j;
                     break;
                 }
            }
        }
        char arr[n+5];
        for(int i=1;i<=n;i++)
        {
            if(i==ca||i==cb)arr[i]='b';
            else arr[i]='a';
        }
        for(int i=1;i<=n;i++)cout<<arr[i];cout<<"\n";
    }
}
