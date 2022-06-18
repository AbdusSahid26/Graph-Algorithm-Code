const int N = 2e5 + 10;
V<int> Edges[N];
int depth[N];
int siz[N];
V<int> vec;

function<void(int, int, int)> dfs = [&](int child, int papa, int dep){
    depth[child] = dep;
    siz[child] = 1;
    for(auto x: Edges[child]){
        if(x != papa){
            dfs(x, child, dep + 1);
            siz[child] += siz[x];
        }
    }
    vec.emplace_back(depth[child] - siz[child]);
};

********************************************************

const int N = 2e5 + 10;
V<int> Edges[N];
V<int> vec;
int d[N];
int siz[N];


void dfs(int child, int papa, int dep){
    d[child] = dep;
    siz[child] = 1;
    for(auto x: Edges[child]){
        if(x != papa){
            dfs(x, child, dep + 1);
            siz[child] += siz[x];
        }
    }
    /// vec.emplace_back(d[child] - siz[child]);
}



******************************************************

const int N = 2e5+7;
vector<int> adj[N];
int dep[N], sz[N];
vector<int> score;

void dfs(int u, int p) {
    sz[u] = 1;
    dep[u] = 1 + dep[p];
    for (int v: adj[u]) {
        if (v==p)   continue;
        dfs(v, u);
        sz[u] += sz[v];
    }
    score.push_back(dep[u]-sz[u]);
}
