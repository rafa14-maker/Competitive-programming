#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=0;
    while(n--)
    {
        int a;
        cin>>a;
        if(a==1)counter++;
    }
    if(counter==0)cout<<"Easy"<<endl;
    else cout<<"Hard"<<endl;
}
