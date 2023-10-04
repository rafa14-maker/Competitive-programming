#include<bits/stdc++.h>
using namespace std;

double  f(char c)
{
    if(c=='H')return 0.5;
    if(c=='W')return 1.0;
    if(c=='Q')return 0.25;
    if(c=='E')return 0.125;
    if(c=='S')return 0.0625;
    if(c=='T')return 0.03125;
    if(c=='X')return 0.015625;
}

int main()
{
    char arr[205];
    while(1)
    {
        gets(arr);
        if(arr[0]=='*')break;
        double sum=0.00;
        int counter=0;
        for(int i=1;i<strlen(arr);i++)
        {
            if(arr[i]=='/')
            {
                if(sum==1)counter++;
                sum=0.00;
            }
            else sum+=f(arr[i]);
        }
        cout<<counter<<endl;
    }
}
