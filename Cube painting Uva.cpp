#include<bits/stdc++.h>
using namespace std;

char s[14];

bool eq()
{
    for(int i=0;i<6;i++)
    {
        if(s[i]!=s[i+6])return false;
    }
    return true;
}

void rootz()
{
    char tmp=s[1];
    s[1]=s[3];
    s[3]=s[4];
    s[4]=s[2];
    s[2]=tmp;
}

void rootx()
{
    char tmp=s[0];
    s[0]=s[1];
    s[1]=s[5];
    s[5]=s[4];
    s[4]=tmp;
}

int main()
{
    while(scanf("%s",s)!=EOF)
    {
        bool same;
        for(int i=0;i<6;i++)
        {
            same=eq();
            if(same)break;
            else if(i<4)
            {
                rootx();
            }
            else if(i==4)
            {
                rootz();
                rootx();
            }
            else
            {
                rootx();
                rootx();
            }

            for(int j=0;j<4;j++)
            {
                same=eq();
                if(same)break;
                else rootz();
                if(same)break;
            }
            if(same)break;
        }
        if(same)printf("TRUE\n");
        else printf("FALSE\n");
    }
}
