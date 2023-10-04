#include<bits/stdc++.h>
using namespace std;

int main()
{
    double sum=0;

    for(int i=1;i<=25;i++)
    {
        sum+=1/pow(2,i);
        cout<<sum<<endl;
    }
    cout<<endl;
    cout<<sum<<endl;
}
