#include<bits/stdc++.h>
using namespace std;

int main()
{
    int pr=0;
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)break;

        int frrval[10]={0};
        int frr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>frr[i];
            frrval[frr[i]]++;
        }
        printf("Game %d:\n",++pr);
       // pr++;

        while(1)
        {
            int arr[n+5];
            int arrval[10]={0};
            int krrval[10]={0};
            for(int i=0;i<10;i++)krrval[i]=frrval[i];
            bool cr=true;

            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
                if(arr[i]!=0)cr=false;
                arrval[arr[i]]++;
            }
             if(cr)break;
         //    if(arrval[0]==n)break;

            int counter=0,flag=0;
            for(int i=0;i<n;i++)
            {
                if(frr[i]==arr[i])
                {
                    counter++;
                    arrval[arr[i]]--;
                    krrval[frr[i]]--;
                }
            }
            for(int i=0;i<10;i++)
            {
                flag+=max(0,min(krrval[i],arrval[i]));
            }
          cout << "    ("<< counter<< ","<< flag<< ")"<< endl;
        }
    }
}
