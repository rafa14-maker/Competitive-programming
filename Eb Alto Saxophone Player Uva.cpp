#include<bits/stdc++.h>
using namespace std;

bool finger[15];
int arr[15];

void f(char c)
{
    if(c=='c')
    {
        for(int i=2;i<=4;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }
        for(int i=7;i<=10;i++)
        {
            if(!finger[i])
            {
                arr[i]++;
                finger[i]=true;
            }
        }
        finger[6]=false;
        finger[5]=false;
        finger[1]=false;
    }
    if(c=='d')
    {
        for(int i=2;i<=4;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }
        for(int i=7;i<=9;i++)
        {
            if(!finger[i])
            {
                arr[i]++;
                finger[i]=true;
            }
        }
        finger[6]=false;
        finger[5]=false;
        finger[10]=false;
          finger[1]=false;
    }
    if(c=='e')
    {
        for(int i=2;i<=4;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }
        for(int i=7;i<=8;i++)
        {
            if(!finger[i])
            {
                arr[i]++;
                finger[i]=true;
            }
        }
        finger[6]=false;
        finger[5]=false;
        finger[9]=false;
        finger[10]=false;
          finger[1]=false;
    }
    if(c=='f')
    {
        for(int i=2;i<=4;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }
        for(int i=7;i<=7;i++)
        {
            if(!finger[i])
            {
                arr[i]++;
                finger[i]=true;
            }
        }
        finger[1]=false;
        finger[5]=false;
        finger[6]=false;
        finger[8]=false;
        finger[9]=false;
        finger[10]=false;
    }
    if(c=='g')
    {
          for(int i=2;i<=4;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }
        finger[1]=false;
        finger[5]=false;
        finger[6]=false;
        finger[7]=false;
        finger[8]=false;
        finger[9]=false;
        finger[10]=false;
    }
    if(c=='a')
    {
          for(int i=2;i<=3;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }
          finger[1]=false;
        finger[4]=false;
        finger[5]=false;
        finger[6]=false;
        finger[7]=false;
        finger[8]=false;
        finger[9]=false;
        finger[10]=false;
    }
    if(c=='b')
    {
         for(int i=2;i<=2;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }

        finger[1]=false;
        finger[3]=false;
         finger[4]=false;
        finger[5]=false;
         finger[6]=false;
        finger[7]=false;
         finger[8]=false;
        finger[9]=false;
         finger[10]=false;
      //  finger[5]=false;
    }
    if(c=='C')
    {
        for(int i=3;i<=3;i++)
        {
            if(!finger[i])
            {
                arr[i]++;
                finger[i]=true;
            }
        }
        finger[1]=false;
        finger[2]=false;
        finger[4]=false;
        finger[5]=false;
        finger[6]=false;
        finger[7]=false;
        finger[8]=false;
        finger[9]=false;
        finger[10]=false;
      //  finger[5]=false;
    }
    if(c=='D')
    {
        for(int i=1;i<=4;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }
        for(int i=7;i<=9;i++)
        {
            if(!finger[i])
            {
                arr[i]++;
                finger[i]=true;
            }
        }
      //  finger[4]=false;
        finger[5]=false;
        finger[6]=false;
        finger[10]=false;
    }
    if(c=='E')
    {
        for(int i=1;i<=4;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }
        for(int i=7;i<=8;i++)
        {
            if(!finger[i])
            {
                arr[i]++;
                finger[i]=true;
            }
        }
      //  finger[4]=false;
        finger[5]=false;
        finger[6]=false;
        finger[9]=false;
        finger[10]=false;
    }
    if(c=='F')
    {
        for(int i=1;i<=4;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }
        for(int i=7;i<=7;i++)
        {
            if(!finger[i])
            {
                arr[i]++;
                finger[i]=true;
            }
        }
       // finger[1]=false;
        finger[5]=false;
        finger[6]=false;
        finger[8]=false;
        finger[9]=false;
        finger[10]=false;
    }
    if(c=='G')
    {
          for(int i=1;i<=4;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }
        finger[5]=false;
        finger[6]=false;
        finger[7]=false;
        finger[8]=false;
        finger[9]=false;
        finger[10]=false;
    }
    if(c=='A')
    {
          for(int i=1;i<=3;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }
        finger[4]=false;
        finger[5]=false;
        finger[6]=false;
        finger[7]=false;
        finger[8]=false;
        finger[9]=false;
        finger[10]=false;
    }
    if(c=='B')
    {
         for(int i=1;i<=2;i++)if(!finger[i])
        {
            arr[i]++;
            finger[i]=true;
        }
        finger[3]=false;
        finger[4]=false;
        finger[5]=false;
        finger[6]=false;
        finger[7]=false;
        finger[8]=false;
        finger[9]=false;
        finger[10]=false;
    }

}

void solve()
{
    char s[205];
    gets(s);
    for(int i=1;i<=10;i++)finger[i]=false;
    for(int i=1;i<=10;i++)arr[i]=0;

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!=' ')f(s[i]);
    }

    for(int i=1;i<=10;i++)
    {
        if(i==10)cout<<arr[i]<<endl;
        else cout<<arr[i]<<" ";
    }

}

int main()
{
    int q;
    cin>>q;
    cin.ignore();
    while(q--)solve();
}
