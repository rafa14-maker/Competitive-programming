#include<bits/stdc++.h>
using namespace std;

int main()
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
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}

