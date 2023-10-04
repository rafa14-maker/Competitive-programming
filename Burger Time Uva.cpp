#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        string s;
        cin>>s;
        int counter=1e8;
        int flag=-1;
        int idx1=-1,idx2=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='Z')
            {
                counter=0;
                break;
            }
            else if(s[i]=='R')
            {
                if(flag==-1)
                {
                    flag=0;
                    idx1=i;
                }
                else if(flag==0)
                {
                    idx1=i;
                    flag=0;
                }
                else if(flag==1)
                {
                    idx1=i;
                if(idx2!=-1)     counter=min(counter,abs(idx1-idx2));
                    flag=0;
                }
            }
             else if(s[i]=='D')
            {
                if(flag==-1)
                {
                    flag=1;
                    idx2=i;
                }
                else if(flag==1)
                {
                    idx2=i;
                    flag=1;
                }
                else if(flag==0)
                {
                    idx2=i;
                 if(idx1!=-1)   counter=min(counter,abs(idx1-idx2));
                    flag=1;
                }
            }
        } cout<<counter<<endl;
    }
}
