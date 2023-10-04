#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,f,t,cf,ct,ft,cft,a;

    cin>>n>>c>>f>>t>>cf>>ct>>ft>>cft;

    n-=cft;

    a=c+f+t-cf-ct-ft;

    n-=a;

    cout<<n<<endl;
}

