#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')a++;
        else if(s[i]>='A'&&s[i]<='Z')b++;
        else if(s[i]>='0'&&s[i]<='9')c++;
    }
    if(a==0&&b==0&&c>0)
    {
        s[0] = 'a';
        s[1] = 'A';
        cout<<s<<endl;
    }
    else if(a==0&&b>0&&c==0)
    {
         s[0] = 'a';
        s[1] = '9';
        cout<<s<<endl;
    }
    else if(a>0&&b==0&&c==0)
    {
         s[0] = 'A';
        s[1] = '9';
        cout<<s<<endl;
    }
    else if(a>0&&b>0&&c==0)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z'&&a>=b)
            {
                s[i] = '9';
                break;
            }
            else if(s[i]>='A'&&s[i]<='Z'&&b>=a)
            {
                s[i]='9';
                break;
            }
        }
        cout<<s<<endl;
    }
    else if(a>0&&b==0&&c>0)
    {
         for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z'&&a>=c)
            {
                s[i] = 'A';
                break;
            }
            else if(s[i]>='0'&&s[i]<='9'&&c>=a)
            {
                s[i]='A';
                break;
            }
        }
        cout<<s<<endl;
    }
    else if(a==0&&b>0&&c>0)
    {
           for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z'&&b>=c)
            {
                s[i] = 'a';
                break;
            }
            else if(s[i]>='0'&&s[i]<='9'&&c>=b)
            {
                s[i]='a';
                break;
            }
        }
        cout<<s<<endl;
    }
    else cout<<s<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
