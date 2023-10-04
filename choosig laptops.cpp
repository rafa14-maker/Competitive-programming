#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >arr;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum=a+b+c;
        arr.push_back(make_pair(sum,d));
    }
    sort(arr.begin(),arr.end());

}
