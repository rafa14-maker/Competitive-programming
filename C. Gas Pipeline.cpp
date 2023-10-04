#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b;
        int n;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        long long sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                sum+=a;
               // sum+=2*b;
            }
            else if(s[i]=='0')
            {
                if(i-1>=0&&s[i-1]=='1')
                {
                    sum+=2*a;
                  //  sum+=2*b;
                }
                else if(i+1<s.size()&&s[i+1]=='1')
                {
                    sum+=2*a;
                  //  sum+=2*b;
                }
                else
                {
                    sum+=a;
                   // sum+=b;
                }
            }
        }

        for(int i=0;i<s.size();i++)
        {
            if(i+1<s.size()&&arr[i]=='0'&&arr[i]==arr[i+1])
            {
                sum+=b;
            }
            else if(i+1<s.size()&&arr[i]=='0'&&arr[i]==arr[i+1])
            {
                {
                    sum+=2*b;
                }
            }
            else if(i+1<s.size()&&arr[i]=='1'&&arr[i]==arr[i+1])
            {
                sum+=2*b;
            }
            else if(i+1<s.size()&&arr[i]=='1'&&arr[i]!=arr[i+1])
            {
                sum+=b;
            }
        }

        long long flag=0;
         for(int i=0;i<=n;i++)
        {
           if(i==0||i==n)
           {
               flag+=b;
               flag+=2*a;
           }
           else
           {
               flag+=2*b;
               flag+=2*a;
           }
        }
        cout<<min(flag,sum)<<endl;

    }
}
