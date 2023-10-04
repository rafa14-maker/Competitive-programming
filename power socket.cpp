#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int k=1,counter=0;
    while(k<b)
    {
        counter++;
        k+=(a-1);
    }
    cout<<counter<<endl;
}
