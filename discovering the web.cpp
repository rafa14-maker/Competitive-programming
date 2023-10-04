#include<bits/stdc++.h>
using namespace std;

int main()
{
    string frr;
     int i=0,j=0,n,p;

     cin>>n;



    for(p=1;p<=n;p++){
     printf("Case %d:\n",p);
        while(1==1)
    {

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
            int r=j+1;
            if(r>i)
            {
                cout<<"Ignore"<<endl;

            }
            else
            {
                cout<<arr[r]<<endl;
                j=r;
            }
        }
        else if(frr[0]=='V')
        {
            j++;
            i=j;
            cin>>arr[j];
        }
        else if(frr[0]=='Q')
        {
            break;
        }

    }

}
}
