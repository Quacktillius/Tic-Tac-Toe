class Board{
    char board[4][4];
    public:
        Board();
        void playerMove(int row, int column, char value);
        bool win(char check);
        void display();
};

Board::Board(){
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            board[i][j]=' ';
}

void Board::playerMove(int r, int c, char v){
    board[r][c]=v;
}

bool Board::win(char check){
    int c3=0, c4=0;
    for(int i=0; i<4; i++){
        if(board[i][i]==check)
            c3+=1;
        if(board[i][3-i]==check)
            c4+=1;
        int c1=0, c2=0;
        for(int j=0; j<4; j++){
            if(board[i][j]==check)
                c1+=1;
            if(board[j][i]==check)
                c2+=1;
        }
        if(c1==4 || c2==4 || c3==4 || c4==4)
            return true;
    }
    return false;
}

void Board::display(){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            std::cout<<board[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
