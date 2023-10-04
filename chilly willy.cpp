#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<3)cout<<-1<<endl;
    else
    {
        cout<<210;
        int k=n-3;
        while(k--)cout<<0;
    }
}
