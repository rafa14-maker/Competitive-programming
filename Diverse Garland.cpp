#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int counter=0;

    for(int i=0;i<s.size();i++)
    {
        if(i+1<s.size()&&s[i]==s[i+1])
        {
            int l=i;
            int r=i;
            while(s[r]==s[r+1])
            {
                r++;
            }
            cout<<l<<" "<<r<<endl;
            if((r-l)%2==1)
            { l++;
                char k;
                if(l==0&&r==n)
                {
                    if(s[l]!='B'&&s[r]!='B')k='B';
                   else if(s[l]!='R'&&s[r]!='R')k='R';
                   else if(s[l]!='G'&&s[r]!='G')k='G';
                    for(int j=l;j<r;j+=2)s[j]=k;
                     i=r;
                }
                else if(l==0&&r!=n)
                {
                      if(s[l]!='B'&&s[r+1]!='B')k='B';
                   else if(s[l]!='R'&&s[r+1]!='R')k='R';
                   else if(s[l]!='G'&&s[r+1]!='G')k='G';
                    for(int j=l;j<r;j+=2)s[j]=k,counter++;

                     i=r;
                }
                else if(l!=0&&r==n)
                {
                    k=s[l-1];
                     for(int j=l;j<r;j+=2)s[j]=k,counter++;
                     i=r;
                }
                else if(l!=0&&r!=n)
                {
                    if(s[l]==s[r])
                    {
                         if(s[l]!='B'&&s[r]!='B'&&s[l-1]!='B'&&s[r+1]!='B')k='B';
                   else if(s[l]!='R'&&s[r]!='R'&&s[l-1]!='R'&&s[r+1]!='R')k='R';
                   else if(s[l]!='G'&&s[r]!='G'&&s[l-1]!='G'&&s[r+1]!='G')k='G';
                    for(int j=l;j<r;j+=2)s[j]=k;
                     i=r;
                    }
                    else
                    {
                       k=s[l-1];
                     for(int j=l;j<r;j+=2)s[j]=k,counter++;
                     i=r;
                    }
                }
            }

            else if((r-l)%2==0)
            {
                char k;
                if(l==0&&r==n)
                {
                    if(s[l]!='B'&&s[r]!='B')k='B';
                   else if(s[l]!='R'&&s[r]!='R')k='R';
                   else if(s[l]!='G'&&s[r]!='G')k='G';
                    for(int j=l;j<r;j+=2)s[j]=k;
                     i=r;
                }
                else if(l==0&&r!=n)
                {
                      if(s[l]!='B'&&s[r+1]!='B')k='B';
                   else if(s[l]!='R'&&s[r+1]!='R')k='R';
                   else if(s[l]!='G'&&s[r+1]!='G')k='G';
                    for(int j=l;j<r;j+=2)s[j]=k,counter++;

                     i=r;
                }
                else if(l!=0&&r==n)
                {
                    k=s[l-1];
                     for(int j=l;j<r;j+=2)s[j]=k,counter++;
                     i=r;
                }
                else if(l!=0&&r!=n)
                {
                    if(s[l]==s[r])
                    {
                         if(s[l]!='B'&&s[r]!='B'&&s[l-1]!='B'&&s[r+1]!='B')k='B';
                   else if(s[l]!='R'&&s[r]!='R'&&s[l-1]!='R'&&s[r+1]!='R')k='R';
                   else if(s[l]!='G'&&s[r]!='G'&&s[l-1]!='G'&&s[r+1]!='G')k='G';
                    for(int j=l;j<r;j+=2)s[j]=k;
                     i=r;
                    }
                    else
                    {
                       k=s[l-1];
                     for(int j=l;j<r;j+=2)s[j]=k,counter++;
                     i=r;
                    }
                }
            }
        }
    }

    cout<<counter<<endl;
    cout<<s<<endl;
}
