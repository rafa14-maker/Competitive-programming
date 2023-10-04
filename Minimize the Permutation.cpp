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
            cin>>arr[i];
        }
        int counter=n-1,i=0;
        while(counter>0)
        {
           int log=1e9,index=-1;
           for(int j=i+1;j<i+counter;j++)
           {
               if(arr[j]<log)
               {
                   log=arr[j];
                   index=j;
               }
           }
           if(index==-1)
           {
               i++;
               if(i==n)break;
               continue;
           }
           else{
           for(int k=index;k>i;k--)
           {
               swap(arr[k-1],arr[k]);
               counter--;
           }
           }
           i++;
           if(i==n)break;
        }
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
    }
}
