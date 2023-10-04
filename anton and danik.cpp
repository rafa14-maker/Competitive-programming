#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,b=0;
    char c;
    cin>>n;
    while(n--)
    {
        cin>>c;
        if(c=='A')a++;
        else b++;
    }
    if(a>b)cout<<"Anton"<<endl;
    else if (a<b)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

}
