#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q=0;
    while(1)
    {
        if(q)cout<<"\n";
        int n;
        cin>>n;
        if(n==0)break;
        int p=n;
      printf("Output for data set %d, %d bytes:\n",++q,n);
      int idx=0,pre=0,left=n,flag=0;
       while(1)
       {
           int a;
           cin>>a;
           idx++;
           flag++;
           pre+=a;
           left-=a;
           if(idx==5)
           {
               idx=0;
                if(pre==0)
            {
                printf("   Time remaining: stalled\n");
                idx=0;
                pre=0;
                continue;
            }
            int k=5*(left);
            int p;
            if(k%pre==0)p=k/pre;
            else p=k/pre,p++;
            pre=0;
            printf("   Time remaining: %d seconds\n",p);
           }
           if(left==0)
           {
           printf("Total time: %d seconds\n",flag);
            break;
           }
       }
    }
}
