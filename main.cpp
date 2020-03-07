#include<iostream>
#include"Board.cpp"

int main(){
    Board game;
    const char players[2]={'x','o'};
    int playerTurn=0;
    while(1){
        const char player=players[playerTurn%2];
        std::cout<<"Player "<<player<<"'s turn. Enter X,Y:\n";
        int x, y;
        std::cin>>x>>y;
        game.playerMove(x,y,player);
        game.display();
        if(game.win(player)){
            std::cout<<"Player "<<player<<" wins!";
            break;
        }
        if(playerTurn==16){
            std::cout<<"Tie";
            break;
        }
        playerTurn++;
    }
    
    return 0;
}
