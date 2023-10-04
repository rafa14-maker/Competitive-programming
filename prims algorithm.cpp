#include <algorithm>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

vector<vii> AdjList;
vi taken;
priority_queue<ii> pq;

void process(int vtx) {
  taken[vtx] = 1;
  for (int j = 0; j < (int)AdjList[vtx].size(); j++) {
    ii v = AdjList[vtx][j];
    if (!taken[v.first]) pq.push(ii(-v.second, -v.first));
} }

int main() {
  int V, E, u, v, w;

  scanf("%d %d", &V, &E);

  AdjList.assign(V, vii());

  for (int i = 0; i < E; i++) {
    scanf("%d %d %d", &u, &v, &w);
    AdjList[u].push_back(ii(v, w));
    AdjList[v].push_back(ii(u, w));
  }

  taken.assign(V, 0);
  process(0);
   int  mst_cost = 0;
  while (!pq.empty()) {
    ii front = pq.top(); pq.pop();
    u = -front.second, w = -front.first;
    if (!taken[u])
      mst_cost += w, process(u);
  }
  printf("MST cost = %d (Prim's)\n", mst_cost);

  return 0;
}
