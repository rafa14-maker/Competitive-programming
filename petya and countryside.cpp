/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k=1;

    cin>>n;

    int arr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        int p=arr[i],counter=1;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<=p)
            {
                counter++;
                p=arr[j];
            }
            else if(arr[i]>p)break;
        }
        p=arr[i];

         for(int j=i-1;j>=0;j--)
        {
            if(arr[j]<=p)
            {
                counter++;
                p=arr[j];
            }
            else if(arr[i]>p)break;
        }

        k=max(counter,k);
    }

    cout<<k<<endl;

}



