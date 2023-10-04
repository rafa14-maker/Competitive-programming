#include<bits/stdc++.h>
using namespace std;

int main()
{
   int q;
   cin>>q;
   getchar();
   while(q--)
   {
       string str;
    getline(cin,str);
    stringstream ss;
    ss<<str;
    vector<int>v;
    int val;
    while(ss>>val)
    {
        v.push_back(val);
    }

    int mx=0;

    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            mx=max(mx,__gcd(v[i],v[j]));
        }
    }

    cout<<mx<<endl;

   }
}
