#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;

int main()
{
    string arr;
    cin>>arr;
    int dp[N]={0};
    char k;
    int counter=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='L')
        {
            if(k=='R')
            {
                int counter=1,j;
                if(i-1<0)j=i;
                else j=i-1,dp[i]=1;
                while(j>=0&&arr[j]=='R')
                {
                    dp[j]=counter;
                    counter++;
                    j--;
                }
                counter=1;
                k='0';
            }
            else
            {
                counter++;
                dp[i]=counter;

            }
        }
       else if(arr[i]=='R')
        {
            counter=1;
            k='R';
        }
    }

    int frr[N]={0};

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='R')
        {
            if(dp[i]%2==0)
            {
                if(dp[i]+i<arr.size())
                frr[dp[i]+i]++;
                else
                {
                    frr[arr.size()-1]++;
                }
            }
            else
            {
                if(dp[i]+i-1<arr.size())
                frr[dp[i]+i-1]++;
                else
                {
                    frr[arr.size()-1]++;
                }
            }
        }
        else
        {
            if(dp[i]%2==1)
            {
                if(i-dp[i]+1>=0)
                frr[i-dp[i]+1]++;
                else frr[0]++;
            }
            else
            {
                if(i-dp[i]>=0)
                frr[i-dp[i]]++;
                else frr[0]++;
            }
        }
    }

   /* for(int i=0;i<arr.size();i++)
    {
        cout<<dp[i]<<" ";
    }
cout<<endl;  */

    for(int i=0;i<arr.size();i++)
    {
        cout<<frr[i]<<" ";
    }


}
