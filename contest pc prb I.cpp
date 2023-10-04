#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    string arr;
    cin>>arr;

    for(i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
    for(i=arr.size()-1;i>=0;i--)
    {
        cout<<arr[i];
    }
    cout<<endl;
}
