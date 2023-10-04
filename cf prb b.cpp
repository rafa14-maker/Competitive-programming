#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,m,counter=0,j;

    cin>>m;

    int krr[m],trr[m];

    for(i=0;i<m;i++)
    {
        cin>>krr[i]>>trr[i];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(krr[i]==trr[j])
            {
                counter++;
            }
        }
    }
    cout<<counter<<endl;
}
