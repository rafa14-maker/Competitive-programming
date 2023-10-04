#include<bits/stdc++.h>
using namespace std;

int arr[10][10];
int frr[10][10];

void build()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)arr[i][j]=0;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)frr[i][j]=0;
    }
}

void f(int n)
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==n)
            {
                frr[i][j]=1;
                return ;
            }
        }
    }
}

bool check()
{
    if(frr[0][0]==1&&frr[1][1]==1&&frr[2][2]==1&&frr[3][3]==1&&frr[4][4]==1)return true;
     if(frr[0][4]==1&&frr[1][3]==1&&frr[2][2]==1&&frr[3][1]==1&&frr[4][0]==1)return true;

     for(int i=0;i<5;i++)
     {
         if(frr[i][0]==1&&frr[i][1]==1&&frr[i][2]==1&&frr[i][3]==1&&frr[i][4]==1)return true;
         if(frr[0][i]==1&&frr[1][i]==1&&frr[2][i]==1&&frr[3][i]==1&&frr[4][i]==1)return true;
     }

     return false;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        build();
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(i==2&&j==2)continue;
                cin>>arr[i][j];
            }
        }
        frr[2][2]=1;
        int counter=-1;
        for(int i=0;i<75;i++)
        {
            int a;
            cin>>a;
            f(a);
            if(counter==-1&&check())counter=i+1;
        }
        printf("BINGO after %d numbers announced\n",counter);
    }
}

