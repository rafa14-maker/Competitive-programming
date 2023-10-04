#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int counter=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]==b[i])counter++;
    }
    cout<<counter<<endl;
}
