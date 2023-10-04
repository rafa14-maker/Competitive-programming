#include<bits/stdc++.h>
using namespace std;

int arr[100][100];
int frr[100][100];

int main()
{
    int n,d;
    cin>>n>>d;
    int r=d+1;
    int c=n-d+1;


    for(int i=0;i<r;i++)
    {
        if(i==0)arr[i][0]=0,frr[i][0]=d;
        else arr[i][0]=arr[i-1][0]+1,frr[i][0]=frr[i-1][0]-1;
    }

    for(int i=0;i<r;i++)
    {
        for(int j=1;j<c;j++)
        {
            arr[i][j]=arr[i][j-1]+1;
            frr[i][j]=frr[i][j-1]+1;
        }
    }

   /* for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<frr[i][j]<<" ";
        }
        cout<<endl;
    }*/

    int q;
    cin>>q;

    while(q--)
    {
        int a,b;
        cin>>a>>b;
        int counter=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(arr[i][j]==a&&frr[i][j]==b)
                {
                    counter++;
                }
            }
        }

        if(counter==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }


}
