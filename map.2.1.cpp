#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>coffee;

    coffee["tea"]=20;
    coffee["capacino"]=30;
    coffee["biri"]=90;

    map<string,int>::iterator it;

    for(it=coffee.begin();it!=coffee.end();it++)
    {
        cout<<it->first<<":"<<it->second<<endl;
    }
}
