#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5][n+5];

    int a=n*n;



    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=k-1;j--)
        {
            arr[i][j]=a;
            a--;
        }
    }
     a=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k-1;j++)
        {
            arr[i][j]=a;
            a++;
        }
    }
   int counter=0;
    for(int i=0;i<n;i++)
    {
         counter+=arr[i][k-1];
    }
    cout<<counter<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
