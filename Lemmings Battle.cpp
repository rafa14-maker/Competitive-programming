#include<bits/stdc++.h>
using namespace std;



int main()
{
    int q;
    cin>>q;
    while(q--)
    {
     multiset<int>left;
     multiset<int>right;
      multiset<int>::iterator it,fit;
      vector<int>le;
        vector<int>ri;

        int n,ls,rs;
        cin>>n>>ls>>rs;

        for(int i=0;i<ls;i++)
        {
            int a;
            cin>>a;
            left.insert(a);
        }
        for(int j=0;j<rs;j++)
        {
            int a;
            cin>>a;
            right.insert(a);
        }

     //  for(it=left.begin();it!=left.end();it++)cout<<*it<<" ";cout<<endl;
       //    for(it=right.begin();it!=right.end();it++)cout<<*it<<" ";cout<<endl;

      while ( left.size() > 0 && right.size() > 0)
      {     le.clear() ; ri.clear() ;

             for ( int i = 0 ; i < n ; i++)
              {
                    it = left.end() ; it -- ;
                    fit = right.end() ; fit-- ;
                    if ( *it > *fit)
                    {
                          left.erase(it); right.erase(fit);
                          le.push_back ( *it - *fit);
                    }
                    else if ( *it < *fit)
                    {
                          left.erase(it); right.erase(fit);
                          ri.push_back ( *fit - *it);
                    }
                    else
                        {
                            left.erase(it); right.erase(fit);
                        }


                    if (left.size() == 0 || right.size() == 0)
                    break ;
              }

              for ( int z = 0 ; z < le.size() ; z++)
                        left.insert( le[z] );
              for ( int z = 0 ; z < ri.size() ; z++)
                     right.insert ( ri[z] );

      }

        if(left.size()>0)
        {
            cout<<"green wins"<<endl;
            while(left.size()>0)
            {
                it=left.end();
                it--;
                cout<<*it<<endl;
                left.erase(it);
            }

        }
        else if(right.size()>0)
        {
            cout<<"blue wins"<<endl;
           while(right.size()>0)
            {
                it=right.end();
                it--;
                cout<<*it<<endl;
                right.erase(it);
            }
        }
        else
        {
            cout<<"green and blue died"<<endl;
        }
        if(q)cout<<endl;
    }
}
