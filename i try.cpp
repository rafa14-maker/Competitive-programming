#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,i,counter=0,d,x,y=0;

    cin>>n;



    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        y=0;

        for(c=a;c<=b;c++)
        {
            counter=0;

            if(c==1)
            {
                continue;
            }

            for(x=2;x<=c/2;x++)
            {
                if(c%x==0)
                {
                    counter++;
                }
            }
            if(counter==0)
            {
                y++;
            }

        }
       printf("Case %d: There are %d numbers between %d and %d.\n",i+1,y,a,b);
    }


}
