#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int flag=0;
    while(q--)
    {
        int n;
        cin>>n;
        int sum=0,counter=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
          //  if((a-1)%30==0)sum+=10*(a/30);
           sum+=10*(a/30)+10;
          //  if((a-1)%60==0)counter+=15*(a/60);
          counter+=15*(a/60)+15;
        }
       if(sum<counter)printf("Case %d: Mile %d\n",++flag,sum);
       else if(sum>counter) printf("Case %d: Juice %d\n",++flag,counter);
        else  printf("Case %d: Mile Juice %d\n",++flag,sum);
    }
}
