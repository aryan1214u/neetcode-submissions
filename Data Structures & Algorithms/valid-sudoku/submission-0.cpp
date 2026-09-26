class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> rows(9) ;
        vector<set<char>> cols(9) ;
        vector<vector<set<char>>> boxes(3,vector<set<char>>(3)) ;                
        for(int i=0 ;i <9 ; i++){
            for(int j=0 ;j <9 ; j++){
                char elem = board[i][j];
                if(elem-'0' >=0 && elem-'0'<=9){
                    if(rows[i].contains(elem)) return false;
                    if(cols[j].contains(elem)) return false ;
                    rows[i].insert(elem);
                    cols[j].insert(elem);
                    if(boxes[i/3][j/3].contains(elem)) return false ;
                    boxes[i/3][j/3].insert(elem);
                }
                
            }   
        }
        return true ;  
    }
};
