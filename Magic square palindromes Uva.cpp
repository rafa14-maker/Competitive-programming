#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int c=0;
    getchar();
    while(q--)
    {
        c++;
        char arr[10000];
        gets(arr);
        string s;
        for(int i=0;i<strlen(arr);i++)
        {
            if(arr[i]>='a'&&arr[i]<='z')s+=arr[i];
        }
        bool flag=true;
        for(int a=0,b=s.size()-1;a<=b;a++,b--)if(s[a]!=s[b])flag=false;
         printf("Case #%d:\n",c);
        if(!flag)cout<<"No magic :("<<endl;
        else
        {

            int a=s.size();
             int b=sqrt(a);
             if(b*b==a)
             {
                 cout<<b<<endl;
             }
             else
             {
                cout<<"No magic :("<<endl;
             }
        }
    }
}
