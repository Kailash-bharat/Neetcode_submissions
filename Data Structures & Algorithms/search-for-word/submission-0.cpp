class Solution {
public:
    bool ispresent(vector<vector<char>>& board, vector<vector<bool>> &vis,
                         string &word, int x, int y, int pos=0){

        if(pos==word.size()) return true;
        int n=board.size();
        int m=board[0].size();
        if(x<0 || x>n-1 || y<0 || y>m-1){
            return false;
        }

        bool cur=false;
        if(!vis[x][y] && board[x][y]==word[pos]){
            vis[x][y]=true;
            cur|=ispresent(board, vis, word, x-1, y, pos+1);
            cur|=ispresent(board, vis, word, x+1, y, pos+1);
            cur|=ispresent(board, vis, word, x, y+1, pos+1);
            cur|=ispresent(board, vis, word, x, y-1, pos+1);
            vis[x][y]=false;
            return cur;
        }
        else{
            return false;
        }
        return cur;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        map<char,int> req;
        map<char,int> given;
        for(auto &ch:word) req[ch]++;
        for(auto &row:board){
            for(auto &ch:row) given[ch]++;
        }
        for(auto &[val,freq]:req){
            if(given[val]<freq) return false;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (ispresent(board, vis, word, i, j)) return true;
            }
        }
        return false;
    }
};
