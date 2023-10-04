#include<iostream>
using namespace std;
int main()
{
    bool prime[3005];
    for(int i=0;i<3005;i++)prime[i]=false;
    int n;
    cin>>n;
    int a;
    while(n--)
    {
        cin>>a;
        prime[a]=true;
    }
    for(int i=1;i<3005;i++)
    {
        if(prime[i]==false)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}

