class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {

        int n = img.size();
        int m = img[0].size();

        vector<vector<int>> res(n, vector<int>(m, 0));
        vector<vector<int>> dir = {{-1, -1}, {-1, 0}, {-1, 1}, 
        {0, -1}, {0, 0}, {0, 1},
        {1, -1}, {1, 0}, {1, 1}};


        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                int curr = 0, cnt = 0;
                for(auto &vec : dir) {
                    int x = i + vec[0];
                    int y = j + vec[1];
                    if(x >= 0 && x < n && y >= 0 && y < m) {
                        curr += img[x][y];
                        cnt++;
                    }
                }
                res[i][j] = curr/cnt;
            }
        }
        
        return res;
    }
};