// // /* Author G.M. Shahariyar Riyan */
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define op()                      \
// //     ios_base::sync_with_stdio(0); \
// //     cin.tie(0);
// // int main()
// // {
// //     op();
// //     string s;
// //     cin >> s;
// //     int a = 0, b = 0;
// //     for (int i = 0; i < s.size() - 1; i++)
// //     {
// //         if (a == 0 && s.substr(i, 2) == "AB")
// //         {
// //             a = 1;
// //             i++;
// //         }
// //         else if (a == 1 && s.substr(i, 2) == "BA")
// //         {
// //             b = 1;
// //             break;
// //         }
// //     }

// //     int c = 0, d = 0;
// //     for (int i = 0; i < s.size() - 1; i++)
// //     {
// //         if (c == 0 && s.substr(i, 2) == "BA")
// //         {
// //             c = 1;
// //             i++;
// //         }
// //         else if (c == 1 && s.substr(i, 2) == "AB")
// //         {
// //             d = 1;
// //             break;
// //         }
// //     }

// //     if ((a == 1 && b == 1) || (c = 1 && d == 1))
// //         cout << "YES";
// //     else
// //         cout << "NO";
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // #define int long long

// // struct Fenwick
// // {
// //     vector<int> bit;
// //     int n;
// //     Fenwick(int n) : n(n), bit(n + 1, 0) {}

// //     void update(int idx, int val)
// //     {
// //         for (; idx <= n; idx += idx & -idx)
// //             bit[idx] = max(bit[idx], val);
// //     }

// //     int query(int idx)
// //     {
// //         int res = 0;
// //         for (; idx > 0; idx -= idx & -idx)
// //             res = max(res, bit[idx]);
// //         return res;
// //     }
// // };

// // int32_t main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int n;
// //     cin >> n;
// //     vector<int> h(n), v(n);
// //     int maxH = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> h[i];
// //         maxH = max(maxH, h[i]);
// //     }
// //     for (int i = 0; i < n; i++)
// //         cin >> v[i];

// //     Fenwick fenwick(maxH);
// //     int ans = 0;

// //     for (int i = 0; i < n; i++)
// //     {
// //         int bestBefore = fenwick.query(h[i] - 1);
// //         int newVal = bestBefore + v[i];
// //         fenwick.update(h[i], newVal);
// //         ans = max(ans, newVal);
// //     }

// //     cout << ans << "\n";
// // }

// #include <bits/stdc++.h>
// using namespace std;

// struct Cell {
//     int x, y, dist;
// };

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<string> grid(n);

//     int startX = -1, startY = -1;
//     for (int i = 0; i < n; i++) {
//         cin >> grid[i];
//         for (int j = 0; j < m; j++) {
//             if (grid[i][j] == 'S') {
//                 startX = i;
//                 startY = j;
//             }
//         }
//     }

//     // Directions: up, down, left, right
//     int dx[] = {-1, 1, 0, 0};
//     int dy[] = {0, 0, -1, 1};

//     vector<vector<bool>> visited(n, vector<bool>(m, false));
//     queue<Cell> q;

//     // If start is already at border, answer is 0
//     if (startX == 0 || startX == n - 1 || startY == 0 || startY == m - 1) {
//         cout << 0 << "\n";
//         return 0;
//     }

//     q.push({startX, startY, 0});
//     visited[startX][startY] = true;

//     while (!q.empty()) {
//         auto [x, y, dist] = q.front();
//         q.pop();

//         for (int k = 0; k < 4; k++) {
//             int nx = x + dx[k];
//             int ny = y + dy[k];

//             if (nx >= 0 && nx < n && ny >= 0 && ny < m &&
//                 !visited[nx][ny] && grid[nx][ny] != '#') {

//                 if (nx == 0 || nx == n - 1 || ny == 0 || ny == m - 1) {
//                     cout << dist + 1 << "\n";
//                     return 0;
//                 }

//                 visited[nx][ny] = true;
//                 q.push({nx, ny, dist + 1});
//             }
//         }
//     }

//     cout << -1 << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
cout<<"3";
}

