class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> check(10);
        vector<int> temp(10,0);

        for(int i=0;i<9;i++){
            check=temp;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                check[board[i][j]-'0']++;
            }
            for(int j=0;j<=9;j++){
                if(check[j]>1) return false;
            }
        }

        for(int i=0;i<9;i++){
            check=temp;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.') continue;
                check[board[j][i]-'0']++;
            }
            for(int j=0;j<=9;j++){
                if(check[j]>1) return false;
            }
        }

        for(int sqrow=0;sqrow<9;sqrow+=3){
            for(int sqcol=0;sqcol<9;sqcol+=3){
                check=temp;

                for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        if(board[sqrow+i][sqcol+j]=='.') continue;
                        check[board[sqrow+i][sqcol+j]-'0']++;
                    }
                }

                for(int j=0;j<=9;j++){
                    if(check[j]>1) return false;
                }
            }
        }

        return true;
    }
};
