#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=0,p=1e6,a,b,flag=0;
    cin>>n;
    int arr[n+5],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]>m)
        {
            m=arr[i],a=i;
        }
         if(arr[i]<p)
        {
            p=arr[i],b=i;
        }
    }

   int  f=sum/n;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=f)
        {
            flag++;
        }
    }


    if(flag>2||sum%n>0)
    {
        cout<<"Unrecoverable configuration."<<endl;
    }
    else if(flag==0&&arr[0]==arr[n-1]||n==1)
    {
        cout<<"Exemplary pages."<<endl;
    }
    else if(n==2&&sum%2!=0)
    {
    cout<<"Unrecoverable configuration."<<endl;
    }
    else
    {
        printf("%d ml. from cup #%d to cup #%d.\n",(arr[a]-arr[b])/2,b+1,a+1);
    }
}
