

int V= //no.of vertices;
int S= //source
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
umap<int,vector<pair<int,int>>adj;

vector<int>res(V,INT_MAX);
res[S]=0;

pq.push({0,S});

while(!pq.empty()){
  int dist= pq.top().first;
  int node= pq.top().second;

  for(auto elm: adj[node]){
    int d= elm.second;
    ind adjNode= elm.first;

    if(dist+d<res[adjNode])
    {
        res[adjNode]=d+dist;
        pq.push({d+dist,adjNode});
    }

  }

}


