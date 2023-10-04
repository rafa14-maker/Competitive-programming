#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"infinity"<<endl;
        return 0;
    }
    else if(a==0)
    {
        cout<<0<<endl;
        return 0;
    }

    long long c=a-b;

    vector<long long>v;

    for(long long i=1;i<=sqrt(c);i++)
    {
        if(c%i==0)
        {
            v.push_back(i);
            if(i!=c/i&&(c%(c/i)==0))v.push_back(c/i);
        }
    }
    int counter=0;

    for(int i=0;i<v.size();i++)
    {
        if(a%v[i]==b)counter++;
    }
    cout<<counter<<endl;
}
