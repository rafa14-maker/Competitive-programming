#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,k,i;
    char r;
    string arr;

    scanf("%d",&n); k=1;

    while(n--)
    {
        scanf("%d %d",&a,&b);
        while(a--)
        {
            cin>>arr;
            if(arr[0]=='B')
            {
                r=arr[2];
                b-=int(r)-48;
            }
        }
        printf("case %d: %d\n",k,b);
        k++;
    }

}
