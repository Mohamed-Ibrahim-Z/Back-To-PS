class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        v.push_back(vector<int>(1,1));
        for(int i = 2; i <= numRows; i++){
            vector<int> currRowVector;
            currRowVector.push_back(1);
            for(int j = 0; j<i-2;j++)
            {
                currRowVector.push_back(v[i-2][j]+ v[i-2][j+1]);
            }
            currRowVector.push_back(1);
            v.push_back(currRowVector);
        }
        return v;
    }
};