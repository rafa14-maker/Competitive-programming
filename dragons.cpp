#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,counter=0,k;
    cin>>s>>n;
    k=n;
    vector< pair<int,int> >arr;

    int i,j;

    while(n--)
    {
        cin>>i>>j;
        arr.push_back(make_pair(i,j));
    }
    sort(arr.begin(),arr.end());

    for(i=0;i<k;i++)
    {
        if(arr[i].first<s)s+=arr[i].second;
        else counter++;
    }

    if(counter==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
