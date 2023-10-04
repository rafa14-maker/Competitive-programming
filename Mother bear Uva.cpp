#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[1000];
    while(gets(arr))
    {
        if(arr[0]=='D'&&arr[1]=='O'&&arr[2]=='N'&&arr[3]=='E')break;
        string s;
       int len=strlen(arr);
       for(int i=0;i<len;i++)
       {
           if(arr[i]>='a'&&arr[i]<='z')s+=arr[i];
           if(arr[i]>='A'&&arr[i]<='Z')
           {
               s+=(arr[i]+32);
           }
       }
       //cout<<s<<endl;
       bool flag=true;
       for(int a=0,b=s.size()-1;a<=b;a++,b--)if(s[a]!=s[b])flag=false;
       if(flag)puts("You won't be eaten!");
       else printf("Uh oh..\n");
    }
}
