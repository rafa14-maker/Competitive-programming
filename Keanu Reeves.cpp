#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,counter=0;
    cin>>n;
    string arr;
    cin>>arr;

    if(n==1)
    {
        cout<<1<<endl;
        cout<<arr<<endl;
        return 0;
    }

    for(int i=0;i<n;i++)
    {
      //  counter++;
        int flag=0;
        int a1=0,a2=0;

        for(int j=i;j<n;j++)
        {
             if(arr[j]=='0')a1++;
            else a2++;
        }
           if(a2!=a1)
           {
               cout<<counter+1<<endl;
               for(int j=0;j<counter;j++)cout<<arr[j]<<" ";
               for(int j=i;j<n;j++)cout<<arr[j];
               return 0;
           }
           counter++;
        }
    }

