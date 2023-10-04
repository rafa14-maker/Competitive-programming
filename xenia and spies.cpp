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

    int n,m,s,f;

    cin>>n>>m>>s>>f;

    int frr[m+5],l[m+5],r[m+5];

    for(int i=1;i<=m;i++)
    {
      cin>>frr[i]>>l[i]>>r[i];
    }

    int k=1,j=0;

   //  for(int i=1;i<=m;i++)cout<<frr[i]<<" "<<l[i]<<" "<<r[i]<<" "<<endl;
 if(s>f){
    for(int i=s;i>f;)
    {
        j++;
       // cout<<i<<endl;
       // cout<<j<<endl;
        if(j==frr[k])
        {
           // cout<<1<<endl;
            if(i>=l[k]&&i<=r[k])
            {
                cout<<"X";
            }
            else if(i-1>=l[k]&&i-1<=r[k])
            {
                cout<<"X";
            }
            else
            {
                cout<<"L";
                i--;
            }
            k++;
        }
        else
        {
            cout<<"L";
            i--;
        }
    } }
    if(s<f){
    for(int i=s;i<f;)
    {
        j++;
       // cout<<i<<endl;
       // cout<<j<<endl;
        if(j==frr[k])
        {
           // cout<<1<<endl;
            if(i>=l[k]&&i<=r[k])
            {
                cout<<"X";
            }
            else if(i+1>=l[k]&&i+1<=r[k])
            {
                cout<<"X";
            }
            else
            {
                cout<<"R";
                i++;
            }
            k++;
        }
        else
        {
            cout<<"R";
            i++;
        }
    } }
}



