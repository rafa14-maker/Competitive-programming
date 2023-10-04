#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    scanf("%d",&q);
    int flag=0;
    while(q--)
    {
        int n,p;
        scanf("%d %d",&n,&p);
        deque<int>dq;
        int counter=0;
        printf("Case %d:\n",++flag);
        while(p--)
        {
           // getchar();
           string str;
          // int k;
          cin>>str;
         //  scanf("%d",&k);
           if(str[4]=='L'||str[4]=='R')
           {
                int k;
                      scanf("%d",&k);
               if(counter==n)
               {
                   printf("The queue is full\n");
               }
               else if(counter<n)
               {
                   counter++;

                   if(str[4]=='L')
                   {
                       dq.push_front(k);
                          printf("Pushed in left: %d\n",k);
                   }
                   else
                   {
                       dq.push_back(k);
                          printf("Pushed in right: %d\n",k);
                   }
               }
           }
           else if(str[3]=='L'||str[3]=='R')
           {
               if(counter==0)
               {
                   printf("The queue is empty\n");
               }
               else
               {
                   counter--;
                    if(str[3]=='L')
                   {
                       int k = dq.front();
                       dq.pop_front();
                       printf("Popped from left: %d\n",k);
                   }
                   else
                   {
                       int k = dq.back();
                       dq.pop_back();
                       printf("Popped from right: %d\n",k);
                   }
               }
           }
        }
    }
}
