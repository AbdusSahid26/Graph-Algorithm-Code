

/// Another Implementation : https://codeforces.com/contest/1328/submission/76466630
///  see this tutorial for this problem to understand LCA.

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int Par[N], Lev[N];
int Table[N][22];
vector<int> Edges[N];

void dfs(int Child, int Papa, int Depth){
    Par[Child] = Papa;
    Lev[Child] = Depth;
    for(auto x: Edges[Child]){
        if(x != Papa)
            dfs(x, Child, Depth + 1);
    }
}

void Process(int n){
    memset(Table, -1, sizeof Table);

    /// Time : O(n log n)
    for(int i=1; i<=n ;i++)
        Table[i][0] = Par[i];

    for(int j=1; (1<<j) <= n; j++){
        for(int i=1; i<=n; i++){
            if(Table[i][j-1] != -1){
                Table[i][j] = Table[Table[i][j-1]][j-1];
            }
        }
    }
}

int LCA(int p, int q){
    /// If p is situated on a higher level than q then we swap them
    if(Lev[p] < Lev[q]) swap(p, q);
    int log;
    /// We compute the value of [Log[Lev[p)]
    for(log=1; (1<<log) <= Lev[p]; log++);
    log--;
    /// Time : O(log n)
    for(int i=log; i>=0; i--){
        if(Lev[p] - (1 << i) >= Lev[q]){
            p = Table[p][i];
        }
    }
    if(p == q) return p;
    for(int i=log; i>=0; i--){
        if(Table[p][i] != -1 and Table[p][i] != Table[q][i]){
            p = Table[p][i];
            q = Table[q][i];
        }
    }
    return Par[p];
}

int Dist(int x, int y){
    if(x == y) return 0;
    int Ances = LCA(x, y);
    return Lev[x] + Lev[y] - 2*Lev[Ances];
}

/*

https://codeforces.com/contest/1304/problem/E
my submission
*/


int main(){

    dfs(1, 0, 1);
    Process(n);
    int q;
    cin >> q;
    while(q--){

    }

}
