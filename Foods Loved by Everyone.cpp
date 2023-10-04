#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m+5]={0};
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        while(q--)
        {
            int a;
            cin>>a;
            arr[a]++;
        }
    }

        int counter=0;
        for(int i=1;i<=m;i++)
        {
            if(arr[i]==n)counter++;
        }
        cout<<counter<<endl;
}
