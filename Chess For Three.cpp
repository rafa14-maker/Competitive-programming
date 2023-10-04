#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag=0;
   int arr[]={1,2,3};
    int a=1,b=2;
    for(int i=0;i<n;i++)
     {
        int k;
      //  cin>>k;
      //  cout<<a<<" "<<b<<endl;
        cin>>k;
        if(k==a)
        {
           if(arr[0]!=a&&arr[0]!=b)b=arr[0];
           else if(arr[1]!=a&&arr[1]!=b)b=arr[1];
           else if(arr[2]!=a&&arr[2]!=b)b=arr[2];
        }
        else if(k==b)
        {
           if(arr[0]!=a&&arr[0]!=b)a=arr[0];
           else if(arr[1]!=a&&arr[1]!=b)a=arr[1];
           else if(arr[2]!=a&&arr[2]!=b)a=arr[2];
        }
        else flag++;
    }
    if(flag==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
