#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p=0;
    cin>>t;
    while(t--)
    {
        long long a;
        string arr;
        cin>>a>>arr;
        if(arr=="Bob")
        {
            if(a==0)("Case %d: Bob\n",++p);
           else if(a%2==0)printf("Case %d: Bob\n",++p);
                else printf("Case %d: Alice\n",++p);
        }
        else
        {  if(a==0)("Case %d: Bob\n",++p);
           else if(a%2==0)printf("Case %d: Alice\n",++p);
                else printf("Case %d: Bob\n",++p);
        }
    }
}

