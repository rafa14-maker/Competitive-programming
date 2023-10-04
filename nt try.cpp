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
            if(a>b)
            {
                swap(a,b);
            }
            for (int i=a;i<b;i++){
                if (arr[i] != arr[i + 1]){
                        counter++;
                     }
            }

            if (counter==0)
                printf("Yes\n");
            else{
                printf("No\n");}
        }
    }
}
