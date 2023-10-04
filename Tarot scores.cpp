#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int p=0;
    string pq="";
    while(q--)
    {
        int counter=0;
        int sum=0;
        int flag=0;
        int k;
        cin>>k;
        flag=k;

        while(k--)
        {
            string a,b,c;
            cin>>a;
            if(a=="fool")
            {
                counter++;
                sum+=4;
            }
            else
            {
                cin>>b>>c;
                if((a=="one"&&c=="trumps")||(a=="twenty-one"&&c=="trumps"))
                {
                    counter++;
                sum+=4;
                }
                else if(a=="king")
                {
                   sum+=4;
                }
                else if(a=="queen")
                {
                    sum+=3;
                }
                else if(a=="jack")
                {
                    sum+=1;
                }
                else if(a=="knight")
                {
                    sum+=2;
                }
                else sum+=0;
            }
        }
        sum+=(flag/2);
        int need=0;
        if(counter==0)need=56;
        else if(counter==1)need=51;
        else if(counter==2)need=41;
        else if(counter==3)need=36;
      //  cout<<sum<<" "<<need<<" "<<counter<<endl;
      cout<<pq;
       printf("Hand #%d\n",++p);
       pq="\n";
        if(sum>=need)
        {
            printf("Game won by %d point(s).\n",sum-need);
        }
        else
        {
            printf("Game lost by %d point(s).\n",need-sum);
        }
    }
}
