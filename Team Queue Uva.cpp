#include<bits/stdc++.h>
using namespace std;

int teamBelongto[1000001];
queue<int>teamQueue[1001];


int main()
{
    int T=1;
    int numteams;
    while(cin>>numteams,numteams)
    {
        for(int t=0;t<numteams;t++)
        {
            while(!teamQueue[t].empty())
            {
                teamQueue[t].pop();
            }
            int numElem;
            cin>>numElem;
            while(numElem--)
            {
                int elem;
                cin>>elem;
                teamBelongto[elem]=t;
            }
        }
        queue<int>ComQueue;
        cout<<"Scenario #"<<T++<<"\n";
        string command;
        while(cin>>command,command[0]!='S')
        {
            if(command[0]=='E')
            {
                int num;
                cin>>num;
                int team = teamBelongto[num];
                if(teamQueue[team].empty())
                {
                    ComQueue.push(team);
                }
                teamQueue[team].push(num);
            }
            else
            {
                int team=ComQueue.front();
                cout<<teamQueue[team].front()<<"\n";
                teamQueue[team].pop();
                 if (teamQueue[team].empty())
                    ComQueue.pop();
            }
        }
        cout<<"\n";
    }
}
