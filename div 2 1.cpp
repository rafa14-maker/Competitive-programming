#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,counter=0,m=0;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        counter=0;int k=i;int l=1;

        for(j=i+1;j<n;j++)
        {
            if(arr[k]==arr[j]-l)
            {
                counter++;
                m=max(m,counter);
                l++;

            }
            else
            {
                break;
            }


        }


    }
    if(m==0)
    {
        cout<<0<<endl;
    }

   else if(n==m+1)
    {
        cout<<m<<endl;
    }
    else
    {
        cout<<m-1<<endl;
    }
}
