#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    long long arr[n+5];
    for(int i=0;i<=n;i++)arr[i]=1;

    int ak[m+5],l[m+5],r[m+5];

    for(int j=1;j<=m;j++)
    {
        cin>>ak[j]>>l[j]>>r[j];
        if(ak[j]==0)
        {
            for(int h=l[j]+1;h<=r[j];h++)
            {
                arr[h]=arr[h-1]-1;
            }
        }
        else  if(ak[j]==1)
        {
            for(int h=l[j]+1;h<=r[j];h++)
            {
                arr[h]=arr[h-1]+1;
            }
        }
    }
    int counter=0;

    for(int j=1;j<=m;j++)
    {
        if(counter>0)break;
        if(ak[j]==0)
        {

            for(int h=l[j];h<=r[j]-1;h++)
            {
                if(arr[h]<arr[h+1])
                {
                    counter++;
                    break;
                }
            }
        }
        else  if(ak[j]==1)
        {
            for(int h=l[j];h<=r[j]-1;h++)
            {
               if(arr[h]>arr[h+1])
                {
                    counter++;
                    break;
                }
            }
        }
    }

    if(counter==0)
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
    }
    else
    {
        cout<<"NO"<<endl;
    }

    }
