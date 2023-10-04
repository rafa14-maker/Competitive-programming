#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int counter=0;
    while(q--)
    {
       int l,w,h;
       cin>>l>>w>>h;
       if(l<=20&&w<=20&&h<=20)printf("Case %d: good\n",++counter);
        else printf("Case %d: bad\n",++counter);
    }
}
