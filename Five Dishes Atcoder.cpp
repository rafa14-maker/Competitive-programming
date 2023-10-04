#include<bits/stdc++.h>
using namespace std;

int cal(int a,int b,int c,int d,int e)
{
    int frr[6];
    frr[0]=a;
    frr[1]=b;
    frr[2]=c;
    frr[3]=d;
    frr[4]=e;

    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=frr[i];
        if(i==4)break;
        if(sum%10!=0)
        {
            int p=sum%10;
            p=10-p;
            sum+=p;
        }
    }
    return sum;
}


int main()
{
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    int mn=1e7;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            for(int k=0;k<5;k++)
            {
                for(int a=0;a<5;a++)
                {
                    for(int b=0;b<5;b++)
                    {
                        if(i!=j&&i!=k&&i!=a&&i!=b&&j!=k&&j!=a&&j!=b&&k!=a&&k!=b&&a!=b)
                        {
                            mn=min(mn,cal(arr[i],arr[j],arr[k],arr[a],arr[b]));
                        }
                    }
                }
            }
        }
    }
    cout<<mn<<endl;

}
