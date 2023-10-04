#include<bits/stdc++.h>
using namespace std;

char arr[10][10];
char frr[10][10];
int mx;

void bui()
{
   frr[0][0]='1'; frr[0][1]='1'; frr[0][2]='1'; frr[0][3]='1'; frr[0][4]='1';
   frr[1][0]='0'; frr[1][1]='1'; frr[1][2]='1'; frr[1][3]='1'; frr[1][4]='1';
   frr[2][0]='0'; frr[2][1]='0'; frr[2][2]='9'; frr[2][3]='1'; frr[2][4]='1';
   frr[3][0]='0'; frr[3][1]='0'; frr[3][2]='0'; frr[3][3]='0'; frr[3][4]='1';
   frr[4][0]='0'; frr[4][1]='0'; frr[4][2]='0'; frr[4][3]='0'; frr[4][4]='0';
}

bool check()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]!=frr[i][j])return false;
        }
    }
    return true;
}

int gx[]={1,-1,1,-1,2,-2,-2,2};
int gy[]={2,-2,-2,2,1,-1,1,-1};

void f(int i,int j,int mov)
{

    if(check())
    {
        mx=min(mx,mov);
        return ;
    }

    if(mov==10)return ;

    for(int k=0;k<8;k++)
    {
        int a=i+gx[k];
        int b=j+gy[k];
        if(a>=0&&a<5&&b>=0&&b<5)
        {
            swap(arr[i][j],arr[a][b]);
            f(a,b,mov+1);
            swap(arr[i][j],arr[a][b]);
        }
    }
}

void solve()
{
    int a,b;
    mx=12;
   for(int i=0;i<5;i++)
   {
       string s;
       getline(cin,s);
       for(int j=0;j<5;j++)
       {
           if(s[j]!=' ')arr[i][j]=s[j];
           else
           {
               a=i;
               b=j;
               arr[i][j]='9';
           }
       }
   }
  f(a,b,0);
  if(mx==12)printf("Unsolvable in less than 11 move(s).\n");
  else printf("Solvable in %d move(s).\n",mx);
}

int main()
{
   bui();

   int q;
   cin>>q;
   getchar();
   while(q--)solve();
}


