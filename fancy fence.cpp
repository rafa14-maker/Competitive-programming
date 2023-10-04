//Dont copy my Code ^_____________^

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,n;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(360%(180-a)==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
