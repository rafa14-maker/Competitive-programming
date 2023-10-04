#include<bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0;
    while(1)
    {
        string s;
        cin>>s;
        if(s=="*")break;
        if(s=="Hajj")printf("Case %d: Hajj-e-Akbar\n",++counter);
       else if(s=="Umrah")printf("Case %d: Hajj-e-Asghar\n",++counter);
    }
}
