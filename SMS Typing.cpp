#include<bits/stdc++.h>
using namespace std;

int f(char n)
{
    if(n=='a'||n=='d'||n=='g'||n=='j'||n=='m'||n=='p'||n=='t'||n=='w'||n==' ')return 1;
     if(n=='b'||n=='e'||n=='h'||n=='k'||n=='n'||n=='q'||n=='u'||n=='x')return 2;
      if(n=='c'||n=='f'||n=='i'||n=='l'||n=='o'||n=='r'||n=='v'||n=='y')return 3;
      if(n=='s'||n=='z')return 4;
}

int main()
{
    int q;
    cin>>q;
    int t=0;
    getchar();
    while(q--)
    {

        char arr[200];
        gets(arr);
        long long sum=0;
        for(int i=0;i<strlen(arr);i++)
        {
            sum+=f(arr[i]);
        }
        printf("Case #%d: %ld\n",++t,sum);
    }
}
