#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>coffee;

    coffee["espresso"]=25;
    coffee["cappuccino"]=30;
    coffee["tea"]=20;

    map<string,int>::iterator it=coffee.begin();

    for(it;it!=coffee.end();it++)
    {
        cout<<it->first<<" :"<<it->second<<endl;
    }

    return 0;

}
