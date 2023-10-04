#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long>arr;

    for(long long i=1;i<90;i++)
    {
        long long a=n-i,sum=0;
        while(a>0)
        {
            sum+=(a%10);
            a/=10;
        }
      //  cout<<sum<<endl;
        if(sum==i)arr.push_back(n-i);
    }
    sort(arr.begin(),arr.end());
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}
