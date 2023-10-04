#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;

    int arr[n],i;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(a%2==0)
    {
        a/=2;
        cout<<a<<endl;
    }
    else
    {
        a/=2;
        cout<<a+1<<endl;
    }


    return 0;
}
