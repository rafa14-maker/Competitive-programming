/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p,q,l,r;

    cin>>p>>q>>l>>r;

    int arr[p+2][2];
    int frr[q+2][2];

    for(int i=0;i<p;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }

    for(int i=0;i<q;i++)
    {
        cin>>frr[i][0]>>frr[i][1];
    }

    int counter=0;

    for(int i=l;i<=r;i++)
    {
        int found=0;
      for(int j=0;j<p;j++)
      {
          if(found>0)break;
          for(int k=0;k<q;k++)
          {
              if(arr[j][0]<=frr[k][1]+i&&arr[j][1]>=frr[k][0]+i)
              {
                  counter++;
                  found++;
                  break;
              }

          }
      }
    }

    cout<<counter<<endl;

}



