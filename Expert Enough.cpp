#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        vector<string>vs;
        int n;
        scanf("%d",&n);
        int l[n+5],r[n+5];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s>>l[i]>>r[i];
            vs.push_back(s);
        }

        int m;
        scanf("%d",&m);
        while(m--)
        {
            int k;
              int idx=-1;
        int counter=0;
              scanf("%d",&k);
              for(int i=0;i<n;i++)
              {
                  if(l[i]<=k&&k<=r[i])
                  {
                      if(idx!=-1)counter++;
                      idx=i;
                  }
              }
              if(idx==-1||counter>0)printf("UNDETERMINED\n");
              else cout<<vs[idx]<<"\n";
        }
        if(q)cout<<"\n";
    }
}
