#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int c=1;c<=q;c++)
    {
        int n;
        cin>>n;
        int arr[n+5],frr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
                for(int i=0;i<n;i++)
        {
            cin>>frr[i];
        }
        sort(arr,arr+n);
        sort(frr,frr+n);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=frr[i])
            {
                flag++;
                break;
            }
        }
        if(flag==0)printf("Case %d: YES\n",c);
        else printf("Case %d: NO\n",c);
    }
}
