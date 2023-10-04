#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v[100005];
    string arr;
    cin>>arr;
    int k=0;

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==arr[i+1]&&i+1<arr.size())
        {
            k++;
        }
        v[i]=k;
    }
    int m;
    cin>>m;
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        if(l-1==0)
        {
            if(r==l)
            {
                cout<<v[r-1]<<endl;
            }
            else
            {
                cout<<v[r-2]<<endl;
            }

        }
        else
        {
            cout<<v[r-2]-v[l-2]<<endl;
        }
    }
}
