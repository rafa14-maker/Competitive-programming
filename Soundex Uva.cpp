#include<bits/stdc++.h>
using namespace std;

int main()
{
   char s[50];
    while(scanf("%s",s)!=EOF)
    {
       for(int i=0;i<strlen(s);i++)
       {
           if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')s[i]='B';
           else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')s[i]='C';
           else if(s[i]=='D'||s[i]=='T')s[i]='D';
           else if(s[i]=='L')s[i]='L';
           else if(s[i]=='M'||s[i]=='N')s[i]='M';
           else if(s[i]=='R')s[i]='R';
       }
       for(int i=0;i<strlen(s)-1;i++)
       {
           if(s[i]==s[i+1])s[i]='9';
       }
        for(int i=0;i<strlen(s);i++)
       {
           if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')printf("1");
           else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')printf("2");
           else if(s[i]=='D'||s[i]=='T')printf("3");
           else if(s[i]=='L')printf("4");
           else if(s[i]=='M'||s[i]=='N')printf("5");
           else if(s[i]=='R')printf("6");
       }
       cout<<endl;
    }
}
