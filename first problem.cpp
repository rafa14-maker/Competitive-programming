#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,r,i,counter,k,j,p=0,q=0,b=0;


    cin>>t;

    int arr[b],frr[q],jrr[p];


    if(t>100)
    {
        return 0;
    }

    for(j=1;j<=t;j++)
    {
        cin>>l>>r;



        frr[q]=l;
        q++;
        jrr[p]=r;
        p++;

        counter=0;
        for(i=l;i<=r;i++)
        {
            if(i<10)
            {
                if(i==2||i==3||i==5||i==7)
                {
                   counter++;
                }

            }
            else if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0)
            {
                 k=sqrt(i);
                if(k*k!=i)
                {
                    counter++;
                }
            }

        }

        arr[b]=counter;
        b++;

    }

    for(i=0;i<t;i++)
    {
        printf("Case %d: There are %d numbers between %d and %d.\n",i+1,arr[i],frr[i],jrr[i]);
    }


return 0;
}
