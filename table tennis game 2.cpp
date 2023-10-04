#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k,a,b;
    cin>>k>>a>>b;
    long long f1=a/k;
    long long f2=b/k;

    long long r1=a-(f1*k);
    long long r2=b-(f2*k);

    if(f1==0&&f2==0){
            cout<<-1<<endl;
    return 0;}

    if(r2<=(f1*(k-1))&&r1<=(f2*(k-1)))
    {
        cout<<f1+f2<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
}
