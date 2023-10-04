#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[2*n+5];
    for(int i=1;i<=2*n;i++)
    {
        arr[i]=i;
    }
    int flag=0,c=0;
    for(int i=1,j=2*n;i<j;i++,j--)
    {
        if(c==0)
        {
            c=arr[i]+arr[j];
        }
        else
        {
            if(abs(c-(arr[i]+arr[j]))!=1)
            {
                cout<<c<<endl;
                cout<<i<<" "<<j<<endl;
                flag++;
                break;
            }
            c=arr[i]+arr[j];
        }
    }
    if(flag!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=1,j=2*n;i<j;i++,j--)
        {
            cout<<arr[i]<<" "<<arr[j]<<" ";
        }
    }
}
