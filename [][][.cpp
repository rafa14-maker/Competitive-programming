#include<bits/stdc++.h>

using namespace std;

int main()
{
    string arr;

    cin>>arr;

    int i;

    for(i=0;i<arr.size();i++)
    {
        if(arr[i]>='A'&&arr[i]<='Z')
        {
           arr[i]=arr[i]+32;
        }
    }
    arr[0]=arr[0]-32;
    cout<<arr;
}
