#include<bits/stdc++.h>
using namespace std;

string rev(string arr)
{
    for(int i=0,j=arr.size()-1;i<j;i++,j--)
    {
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
    }
    return arr;
}

int main()
{
    long long  num,d;
    while(1==1)
    {
        scanf("%lld",&num);
        if(num==-1)
        {
            return 0;
        }
        scanf("%lld",&d);
         string arr,frr;
        int p=0;
        for(int i=10;i>d&&i>1;i--)
        {
            int sum=0,k=num,r,e=1;
            arr=' ';
            while(k>0)
            {
                r=(k%i);
                arr+=(r+'0');
                k/=i;
                e*=10;
            }

           int counter=0;
         for(int i=0;i<arr.size();i++)
          {
             if(arr[i]==(d+'0')) counter++;
          }
          if(counter>p)
          {
              p=counter;
              frr=arr;

          }

        }
        frr=rev(frr);
        if(p==0)cout<<num<<endl;
        else cout<<frr<<endl;

    }

}

