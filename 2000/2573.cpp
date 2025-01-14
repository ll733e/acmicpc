#include <iostream>
#include <vector>
using namespace std;

static vector<int>   graph[9];
static bool          visited[9];

void dfs(int x)
{
	visited[x] = true;
	cout << x << " ";
	for (int i = 0; i < graph[x].size(); i++) // 인접한 노드 사이즈만큼 탐색
	{
		int y = graph[x][i];
		if (!visited[y]) // 방문하지 않았으면 즉 visited가 False일 때 not을 해주면 True가 되므로 아래 dfs 실행
            dfs(y); // 재귀적으로 방문
	}
}
int main() {

   graph[1].push_back(2);
   graph[1].push_back(3);
   graph[1].push_back(8);

   graph[2].push_back(1);
   graph[2].push_back(7);

   graph[3].push_back(1);
   graph[3].push_back(4);
   graph[3].push_back(5);

   graph[4].push_back(3);
   graph[4].push_back(5);

   graph[5].push_back(3);
   graph[5].push_back(4);

   graph[6].push_back(7);

   graph[7].push_back(2);
   graph[7].push_back(6);
   graph[7].push_back(8);

   graph[8].push_back(1);
   graph[8].push_back(7);

   dfs(1);
}