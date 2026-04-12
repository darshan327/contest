
// Leetcodenumber : 3898. Find the Degree of Each Vertex
   
//explaination :the  number of edges connected to each vertex in the graph.
// Time complexity : O(n^2) where n is the number of vertices in the graph.
// space complexity : O(n) we are storing the degree of each vertices in a vector of size n.


class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> res;
        for(int i=0; i<matrix.size(); i++){
            int count=0;
            for(int j=0; j<matrix[0].size(); j++){
                if(i!=j && matrix[i][j]==1){
                    count++;
                }
            }
            res.push_back(count);
        }
        return res;
    }
};