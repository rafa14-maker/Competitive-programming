#include<bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define MAX 500000
#define pi acos(-1.0)
#define get_stl(s) getline(cin,s)
#define sif(a) scanf("%d",&a)
#define pif(a) printf("%d\n",a)

typedef long long ll;
typedef unsigned long long ull;

int digit_frequency[367][10];

int main()
{
    digit_frequency[0][1]++;
    digit_frequency[1][1]++;

    string factorial;
    factorial.push_back('1');

    for(int carry=0,j=0,i=2;i<367;i++,carry=0)
    {
        for(j=0;factorial[j]!=0;j++)
        {
            carry+=(factorial[j]-48)*i;

            factorial[j] = (carry>9) ? (carry%10+48) : (carry+48);

            (carry>9) ? carry/=10 : carry=0;

            digit_frequency[i][factorial[j]-48]++;
        }
        while(carry)
        {

            (carry>9) ? factorial.push_back(carry%10+48) : factorial.push_back(carry+48);
            (carry>9) ? carry/=10 : carry=0;

            digit_frequency[i][factorial[j]-48]++;
            j++;
        }
        /*for(int a=0;factorial[a]!=0;a++)
            digit_frequency[i][factorial[a]-48]++;*/
    }

    int n;
    const char c=32;

    while(1)
    {
        sif(n);

        if(n==0)
            break;

        pf("%d! --\n", n);
        for(int i = 0; i < 5; i++)
        {
            if(i)
                pf("    ");
            else
                pf("   ");
            pf("(%d)%5d",i,digit_frequency[n][i]);
        }
        puts("");
        for(int i = 5; i < 10; i++)
        {
            if(i != 5)
                printf("    ");
            else
                printf("   ");
            printf("(%d)%5d", i, digit_frequency[n][i]);
        }
        puts("");
    }
    return 0;
}
