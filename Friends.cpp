/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int arr[10];

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin>>n;

    while(n--)
    {
        int a,b;
        cin>>a>>b;
        arr[a]++;
        arr[b]++;
    }
    for(int i=1;i<=5;i++)
    {
        if(arr[i]!=2)
        {
            cout<<"WIN"<<endl;
            return 0;
        }
    }
    cout<<"FAIL"<<endl;

}


