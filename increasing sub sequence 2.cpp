#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    string krr,frr;

    int l=0,r=n-1,counter=0,k=0;

    while(l<=r)
    {
        counter++;
        if(counter%2==1)
        {
            if(krr.size()==0)
            {
                krr+='L';
                k=arr[l];
                l++;
            }
            else
            {
               if(k<arr[l])
               {
                   k=arr[l];
                   krr+='L';
                   l++;
               }
               else
               {
                   break;
               }
            }
        }
        if(counter%2==0)
        {
               if(k<arr[r])
               {
                   k=arr[r];
                   krr+='R';
                   r--;
               }
               else
               {
                   break;
               }
            }

    }

     while(l<=r)
    {
        counter++;
        if(counter%2==1)
        {
            if(frr.size()==0)
            {
                frr+='R';
                k=arr[r];
                r--;
            }
            else
            {
               if(k<arr[r])
               {
                   k=arr[r];
                   frr+='R';
                   r--;
               }
               else
               {
                   break;
               }
            }
        }
        if(counter%2==0)
        {
               if(k<arr[l])
               {
                   k=arr[l];
                   frr+='L';
                   l--;
               }
               else
               {
                   break;
               }
            }

    }

    if(frr.size()>=krr.size())
    {
        cout<<frr<<endl;
    }
    else
    {
        cout<<krr<<endl;
    }

}
