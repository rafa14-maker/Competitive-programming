#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5]={0};
  //  int frr[n+5]={0};
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
    }
    if(k==0&&n>1)
    {
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    else if(k==0&&n==1)
    {
        cout<<0<<" "<<0<<endl;
    }

    int l=0,r=n-1;

    while(k>0)
    {
        arr[l]++;
        l++;
        if(l>=n)l=0;
        k--;
    }

    int counter=0,flag=0;

    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==0&&flag==0)continue;
        else
            cout<<arr[i];flag++;
    }
    cout<<" ";
     for(int i=0;i<n;i++)
    {
        if(arr[i]==0&&counter==0)continue;
        else
            cout<<arr[i];counter++;
    }
}
