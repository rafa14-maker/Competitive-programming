#include<bits/stdc++.h>
using namespace std;

char arr[20][20];
bool vis[20][20];
int n,m;

bool check()
{
  for(int i=1;i<=n;i++)
  {
      //printf(" ");
      for(int j=1;j<=m;j++)
      {
          if(arr[i][j]!='a')return false;
      }
  }
  return true;
}

void f()
{
    while(1)
    {
       bool ck=true;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i+1<=n&&arr[i+1][j]=='a'&&arr[i][j]!='a')
            {
                arr[i+1][j]=arr[i][j];
                arr[i][j]='a';
                ck=false;
            }
        }
    }
    if(ck)break;
    }
      while(1){
            bool fo=true;
              for(int j=1;j<=m;j++)
            {
            int flag=true;
           for(int i=1;i<=n;i++)
            {
            if(arr[i][j]!='a')flag=false;
             }
             if(flag)
            {
            for(int i=1;i<=n;i++)
            {
                if(j+1<=m&&arr[i][j+1]!='a'){
                arr[i][j]=arr[i][j+1];
                arr[i][j+1]='a';
                fo=false;
                }
            }
        }
    }if(fo)break;
    }

}

void kp()
{
      for(int i=1;i<=n;i++)
        {
            printf("\n   ");
            for(int j=1;j<=m;j++)
            {
               if(arr[i][j]!='a')  cout<<" "<<arr[i][j];
               else cout<<" "<<" ";
            }
           // cout<<endl;
            printf("  ");
        }
        printf("\n");
}

void kop(int i,int j)
{
    if(vis[i][j])return ;
    if(arr[i][j]=='a')return ;
    vis[i][j]=true;
    int p=0;
    if(i+1<=n&&arr[i][j]==arr[i+1][j])
    {
        kop(i+1,j);
        p=1;
    }
    if(i-1>=1&&arr[i-1][j]==arr[i][j])
    {
        kop(i-1,j);p=1;
    }
      if(j+1<=m&&arr[i][j]==arr[i][j+1])
    {
        kop(i,j+1);p=1;
    }
    if(j-1>=1&&arr[i][j]==arr[i][j-1])
    {
        kop(i,j-1);p=1;
    }
   if(p==1) arr[i][j]='a';
}


int main()
{
    int cnt=0;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        for(int i=n;i>=1;i--)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>arr[i][j];
            }
        }
        int krr[n+5];
        int idx=n;
        for(int i=1;i<=n;i++)
        {
            krr[i]=idx;
            idx--;
        }
        int p,q;
        while(1)
        {
            cin>>p>>q;
            if(p==0&&q==0)break;
         //   p=krr[p];
            if(p>n||p<=0||q>m||q<=0)continue;
            p=krr[p];
            kop(p,q);
            //arr[p][q]='a';
            memset(vis,false,sizeof vis);
            f();
         //  kp();
         //   break;
        }
        if(cnt!=0) printf("\n");
      printf("Grid %d.",++cnt);
      if(check())printf("\n    Game Won\n");
     else kp();
    }
}
