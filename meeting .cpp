#include<bits/stdc++.h>
using namespace std;

set<pair<int,int> >p;
const int N=1e3+5;
int arr[N][3];

int main()
{
    int x1,y1,x2,y2,res=0,n;
    cin>>x1>>y1>>x2>>y2;

    for(int i=min(x1,x2);i<=max(x1,x2);i++)
    {
        p.insert({i,y1});
        p.insert({i,y2});
    }

     for(int i=min(y1,y2);i<=max(y1,y2);i++)
    {
        p.insert({x1,i});
        p.insert({x2,i});
    }

    cin>>n;

    for(int i=0;i<n;i++)cin>>arr[i][0]>>arr[i][1]>>arr[i][2];

    for(__typeof(p.begin()) it = p.begin(); it != p.end(); ++it){
    {
        bool flag=0;
        int a=it->first,b=it->second;
        for(int i=0;i<n;i++)
        {
            if(sqrt(((arr[i][0]-a)*(arr[i][0]-a))+((arr[i][1]-b)*(arr[i][1]-b)))<=arr[i][2]){
                flag=1;
            break;
            }
        }
        if(!flag)res++;
    }

}

  cout<<res<<endl;
}
