#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    const int N=1e5;
    int counter=0;
    vector<string>arr(N);
    for(int i=0;i<s.size();i++)
    {
        for(int j=1;j<=s.size();j++)
        {
            string frr=s.substr(i,j);
          //  cout<<frr<<endl;
            int flag=0;
            for(int k=0;k<arr.size();k++)
            {
                if(arr[k]==frr)
                {
                    flag++;
                    break;
                }
            }
            if(flag==0)
            {
                i+=j-1;
               counter++;
                arr.push_back(frr);
                break;
            }
        }
    }
cout<<counter<<endl;
}
