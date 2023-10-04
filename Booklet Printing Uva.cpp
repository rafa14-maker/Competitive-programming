#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;
        printf("Printing order for %d pages:\n",n);
        if(n==1)
        {
            printf("Sheet 1, front: Blank, 1\n");
            continue;
        }
        int k=n/4;
        if(n%4!=0)k++;
        k=4*k;
        int arr[k+5]={0};
        for(int i=1;i<=k;i++)if(i<=n)arr[i]=i;
        int counter=1;
        int page=k/4;
        int idx=1,idx2=k;
        for(int i=1;i<=page;i++)
        {
            if(counter%2==0)
            {
                printf("Sheet %d, front: ",i);

                 if(arr[idx2]!=0)printf("%d, ",arr[idx2]);
                else printf("Blank, ");
                idx2--;
                if(arr[idx]!=0)printf("%d\n",arr[idx]);
                else printf("Blank\n");idx++;

                printf("Sheet %d, back : ",i);

                 if(arr[idx]!=0)printf("%d, ",arr[idx]);
                else printf("Blank, ",arr[idx]);
                idx++;
                if(arr[idx2]!=0)printf("%d\n",arr[idx2]);
                else printf("Blank\n",arr[idx2]);
                idx2--;
            }
            else
            {
              printf("Sheet %d, front: ",i);

               if(arr[idx2]!=0)printf("%d, ",arr[idx2]);
                else printf("Blank, ");
                idx2--;
                if(arr[idx]!=0)printf("%d\n",arr[idx]);
                else printf("Blank\n");
                idx++;

                printf("Sheet %d, back : ",i);

                if(arr[idx]!=0)printf("%d, ",arr[idx]);
                else printf("Blank, ");
                idx++;
                if(arr[idx2]!=0)printf("%d\n",arr[idx2]);
                else printf("Blank\n");
                idx2--;
            }
            counter++;
        }
    }
}


