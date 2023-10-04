#include<bits/stdc++.h>
using namespace std;


int main()
{

    long long n;
    cin>>n;
    long long arr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long ans=n,counter=1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            counter++;
        }
        else
        {
            ans+=((counter*(counter-1))/2);
            counter=1;
        }
    }

    cout<<ans<<endl;

}
