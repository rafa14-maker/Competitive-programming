#include<bits/stdc++.h>
using namespace std;

char arr[100][100];
bool vis[100][100];
int frr[100];

int n,a,b;

void f(int i,int j)
{
  //  cout<<i<<" "<<j<<endl;
    if(i<0||j<0||i>n||j>=100)return ;
    if(arr[i][j]=='X')return ;
    if(vis[i][j])return ;
    vis[i][j]=true;
  //  arr[i][j]='0';
    if(i+1<=n&&arr[i+1][j]=='X')arr[i][j]='#';
    if(i+1<=n&&j+1<strlen(arr[i])&&arr[i][j+1]=='X')arr[i][j]='#';
    if(i-1>=0&&arr[i-1][j]=='X')arr[i][j]='#';
    if(j-1>=0&&arr[i][j-1]=='X')arr[i][j]='#';

   f(i+1,j);
   f(i,j+1);
   f(i-1,j);
   f(i,j-1);

}

void solve()
{
  //  int n=0,a,b;
  n=0;

  //for(int i=0;i<100;i++)for(int j=0;j<100;j++)arr[i][j]=' ';

    while(1)
    {
       gets(arr[n]);
      // frr[n]=strlen(arr[n])+1;
       if(arr[n][0]=='_')break;
      // for(int i=strlen(arr[n]);i<99;i++)arr[n][i]=' ';
     //  arr[n][99]='\0';
       for(int i=0;i<99;i++)
       {
           if(arr[n][i]=='*')
           {
               a=n;
               b=i;
           }
       }
       n++;
    }


    memset(vis,false,sizeof vis);
    f(a,b);
    if(arr[a][b]!='#')arr[a][b]=' ';

    for(int i=0;i<n;i++)
    {
      bool tr=false;
      for(int j=0;j<strlen(arr[i]);j++)
      {
          cout<<arr[i][j];
      }
      cout<<"\n";
    }

    puts(arr[n]);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
