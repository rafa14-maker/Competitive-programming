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

    vector<pair<int,int> >arr;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;

        arr.push_back(make_pair(b,a));
    }

    sort(arr.begin(),arr.end());

    for(int i=n-1;i>0;i--)
    {
        for(int j=i-1;j>=0;j--){
        if(arr[i].first==arr[j].first&&arr[i].second<arr[j].second)
        {
            swap(arr[i].first,arr[j].first);
                        swap(arr[i].second,arr[j].second);
        }
        }
    }

 int carry=0,point=0;

 for(int i=n-1;i>=0;i--)
 {
     if(point==0)
     {
         point+=arr[i].second;
         carry+=arr[i].first;
     }
     else if(carry>0)
     {
         carry=carry-1+arr[i].first;
         point+=arr[i].second;
     }
     else if(carry<=0)
     {
         break;
     }
 }

 cout<<point<<endl;

}



