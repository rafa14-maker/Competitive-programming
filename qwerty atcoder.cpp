#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[27];
    for(int i=1;i<=26;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=26;i++)
    {
        cout<<(char)('a'+arr[i]-1);
    }cout<<endl;
}

