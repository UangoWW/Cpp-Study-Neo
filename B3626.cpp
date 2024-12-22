#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int pos;
    int steps;
};
const int MAXN=1e8+2;
bool vis[MAXN];
int BFS(int n) {
    queue<Node> Q;
    Q.push({1, 0});
    vis[0]=false;

    while (!Q.empty()) {
        Node node = Q.front();
        Q.pop();

        int pos = node.pos;
        int steps = node.steps;

        if (pos == n) {
            return steps;
        }

        if (pos - 1 >= 1 && !vis[pos - 1]) {
            Q.push({pos - 1, steps + 1});
            vis[pos - 1] = true;
        }
        if (pos + 1 <= n && !vis[pos + 1]) {
            Q.push({pos + 1, steps + 1});
            vis[pos + 1] = true;
        }
        if (2 * pos <= n && !vis[2 * pos]) {
            Q.push({2 * pos, steps + 1});
            vis[2 * pos] = true;
        }
    }
    
}

int main() {
    int n;
    cin >> n;

    int cnt = BFS(n);
    cout << cnt << endl;

    return 0;
}
