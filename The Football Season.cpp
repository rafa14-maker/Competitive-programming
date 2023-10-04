#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,p,w,d;
   // scanf("%lld %lld %lld %lld",&n,&p,&w,&d);
   cin>>n>>p;
   vector<long long>arr;
   vector<long long>frr;

    long long  counter=0,ae=p;

    while(ae<n)
    {
        arr.push_back(ae);
        counter++;
        ae=p*counter;
    }
    for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";cout<<endl;
    cout<<counter<<endl;
}
