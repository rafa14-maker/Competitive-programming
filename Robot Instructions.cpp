#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        char arr[n+5];
        int sum=0;

        for(int i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            if(s[0]=='L')
            {
                arr[i]='L';
                sum--;
            }
            else if(s[0]=='R')
            {
                arr[i]='R';
                sum++;
            }
            else
            {
                cin>>s;
                int a;
                cin>>a;
                if(arr[a]=='L')
                {
                    arr[i]='L';
                sum--;
                }
                else
                {
                    arr[i]='R';
                sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
}
