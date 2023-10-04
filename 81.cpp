#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=9;i++)
    {
        if(a%i==0&&a/i<=9)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}
