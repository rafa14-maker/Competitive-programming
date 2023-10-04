#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
     scanf("%d",&q);
    while(q--)
    {
        int n,k;
       // cin>>n>>k;
        scanf("%d %d",&n,&k);
        //vector<pair<int,int> >v;
      //  vector<int>v;
        string s;
        cin>>s;
        // scanf("%s",&s);
      /*  for(int i=0;i<s.size();i++)
        {
           // cin>>arr[i];
          if(s[i]=='0')  v.push_back(i);
        }
        sort(v.begin(),v.end());*/
        int counter=k;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0'){
            if(counter==0)break;
            int l=i;
          //  int flag=0;
            for(int j=l;j>0;j--)
            {
                if(j-1>=0&&s[j-1]>s[j])
                {
                   // flag++;
                    swap(s[j],s[j-1]);
                    counter--;
                    if(counter==0)break;
                }
                else break;
            }

        }
        }
        cout<<s<<"\n";
      //  printf("%s\n",s);
       // for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<"\n";
    }
}
