#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int k=a,p=b;
    int counter=0;
    for(int i=0;i<s.size();i++)
    {
        if(a>0&&b>0){
        if(s[i]=='.'&&s[i-1]!='A'&&counter%2==0)
        {
            s[i]='A';
            counter++;
            a--;
        }
        else  if(s[i]=='.'&&s[i-1]!='B'&&counter%2==1)
        {
            s[i]='B';
            counter++;
            b--;
        }
        }
        else
        {
           if(s[i]=='.'&&s[i-1]!='A'&&a>0)
        {
            s[i]='A';
            a--;
        }
        else  if(s[i]=='.'&&s[i-1]!='B'&&b>0)
        {
            s[i]='B';
            b--;
        }
        }
    }
    cout<<k-a+p-b;
}
