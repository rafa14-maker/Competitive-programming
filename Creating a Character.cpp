#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int counter=c+1;
        if(a>b&&a-b>c)
        {
            counter=c+1;
        }
        else if(a==b)
        {
            if(c%2==1)
            {
                counter=(c+1)/2;
            }
            else
            {
                counter=c/2;
            }
        }
        else {
        for(int i=0,j=c;i<=c;i++,j--)
        {
            if(j+b>=a+i)
            {
                counter--;
            }
            else
            {
                break;
            }
        }
        }
        printf("%d\n",counter);
    }
}
