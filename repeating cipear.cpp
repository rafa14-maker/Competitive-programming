#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,k;
    string arr;
    cin>>n>>arr;


    k=0;

    for(i=0;i<n;i+=k)
    {
        cout<<arr[i];
        k++;
    }


}
