Author : neal
problem : https://codeforces.com/problemset/problem/1093/D

struct check_bipartite {
    int V;
    vector<vector<int>> adj;
    vector<int> depth;
    vector<bool> visited;

    check_bipartite(int v = 0) {
        if (v > 0)
            init(v);
    }

    void init(int v) {
        V = v;
        adj.assign(V, {});
        depth.assign(V, -1);
        visited.assign(V, false);
    }

    void add_edge(int a, int b) {
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    pair<int, int> dfs(int node, int parent) {
        assert(!visited[node]);
        depth[node] = parent < 0 ? 0 : depth[parent] + 1;
        visited[node] = true;
        pair<int, int> sizes = {0, 0};

        if (depth[node] % 2 == 0)
            sizes.first++;
        else
            sizes.second++;

        for (int neighbor : adj[node])
            if (neighbor != parent) {
                if (!visited[neighbor]) {
                    pair<int, int> p = dfs(neighbor, node);

                    if (p.first < 0)
                        return {-1, -1};

                    sizes.first += p.first;
                    sizes.second += p.second;
                }

                if (depth[node] % 2 == depth[neighbor] % 2)
                    return {-1, -1};
            }

        return sizes;
    }

    vector<pair<int, int>> solve() {
        vector<pair<int, int>> sizes;

        for (int i = 0; i < V; i++)
            if (!visited[i])
                sizes.push_back(dfs(i, -1));

        return sizes;
    }

    static bool is_valid(const vector<pair<int, int>> &sizes) {
        for (pair<int, int> p : sizes)
            if (p.first < 0)
                return false;

        return true;
    }
};
