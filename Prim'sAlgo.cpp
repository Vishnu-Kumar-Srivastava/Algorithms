//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
         cout << "Adjacency List:" << endl;
        for (int j = 0; j < V; j++) {
            cout << j << ": ";
            for (auto &edge : adj[j]) {
                cout << "(" << edge[0] << ", " << edge[1] << ") ";
            }
            cout << endl;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        vector<bool>Visited(V,false);
        int sum=0;
        while(!pq.empty()){
            auto p= pq.top();
            pq.pop();
            int wt= p.first;
            int node= p.second;
            if(Visited[node]==true)
            continue;
            else{
                Visited[node]=true;
                sum+=wt;
            }
            for(auto & tmp: adj[node]){
                int neighbor=tmp[0];
                int n_wt= tmp[1];
               if(Visited[neighbor]!=true){
                   pq.push({n_wt,neighbor});
               }
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends
