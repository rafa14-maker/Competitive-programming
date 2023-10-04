#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;
long long counter=0;

int a,b,c,d;

void f(int i,int j)
{
    if(i==c&&j==d)
    {
        counter++;
        counter = counter%mod;
    }
}
