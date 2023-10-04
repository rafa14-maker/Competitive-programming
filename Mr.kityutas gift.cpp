#include<bits/stdc++.h>
using namespace std;

int main()
{
    int counter=0;
    string arr;
    cin>>arr;

    for(int i=0;i<arr.size();i++)
    {
        for(char c='a';c<='z';c++)
        {
            string frr;
            for(int j=0;j<arr.size();j++)
            {
                if(j==i)
                {
                   frr+=c;
                   frr+=arr[j];
                }
                else
                {
                    frr+=arr[j];
                }
            }
            int flag=0;
           for(int k=0,j=frr.size()-1;k<j;k++,j--)
            {
                if(frr[k]!=frr[j])
                {
                    flag++;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<frr<<endl;
                return 0;
            }
           // cout<<frr<<endl;
        }
           if(counter==0){
           for(char c='a';c<='z';c++){
                    string frr;
            for(int j=0;j<arr.size();j++)
            {
                    frr+=arr[j];
            }
            frr+=c;
            int flag=0;
            for(int k=0,j=frr.size()-1;k<j;k++,j--)
            {
                if(frr[k]!=frr[j])
                {
                    flag++;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<frr<<endl;
                return 0;
            }
          //  cout<<frr<<endl;}
            counter++;
           }

    }
    // cout<<"NA"<<endl;
}
cout<<"NA"<<endl;
}
