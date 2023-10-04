#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr[100],frr;
     int i=0,j=0,n,p;

     cin>>n;



    for(p=1;p<=n;p++)
    {
        printf("Case %d:\n",p);
        cin>>frr;
        if(frr[0]=='B')
        {
            j--;
            if(j==0)
            {
                cout<<"http://www.lightoj.com/"<<endl;
            }
            else if(j<0)
            {
                cout<<"Ignore"<<endl;
                j++;
            }
            else
            {
                cout<<arr[j]<<endl;
            }
        }
        else if(frr[0]=='F')
        {
            j++;
            if(j>i)
            {
                cout<<"Ignore"<<endl;
                j--;
            }

            else
            {
                cout<<arr[j]<<endl;
            }
        }
        else if(frr[0]=='V')
        {
            i++;
            j++;
            cin>>arr[i];
        }
        else if(frr[0]=='Q')
        {
            break;
        }

    }

}
