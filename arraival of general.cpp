#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int n,k=0,l=100000,m,a=0,b=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m<=l)
        {
           l=m;
           a=i;
        }
        if(m>k)
        {
           k=m;
           b=i;
        }
    }
      if (b<a)
    cout<<(n-1+b-a);
    else cout<<(n-2+b-a);
}
