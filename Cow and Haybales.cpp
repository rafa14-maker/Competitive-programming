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
        int arr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int counter=arr[0];
        for(int i=1;i<n;i++)
        {
            if(k==0)break;
            if(k<(i))break;
            while(arr[i]>0&&k>=i)
            {
                arr[i]--;
                counter++;
                k-=i;
                //cout<<i<<endl;
                if(k==0)break;
            }
        }
        cout<<counter<<endl;
    }
}
