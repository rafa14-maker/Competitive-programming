#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[1000000];

    int n,a,b,counter=0,k=1;

    while (scanf("%s %d",arr,&n))
    {
        printf("Case %d:\n",k);
        ++k;

        while (n--)
        {
            scanf("%d%d", &a, &b);
            counter=0;
            for (int i=min(a,b);i<max(a,b);i++){
                if (arr[i] != arr[i + 1]){
                        counter++;
                     break;}
            }

            if (counter==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
}
