#include <iostream>
using namespace std;

void displayBoard(char board[]){
    cout << "\n";
    cout << " " << board[0] << " | "<< board[1] << " | "<< board[2] << endl;

    cout << "---|---|---" << endl;

    cout << " " << board[3] << " | "<< board[4] << " | "<< board[5] << endl;

    cout << "---|---|---" << endl;

    cout << " " << board[6] << " | "<< board[7] << " | "<< board[8] << endl;
    cout << "\n";
}

bool checkWin(char board[], char player){
    if (board[0] == player && board[1] == player && board[2] == player) return true;
    if (board[3] == player && board[4] == player && board[5] == player) return true;
    if (board[6] == player && board[7] == player && board[8] == player) return true;

    if (board[0] == player && board[3] == player && board[6] == player) return true;
    if (board[1] == player && board[4] == player && board[7] == player) return true;
    if (board[2] == player && board[5] == player && board[8] == player) return true;

    if (board[0] == player && board[4] == player && board[8] == player) return true;

    if (board[2] == player && board[4] == player && board[6] == player) return true;

    return false;
}

bool checkDraw(char board[]){

    for (int i = 0; i < 9; i++){
        if (board[i] != 'X' && board[i] != 'O') return false;
    }

    return true;
}

int main()
{

    char board[9] = {
        '1', '2', '3',
        '4', '5', '6',
        '7', '8', '9'
    };

    char currentPlayer = 'X';

    while (true){
        displayBoard(board);
        int choice;
        cout << "Player " << currentPlayer << ", choose position: ";
        cin >> choice;

        if (choice < 1 || choice > 9){
            cout << "Invalid position! Choose 1-9.\n";
            continue;
        }
        if (board[choice - 1] == 'X' || board[choice - 1] == 'O'){
            cout << "Position already taken!\n";
            continue;
        }

        board[choice - 1] = currentPlayer;

        if (checkWin(board, currentPlayer)){
            displayBoard(board);
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        if (checkDraw(board)){
            displayBoard(board);
            cout << "Game Draw! 🤝\n";
            break;
        }

        if (currentPlayer == 'X')   currentPlayer = 'O';
        else    currentPlayer = 'X';
    }

    return 0;
}