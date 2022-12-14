#include <iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_manager.h"
#include<string>

TicTacToeManager::~TicTacToeManager(){data.save_games(games);}
TicTacToeManager::TicTacToeManager(TicTacToeData &data1)
{
    data=data1;
    games=data.get_games();
    for (int i=0; i<games.size();i++)
    {
        auto c=games[i]->get_winner();
        if (c=="X")
            x_win+=1;
        else if (c=="O")
            o_win+=1;
        else if (c=="C")
            ties+=1;
        
    }
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> &b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
    
}
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for (int i = 0; i <manager.games.size();i++)
        {
            out<<"\n"<<(*manager.games[i])<<"\n";
        } 
    
    return out;
}
void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
    o=o_win;
    w=x_win;
    t=ties;
}
void TicTacToeManager::update_winner_count(string winner)
{
    if (winner=="X")
        x_win+=1;
    else if (winner=="O")
        o_win+=1;
    else
        ties+=1;
}