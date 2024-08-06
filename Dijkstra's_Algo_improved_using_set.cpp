

int V= //no.of vertices;
int S= //source
set<pair<int,int>>Set;
umap<int,vector<pair<int,int>>adj;

vector<int>res(V,INT_MAX);
res[S]=0;

Set.insert({0,S});

while(!Set.empty()){
  auto &it = *Set.begin();
  int dist= it.first;
  int node=it.second;
  set.erase(it);

  for(auto elm: adj[node]){
    int d= elm.second;
    ind adjNode= elm.first;

    

    

    if(dist+d<res[adjNode])
    {
        // this removes unnecessary processes and reduces complexity
        if(Set.find({res[adjNode],adjNode}))
          Set.erase({res[adjNode],adjNode});
      
        res[adjNode]=d+dist;
        Set.insert({d+dist,adjNode});
    }

  }

}


