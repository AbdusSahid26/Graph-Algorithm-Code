const int N = 5e5 + 10;
V<int> Edges[N];
int in[N];
int out[N];
int tim;

void dfs(int u, int par){
    in[u] = tim++;
    for(auto x: Edges[u])
        if(x ^ par) dfs(x, u);
    out[u] = tim - 1;
}

///   https://codeforces.com/contest/1006/submission/73472165
