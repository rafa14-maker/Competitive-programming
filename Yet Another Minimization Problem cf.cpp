#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 4e6+5;

int frr[105];
int arr[105];
int n;

int  bigmod(int f,int b )
{
    if(b==0)
    {
        return 1;
    }
    int x=bigmod(f,b/2);
    x=(x*x);
    if(b%2==1)x=(x*f);

    return x;
}


void solve()
{
  //  cout<<"yes"<<endl;
  cin>>n;

  for(int i=0;i<n;i++)cin>>arr[i];
  for(int i=0;i<n;i++)cin>>frr[i];

    vector<int>v1,v2,v3,v4;

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
         /*   if(arr[i]>frr[i])
            {
                v1.push_back(arr[i]);
                v2.push_back(frr[i]);
            }
            else */
            {
                v2.push_back(frr[i]);
                v1.push_back(arr[i]);
            }
        }
        else
        {
            /* if(arr[i]<frr[i])
            {
                v2.push_back(arr[i]);
                v1.push_back(frr[i]);
            } */
          //  else
            {
                v1.push_back(frr[i]);
                v2.push_back(arr[i]);
            }
        }
    }

     for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
          /*  if(arr[i]<frr[i])
            {
                v4.push_back(arr[i]);
                v3.push_back(frr[i]);
            } */
         //   else
            {
                v3.push_back(frr[i]);
                v4.push_back(arr[i]);
            }
        }
        else
        {
          /*   if(arr[i]>frr[i])
            {
                v3.push_back(arr[i]);
                v4.push_back(frr[i]);
            } */
          //  else
            {
                v4.push_back(frr[i]);
                v3.push_back(arr[i]);
            }
        }
    }


    int sum =0,mx =0;

    for(int i=v1.size()-1;i>=0;i--)
    {
       mx += bigmod(v1[i],n-(n-i)+1);
    }

     for(int i=v2.size()-1;i>=0;i--)
    {
        sum += bigmod(v2[i],n-(n-i)+1);
    }

     for(int i=v3.size()-1;i>=0;i--)
    {
         mx += bigmod(v3[i],n-(n-i)+1);
    }

     for(int i=v4.size()-1;i>=0;i--)
    {
        sum += bigmod(v4[i],n-(n-i)+1);
    }

    cout << min(sum,mx)<< endl;



}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}
