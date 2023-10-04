#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[100];
    while(gets(arr))
    {
        int a=0,b=0;
        for(int i=0;i<strlen(arr);i++)
        {
            if(arr[i]>='a'&&arr[i]<='z')a+=arr[i]-'a'+1;
            else if(arr[i]>='A'&&arr[i]<='Z')a+=arr[i]-'A'+1;
        }
        while(a>=10)
        {
            int sum=0;
            while(a>0)
            {
                sum+=(a%10);
                a/=10;
            }
            a=sum;
        }
        gets(arr);
         for(int i=0;i<strlen(arr);i++)
        {
            if(arr[i]>='a'&&arr[i]<='z')b+=arr[i]-'a'+1;
            else if(arr[i]>='A'&&arr[i]<='Z')b+=arr[i]-'A'+1;
        }
        while(b>=10)
        {
            int sum=0;
            while(b>0)
            {
                sum+=(b%10);
                b/=10;
            }
            b=sum;
        }
        if(a>b)
        {
            swap(a,b);
        }
    //    cout<<a<<" "<<b<<endl;
        printf("%.2f %\n",(double)(a*100)/b);
    }
}
