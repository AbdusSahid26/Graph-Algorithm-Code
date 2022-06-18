V<int> bfs(int s, const VV<int> &Edges){
    int n = Edges.sz;
    V<int> dist(n, Iinf);
    queue<int> que;
    dist[s] = 0;
    que.push(s);

    while(!que.empty()){
        int u = que.front();
        que.pop();
        for(auto v: Edges[u]){
            if(dist[v] > dist[u] + 1){
               dist[v] = dist[u] + 1;
               que.push(v);
            }
        }
    }
    return dist;
}

*************************************************************

auto bfs = [&](int s){
    V<int> dist(n, -1);
    queue<int> que;
    dist[s] = 0;
    que.push(s);

    while(!que.empty()){
        int u = que.front();
        que.pop();
        for(auto v: Edges[u]){
            if(dist[v] == -1){
               dist[v] = dist[u] + 1;
               que.push(v);
            }
        }
    }
    return dist;
};


***************************************************************************

//no of node between u and v

const int N = 2e5 + 10;
V<int> Edges[N];

int bfs(int u, int v, int n){
    V<bool> visited(n, false);
    V<int> dist(n, 0);
    queue<int> Q;
    dist[u] = 0;

    Q.push(u);
    visited[u] = true;
    while(!Q.empty()){
        int x = Q.front();
        Q.pop();
        for(auto c: Edges[x]){
            if(visited[c]) continue;
            dist[c] = dist[x] + 1;
            Q.push(c);
            visited[c] = true;
        }
    }
    return dist[v];
}


************************************************************

const int N = 1000;
vector<int> V[N];
bool mark[N];

void bfs(int s){   // s = starting node
	queue<int> q;
	q.push(s);
	mark[s] = true;

	while(!q.empty()){
		int p = q.front();    // p = level of node
		q.pop();
		for(int i=0; i<V[p].sz; i++){
			if(! mark[V[p][i]]){
				q.push(V[p][i]);
				mark[V[p][i] = true;
			}
		}
	}
}

*********************************************************
