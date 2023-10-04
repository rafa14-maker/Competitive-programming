#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long n,counter=0,k=1;
    cin>>n;

    long long arr[n+5];

    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=k)
        {
            counter++;
            k++;
        }
    }

    cout<<counter<<endl;

}
