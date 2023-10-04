#include<bits/stdc++.h>
using namespace std;

vector<char>arr;

void f()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        arr.push_back(s[i]);
    }
}

int main()
{
    while(1)
    {
        arr.clear();
        f();
        if(arr[0]=='G'&&arr[1]=='a'&&arr[2]=='m'&&arr[3]=='e'&&arr[5]=='O'&&arr[6]=='v'&&arr[7]=='e'&&arr[8]=='r'){
           // cout<<endl;
            break;
        }


         long long sum=0;
         int idx=0;

         for(int i=0;;i+=2)
         {
            //cout<<i<<" "<<sum<<endl;
             if(arr[i]>='0'&&arr[i]<='9')
             {
                 if(arr[i+2]=='/')
                 {
                    if(arr[i+4]=='X')sum+=20;
                    else sum+=10+(int)(arr[i+4]-'0');
                 }
                 else
                 {
                     int p=(arr[i]-'0');
                     sum+=p;
                     p=(arr[i+2]-'0');
                     sum+=p;
                 }
               i+=2;
             }
             else if(arr[i]=='X')
             {

                if(arr[i+2]=='X'&&arr[i+4]=='X')
                {
                    sum+=30;
                }
                else if(arr[i+2]=='X'&&arr[i+4]>='0'&&arr[i+4]<='9')
                {
                    sum+=20;
                    int p=(arr[i+4]-'0');
                     sum+=p;
                }
                else    if(arr[i+4]>='0'&&arr[i+4]<='9')
                    {
                  int p=(arr[i+2]-'0');
                     sum+=p;
                     p=(arr[i+4]-'0');

                     sum+=p;
                     sum+=10;
                     }
                     else sum+=20;
             }
          idx++;
          if(idx==10)break;
         }
         cout<<sum<<endl;
    }
}
