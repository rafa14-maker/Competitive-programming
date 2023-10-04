#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int counter=1e9;
        string str;
        cin>>str;
        string frr=str;
        reverse(str.begin(),str.end());
        for(int i=1;i<str.size();i++)frr+=str[i];
        cout<<frr<<" ";
        int idx = str.size()-1;
        int a=0,b=frr.size()-1;
        while(idx<=b)
        {
            int flag=0;
            int l=a,r=b;
            while(l<r)
            {
                if(frr[l]!=frr[r])flag++;
                l++;
                r--;
            }
            if(flag==0)counter=min(counter,b-idx);
            b--;
        }
        printf("%d\n",counter);
    }
}
