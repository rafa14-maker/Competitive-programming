#include<bits/stdc++.h>
using namespace std;

char arr[100][100];
char frr[100][100];
int n,p,k;

int main()
{
    while(1)
    {
        while(1)
        {
            for(n=0;;n++)
            {
                gets(arr[n]);
                if(arr[n][0]=='%')break;
            }

            for(int i=0;i<n;i++)cout<<puts(arr[i])<<endl;

            /*p=0,k=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<strlen(arr[n]);j++)
                {
                    if(arr[n][j]!=' ')
                    {
                        frr[p][k]=0;
                    }
                }
            }*/
            cout<<1<<endl;
        }
    }
}
