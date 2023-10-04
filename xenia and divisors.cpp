#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    int num[8];

    cin>>n;

    for(i=0;i<8;i++)
    {
        num[i]=0;
    }

    for(i=0;i<n;i++)
    {
        cin>>j;
        num[j]++;
    }


    if(num[5]>0||num[7]>0||num[1]!=n/3||num[2]<num[4]||num[6]!=num[2]+num[3]-num[4])
    {
        cout<<-1<<endl;
    }
    else
    {
        while(num[2]>0&&num[4]>0)
        {
            cout<<"1 2 4"<<endl;
            num[2]--;
            num[4]--;
        }
        while(num[2]>0&&num[6]>0)
        {
            cout<<"1 2 6"<<endl;
            num[2]--;
            num[6]--;
        }
        while(num[3]>0&&num[6]>0)
        {
            cout<<"1 3 6"<<endl;
            num[3]--;
            num[6]--;
        }
    }

}
