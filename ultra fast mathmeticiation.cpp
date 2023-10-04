#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string arr,frr;
    cin>>arr>>frr;

    for(i=0;i<arr.size();i++)
    {
        if(arr[i]==frr[i])
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
    }
    cout<<endl;
}
