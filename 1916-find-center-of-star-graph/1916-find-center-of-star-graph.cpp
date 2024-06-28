class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
    // From hints => 
       // 1> The center is the only node that has more than one edge.
       // 2> The center is also connected to all other nodes.
       // 3> Any two edges must have a common node, which is the center 

       // we have to take any 2 edge and find that common node 

       vector<int>f_edge=edges[0];   // {a,b}
       vector<int>s_edge=edges[1];  // {a,b}

       if(f_edge[0]==s_edge[0] || f_edge[0]==s_edge[1]){
          return f_edge[0];
       }
       return f_edge[1];


    }
};