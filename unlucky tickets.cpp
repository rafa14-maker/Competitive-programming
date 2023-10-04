#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    string arr,l,r;

    cin>>n>>arr;

    l=arr.substr(0,n);
    r=arr.substr(n,n);

    sort(l.begin(),l.end());
    sort(r.begin(),r.end());

    int counter=0;

    for(i=0;i<n;i++)
    {
        if(l[i]<r[i])
        {
            counter++;
        }
        else if(l[i]==r[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(counter==0||counter==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
