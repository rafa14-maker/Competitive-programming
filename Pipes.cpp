#include<bits/stdc++.h>
using namespace std;

int n;

 int arr[100005][2];

 int counter;

void f(int i,int j)
{
    if(i<0||j<0) return ;

    if(i>1||j>n)return ;

    if(i==1&&j==n)
    {
       if(counter==0) cout<<"YES"<<endl;
        counter++;
        return ;
    }

    if(arr[i][j]==1)
    {
        if(arr[i+1][j]==2)f(i+1,j);
         if(arr[i+1][j]==2)f(i,j+1);
    }
    else
    {
        f(i+1,j);
        f(i,j+1);
    }
}


int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1'||s[i]=='2')
            {
                arr[0][i]=1;
            }
            else arr[0][i]=2;
        }
         for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='1'||s1[i]=='2')
            {
                arr[1][i]=1;
            }
            else arr[1][i]=2;
        }

        counter=0;
        f(0,n-1);
        if(counter==0)
        {
            cout<<"NO"<<endl;
        }

    }
}
