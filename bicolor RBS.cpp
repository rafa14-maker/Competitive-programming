#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    int n,l=0;
    cin>>n;
    cin>>arr;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='(')l++;
        cout<<(l&1);
        if(arr[i]==')')l--;
    }
    cout<<endl;
}
