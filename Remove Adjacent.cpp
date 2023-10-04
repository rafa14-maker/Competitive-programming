#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int flag=0,sum=0;
    for(char c='z';c>='a';c--)
    {
        int flag=0;
        string f="";
        while(1)
        {
            f="";
            flag=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]==c)
                {
                    if(i+1<s.size()&&s[i+1]==c-1)
                    {
                        s[i]='9';
                        flag++;
                    }
                    else if(i-1>=0&&s[i-1]==c-1)
                    {
                         s[i]='9';
                        flag++;
                    }
                }
            }
            if(flag==0)break;
            sum+=flag;
            for(int i=0;i<s.size();i++)if(s[i]!='9')f+=s[i];
            s=f;
        }
    }
    cout<<sum<<endl;
}
