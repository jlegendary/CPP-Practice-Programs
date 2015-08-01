#include <iostream>

char block[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int checkIfWins();
void showGameBoard();


int main()
{
    int player=1;
    int iii;
    int choice;
    char spot;
    
    do
    {
        showGameBoard();
        player=(player%2)?1:2;
        
        std::cout << "Player " << player << ", choose a number: ";
        std::cin >> choice;
        
        mark=(player==1) ? 'X' : 'O';
        
        if (choice==1 && square[1]=='1')
            square[1]=spot;
        else if (choice==2 && square[2]=='2')
            square[2]=mark;
        else if (choice==3 && square[3]=='3')
            square[3]=mark;
        else if (choice==4 && square[4]=='4')
            square[4]=mark;
        else if (choice==5 && square[5]=='5')
            square[5]=mark;
        else if (choice==6 && square[6]=='6')
            square[6]=mark;
        else if (choice==7 && square[7]=='7')
            square[7]=mark;
        else if (choice==8 && square[8]=='8')
            square[8]=mark;
        else if (choice==9 && square[9]=='9')
            square[9]=mark;
        else
        {
            std::cout << "Choose something else";
            player--;
            cin.ignore();
            cin.get();
        }
        iii=checkIfWins();
        player++;
    }
    while (iii==-1);
    showGameBoard();
    
    if (iii==1)
        std::cout << "Player " << --player << "wins";
    else
        std::cout << "Tie";
    
    cin.ignore();
    cin.get();
    
    return 0;
}


// Return game status
// 1    game is over with results
// -1   game is in progress
// 0    game is over with no results
int checkIfWins()
{
    if (block[1] == block[2] && block[2] == block[3])
        return 1;
    
    else if (block[4]  == block[5] && block[5] == block[6])
        return 1;
    
    else if (block[7] == block[8] && block[8] == block[9])
        return 1;
    
    else if (block[1] == block[4] && block[4] == block[7])
        return 1;
    
    else if (block[2] == block[5] && block[5] == square[8])
        return 1;
    
    else if (block[3] == block[6] && block[6] == block[9])
        return 1;
    
    else if (block[1] == block[5] && block[5] == block[9])
        return 1;
    
    else if (block[3] == block[5] && block[5] == block[7])
        return 1;
    
    else if (block[1] != '1' && block[2] != '2'&& block[3] != '3' && block[4] != '4' && block[5] != '5' && block[6] != '6' && block[7] != '7' && block[8] != '8' && block[9] != '9')
        return 0;
    
    else
        return -1;
}


// Show tictactoe board
void showGameBoard()
{
    std::cout << "Tic Tac Toe";
    std::cout << "Player 1(X) VS. Player 2(O)\n\n\n" << std::endl;

    std::cout << "      |     |      " << std::endl;
    std::cout << " " << block[1] << " | " << block[2] << " | " << block[3] << std::endl;

    std::cout << " _____|_____|_____ " << std::endl;
    std::cout << "      |     |      " << std::endl;
    std::cout << "  " << block[4] << "  |  " << block[5] << "  |  " << block[6] << std::endl;
    
    std::cout << " _____|_____|_____ " << std::endl;
    std::cout << "      |     |      " << std::endl;
    std::cout << "  " << block[7] << "  |  " << block[8] << "  |  " << block[9] << endl;
    
    std::cout << "      |     |      " << std::endl;
  
}