#include<bits/stdc++.h>
using namespace std;

char arr[100][100];
bool vis[100][100];
int n;
int a,b;

void f(int i,int j)
{
    if(vis[i][j])return ;
    if(arr[i][j]!=' '&&arr[i][j]!='*')return ;
    arr[i][j]='#';
    vis[i][j]=true;
    f(i+1,j);
    f(i,j+1);
    f(i-1,j);
    f(i,j-1);
}

void solve()
{
   // cout<<13<<endl;
   n=0;
   while(1)
   {
       gets(arr[n]);
       if(arr[n][0]=='_')break;
       // n++;
        for(int j=0;j<strlen(arr[n]);j++)
        {
            if(arr[n][j]=='*')
            {
                a=n;
                b=j;
            }
        }
        n++;
   }
   memset(vis,false,sizeof vis);
   f(a,b);
   for(int i=0;i<n;i++)puts(arr[i]);
  // cout<<"\n";
   for(int i=0;i<strlen(arr[n]);i++)cout<<"_";
   cout<<"\n";
}

int main()
{
    int q;
    cin>>q;
  //  cout<<12<<endl;
    cin.ignore();
    while(q--)solve();
}
