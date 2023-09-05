// 题目描述：近期东六宿舍楼小偷很聪明，他们总是能寻找到偷窃后逃跑的路线，为了抓到他们，我们需要知道他们逃跑的路线，请你帮忙找出他们逃跑的路线（为简单化问题，我们保证最多只有一条逃跑路径，且起点为(0,0)，终点为(4,4)，不能斜线逃跑,若终点有人拦截，也为逃跑失败）
// 输入：一个5*5矩阵，用空格隔开，0表示可行走路径，1表示障碍，逃跑起点为左上，终点为右下
// 输出：逃跑线路，见输出示例(请注意x，y轴方向) 如果没有路可以逃,则输出 No Way!

// 样例输入
// 0 1 1 1 1
// 0 1 1 1 1
// 0 1 1 1 1
// 0 1 1 1 1
// 0 0 0 0 0

// 样例输出
//(0,0)
//(0,1)
//(0,2)
//(0,3)
//(0,4)
//(1,4)
//(2,4)
//(3,4)
//(4,4)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    vector<vector<int>> path;
    vector<vector<int>> map;
    vector<vector<int>> visited;
    int                 n    = 5;
    int                 m    = 5;
    int                 flag = 0;
    void                dfs(int x, int y) {
        if (x == n - 1 && y == m - 1) {
            flag = 1;
            return;
        }
        if (x < 0 || x >= n || y < 0 || y >= m || map[x][y] == 1 ||
            visited[x][y] == 1) {
            return;
        }
        visited[x][y] = 1;
        path.push_back({x, y});
        dfs(x + 1, y);
        dfs(x, y + 1);
        dfs(x - 1, y);
        dfs(x, y - 1);
        if (flag == 0) {
            path.pop_back();
        }
    }
    vector<vector<int>> findPath(vector<vector<int>>& map) {
        this->map = map;
        visited.resize(n, vector<int>(m, 0));
        dfs(0, 0);
        return path;
    }
};

int main() {
    vector<vector<int>> map(5, vector<int>(5, 0));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> map[i][j];
        }
    }
    Solution            s;
    vector<vector<int>> path = s.findPath(map);
    if (path.size() == 0) {
        cout << "No Way!" << endl;
    } else {
        // 请注意x，y轴方向
        for (int i = 0; i < path.size(); i++) {
            cout << "(" << path[i][1] << "," << path[i][0] << ")" << endl;
        }
    }
    return 0;
}
