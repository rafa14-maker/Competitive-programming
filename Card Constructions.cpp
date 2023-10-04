#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n;
        cin>>n;
        int step=0;
        while(n>1)
        {
            int pre=0,k=1,a=0,sum;
            while(n>pre)
            {
                sum=pre+(k*2+a);
                if(sum>n)break;
                pre=sum;
                k++;
                a++;
            }
          //  cout<<pre<<endl;
            n-=pre;
            step++;
        }
        cout<<step<<endl;
    }
}
