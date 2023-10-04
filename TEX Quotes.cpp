#include<bits/stdc++.h>
using namespace std;

int main()
{
    int counter=1;
    char arr[10000];
    while(gets(arr))
    {
       // string arr;
        int l=strlen(arr);
         for(int i=0;i<l;i++)
         {
             if(arr[i]=='"')
             {
                 if(counter%2==1)cout<<"``";
                 else cout<<"''";
                 counter++;
             }
             else cout<<arr[i];
         }
         cout<<endl;
    }
}
