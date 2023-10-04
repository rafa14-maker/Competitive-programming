#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c='A',d='F';
    int k=0,e=0;
     for(int i=0;i<7;i++)
     {
         printf("%c",c+i);
     }
     for(int i=0;i<6;i++)
     {
         printf("%c",d-i);
     }
     cout<<endl;

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6-k;j++)
        {
           printf("%c",c+j);
        }
        for(int l=0;l<=i;l++)printf(" ");
         for(int l=1;l<=i;l++)printf(" ");
        k++;
        int x=0;
         for(int j=6;j>e;j--)
     {
         printf("%c",d-x);
         x++;
     }
     d--;
     e++;
        //for(int j=6;j>=i;j--)cout<<d;
        printf("\n");
    }
}
