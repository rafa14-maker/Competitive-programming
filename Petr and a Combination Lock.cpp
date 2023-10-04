#include<bits/stdc++.h>
using namespace std;

int arr[20];
int n;
int counter=0;

void f(int pos,int sum)
{
    if(pos==n)
    {
        if(sum>=0)
        {
            if(sum%360==0)counter++;
            return ;
        }
        else
        {
            sum=(sum)*(-1);
            if(sum%360==0)counter++;
            return ;
        }
    }

    f(pos+1,sum-arr[pos]);
    f(pos+1,sum+arr[pos]);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    f(0,0);
    if(counter>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
