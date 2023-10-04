#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>>n;
    string arr;
    cin>>arr;
    sort(arr.begin(),arr.end());
    if(arr[0]=='0'){
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!='0')
        {
            swap(arr[i],arr[0]);
            break;
        }
    }
    }
    if(arr.size()%2==1)
    {
        s=n/2+1;
    }
    else
    {
        s=n/2;
    }
    int a=0,b=0,k=1;
    for(int i=s-1;i>=0;i--)
    {
        a+=(arr[i]-'0')*k;
        k*=10;
    }
    k=1;
     for(int i=n-1;i>=s;i--)
    {
        b+=(arr[i]-'0')*k;
        k*=10;
    }
    cout<<a+b<<endl;
}
