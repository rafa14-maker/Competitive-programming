#include <map>
#include <vector>
#include <iostream>
#include <cstdio>
using namespace std;

map<string, int> Map;
string numToStr[30];

vector<int> edge[30];
int dfn[30], low[30];
vector<int> Stack;
bool inStack[30];

int dfs_clock;
int scc_cnt;
vector<int> scc_ans[30];

void Initial(int N);
void Tarjan(int cur);

int main()
{
    ios::sync_with_stdio(false);
    int N, M, Case = 1;
    while (cin >> N >> M && (N || M)) {
        Initial(N);

        // Input
        string name1, name2;
        for (int i = 0, index = 1; i < M; ++i) {
            cin >> name1 >> name2;
            if (!Map[name1]) {Map[name1] = index; numToStr[index++] = name1;}
            if (!Map[name2]) {Map[name2] = index; numToStr[index++] = name2;}
            edge[Map[name1]].push_back(Map[name2]);
        }

        // SCC
        for (int i = 1; i <= N; ++i)    //記得1~N都要確認過
            if (!dfn[i]) Tarjan(i);

        // Output
        if (Case != 1) cout << endl;
        cout << "Calling circles for data set " << Case++ << ":" << endl;
        for (int i = 0; i < scc_cnt; ++i) {
            for (int j = 0; j < scc_ans[i].size() - 1; ++j)
                cout << numToStr[scc_ans[i][j]] << ", ";
            cout << numToStr[scc_ans[i].back()] << endl;
        }
    }
}
void Initial(int N)
{
    for (int i = 0; i <= N; ++i) {
        edge[i].clear();
        scc_ans[i].clear();
        dfn[i] = low[i] = inStack[i] = 0;
    }
    Map.clear();
    Stack.clear();
    dfs_clock = scc_cnt = 0;
}
void Tarjan(int cur)
{
    dfn[cur] = low[cur] = ++dfs_clock;
    Stack.push_back(cur);
    inStack[cur] = true;

    for (int nxt : edge[cur]) {
        if (!dfn[nxt]) {
            Tarjan(nxt);
            low[cur] = min(low[cur], low[nxt]);
        }
        else if (inStack[nxt])
            low[cur] = min(low[cur], dfn[nxt]);
    }

    if (dfn[cur] == low[cur]) {
        int nxt;
        do {
            nxt = Stack.back();
            scc_ans[scc_cnt].push_back(nxt);
            Stack.pop_back();
            inStack[nxt] = false;
        } while (cur != nxt);
        ++scc_cnt;
    }
}
