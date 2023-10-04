#include<bits/stdc++.h>
using namespace std;

char arr[]={'a','a','b','c','a','c','b'};

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int counter=0;
    if(a>=3&&b>=2&&c>=2)
    {
        int m=min(a/3,min(b/2,c/2));
        counter+=7*m;
        a-=(3*m);
        b-=(2*m);
        c-=(2*m);
    }
//   cout<<counter<<endl;
 //  cout<<a<<" "<<b<<" "<<c<<endl;
    int lop = 0;

    for(int i=0;i<7;i++)
    {
        int k=a,p=b,l=c;
        int flag=0,j=i;
      //  if(j>=7)j=0;
        while(k>=0&&p>=0&&l>=0)
        {
          //  flag++;
            if(arr[j]=='a')
            {
                if(k>0)k--;
                else break;
            }
            else  if(arr[j]=='b')
            {
                 if(p>0)p--;
                else break;
            }
            else  if(arr[j]=='c')
            {
                 if(l>0)l--;
                else break;
            }
         flag++;
            if(j==6)j=0;
            else j++;
        }
        lop=max(lop,flag);
    }
    cout<<counter+lop<<endl;
}
