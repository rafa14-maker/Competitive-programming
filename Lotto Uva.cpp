#include<bits/stdc++.h>
using namespace std;

char get(int k)
{
    if(k==0)return '0';if(k==1)return '1';if(k==2)return '2';if(k==3)return '3';
    if(k==4)return '4';if(k==5)return '5';if(k==6)return '6';if(k==7)return '7';
    if(k==8)return '8';if(k==9)return '9';if(k==10)return 'A';if(k==11)return 'B';
    if(k==12)return 'C';
}

int f(char k)
{
    if(k=='0')return 0;if(k=='1')return 1;if(k=='2')return 2;if(k=='3')return 3;
    if(k=='4')return 4;if(k=='5')return 5;if(k=='6')return 6;if(k=='7')return 7;
    if(k=='8')return 8;if(k=='9')return 9;if(k=='A')return 10;if(k=='B')return 11;
    if(k=='C')return 12;
}

void solve(int n)
{
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    set<string>st;

    for(int a=0;a<n;a++)
    {
        for(int b=a+1;b<n;b++)
        {
            for(int c=b+1;c<n;c++)
            {
                for(int d=c+1;d<n;d++)
                {
                    for(int e=d+1;e<n;e++)
                    {
                        for(int f=e+1;f<n;f++)
                        {
                            cout<<arr[a]<<" "<<arr[b]<<" "<<arr[c]<<" "<<arr[d]<<" "<<arr[e]<<" "<<arr[f]<<endl;
                        }
                    }
                }
            }
        }
    }
  //  cout<<endl;

}

int main()
{
    int counter=0;
    while(1)
    {

        int n;
        cin>>n;
        if(n==0)break;
        if(counter++)cout<<endl;
        solve(n);
    }
}
