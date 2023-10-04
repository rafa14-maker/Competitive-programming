#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)break;
       string s;
        getchar();
        int i,j,shift=9999999;
        int a[100],left,right;
        for(int i=0;i<n;i++)
        {
         getline(cin,s);
            j=0;
           while(s[j]=='X')j++;
           //cout<<1<<endl;
            left=j;
             while(s[j]!='X')j++;
            right=j;
            a[i]=right-left;
            if(a[i]<shift)
            {
                shift=a[i];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)sum+=a[i]-shift;
        printf("%d\n",sum);
    }
    return 0;
}
