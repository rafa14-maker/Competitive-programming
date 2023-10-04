#include<bits/stdc++.h>
using namespace std;

float two(float p1,float p2,float t)
{
    float k = (1-t)*p1+t*p2;
    return k;
}

float three(float p1,float p2,float p3,float t)
{
    float k = (1-t)*(1-t)*p1 + 2*(1-t)*t*p2 + t*t*p3;
    return k;
}

float four(float p1,float p2,float p3,float p4,float t)
{
    float k = (1-t)*(1-t)*(1-t)*p1 + 3*(1-t)*(1-t)*t*p2+ 3*(1-t)*t*t*p3 + t*t*t*p4;
    return k;
}

void solve()
{
    int n,k;
    cout<<"control points :";
    cin>>n;
    cout<<"dimension :";
    cin>>k;

    int arr[n+2][k+2];

    cout<<"enter contol points values :"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)cin>>arr[i][j];
    }
   // cout<<"enter t values :"<<endl;
    int m;
    cout<<"number of t value :";
    cin>>m;
    cout<<"enter t values :"<<endl;
    for(int i=0;i<m;i++)
    {
        float t;
        cin>>t;

        for(int j=0;j<k;j++)
        {
            if(n==2)
            {
              cout<<  two(arr[0][j],arr[1][j],t)<<endl;
            }
            else if(n==3)
            {
              cout<<  three(arr[0][j],arr[1][j],arr[2][j],t)<<endl;
            }
            else if(n==4)
            {
            //    cout<<arr[0][j]<<" "<<arr[1][j]<<" "<<arr[2][j]<<" "<<arr[3][j]<<endl;
              cout<<  four(arr[0][j],arr[1][j],arr[2][j],arr[3][j],t)<<endl;
            }
        }

    }

}


int main()
{
    solve();
}


