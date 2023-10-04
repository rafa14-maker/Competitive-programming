#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    while(n--)
    {
        string arr;
        cin>>arr;
        int counter=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]=='4'||arr[i]=='7')counter++;
        }
        if(counter<=m)sum++;
    }
    cout<<sum<<endl;
}
