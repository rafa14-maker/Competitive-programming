#include<bits/stdc++.h>
using namespace std;

int arr[10],row[9];
int mn;

int cal(int row[9])
{
    int sum=0;
    for(int i=0;i<8;i++)
    {
      if(arr[i]!=row[i])sum++;
    }
    return sum;
}


bool place(int r,int c)
{
    for(int prev=0;prev<c;prev++)
    {
        if((row[prev]==r)||(abs(row[prev]-r)==abs(prev-c)))
        {
            return false;
        }
    }
    return true;
}

void backtrack(int c)
{
    if(c==8)
    {
          mn=min(mn,cal(row));
          return;
    }
    for(int r=0;r<8;r++)
    {
        if(place(r,c))
        {
            row[c]=r;
            backtrack(c+1);
        }
    }
}

void solve(int test)
{
    memset(row,0,sizeof row);
    arr[0]--;
    for(int i=1;i<8;i++)cin>>arr[i],arr[i]--;
    mn=1e7;
    backtrack(0);
    printf("Case %d: %d\n",test,mn);
}

int main()
{
    int test=0;
   while(scanf("%d",&arr[0])!=EOF)
   {
       solve(++test);
   }
}
