#include<bits/stdc++.h>
using namespace std;

int main()
{
    int people,budget,hotel,week;
    while(scanf("%d %d %d %d",&people,&budget,&hotel,&week)!=EOF)
    {
      int sum=budget+1;
        int flag=0;

        for(int i=0;i<hotel;i++)
        {
           int counter=0;
            int a;
            cin>>a;
            for(int j=0;j<week;j++)
            {
                int b;
                cin>>b;
                if(b>=people)counter++;
            }
            if(counter>0)sum=min(sum,a*people);
        }
        if(sum>budget)cout<<"stay home"<<endl;
        else cout<<sum<<endl;
    }
}
