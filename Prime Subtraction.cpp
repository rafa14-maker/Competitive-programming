#include<bits/stdc++.h>
using namespace std;

int main()
{
    //seive();
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        long long d=a-b;
       if(d==1)printf("NO\n");
       else cout<<"YES"<<endl;
    }


}
