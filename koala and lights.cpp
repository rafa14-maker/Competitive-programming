#include<bits/stdc++.h>
using namespace std;

const int N = 1000;

 int frr[100000];


int main()
{
    int n;
    cin>>n;
    int arr[n+5][n+5];
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
            cin>>arr[i][0]>>arr[i][1];
    }
       for(int i=0;i<n;i++)
       {
           int flag=0;
        if(s[i]=='1')
        {
            flag++;
            for(int j=0;j<arr[i][1];j++)
            {
                frr[j]++;
            }
        }
        int a=arr[i][0];
        int b=arr[i][1];
        int p=1;

        for(int j=b;j<=N;j=b+p*a)
        {
           if(p%2==0&&flag==0)
           {
               for(int u=j;u<(b+(p+1)*a);u++)
               {
                  frr[u]++;
               }
           }
           else if(p%2==1&&flag>0)
           {
                for(int u=j;u<(b+(p+1)*a);u++)
               {
                  frr[u]++;
               }
           }
           p++;
        }
    }

    int counter=0;

    for(int i=0;i<=N;i++)
    {
        counter=max(frr[i],counter);
    }
    cout<<counter<<endl;
}
