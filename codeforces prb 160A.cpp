#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,k,m;

    cin>>n;

    int arr[n],i;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(i=0;i<n;i++)
     {
         sum+=arr[i];
     }


    cout<<n<<endl;
}
