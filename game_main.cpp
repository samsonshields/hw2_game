#include "game.h"
#include<iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(nullptr));
    Player player1;
    player1.setupBoard();
    int min = 0, max = 9;
    for(int i = 0; i < 10; i++) {
        cout << i << ". [" << player1.xCoord_coins[i] << ", " << player1.yCoord_coins[i] << "] " << endl;
    }
    char choice;
    while(choice != 'q' && player1.getCoinCount() < 10){
        bool valid = false;
        while(!valid) {
            cout << "-- Choose a move -- " << endl;
            cout << "W. Move Up" << endl;
            cout << "A. Move Left" << endl;
            cout << "S. Move Down" << endl;
            cout << "D. Move Right" << endl;
            cout << "Q. Quit" << endl;
            cout << ">> ";
            cin >> choice;
            if(choice == 'W' || choice == 'w' || choice == 'A' || choice == 'a' || choice =='S' || choice == 's' || choice == 'D' || choice == 'd' || choice == 'Q' || choice == 'q') {
                valid = true;
            } else {
                cout << "Invalid Choice" << endl;
                cout << endl;
            }
        }
        switch(choice) {
            case 'A':
            case 'a':
                for(int i = 0; i < player1.getMovementSpeed(); i++) {
                    if(player1.getXCoord() > min) {
                        player1.setXCoord(player1.getXCoord() - 1);
                        for(int j = 0; j < 10; j++) {
                            if(player1.xCoord_coins[j] == player1.getXCoord() && player1.yCoord_coins[j] == player1.getYCoord()) {
                                player1.pickUpCoin();
                                cout << "+1 coin!" << endl << endl;
                                player1.xCoord_coins[j] = -1;
                                player1.yCoord_coins[j] = -1;
                            }
                        }
                        for(int j = 0; j < 2; j++) {
                            if(player1.xCoord_powerUp[j] == player1.getXCoord() && player1.yCoord_powerUp[j] == player1.getYCoord()) {
                                player1.pickUpPowerUp();
                                cout << "+1 power up! Your movement speed is now " << player1.getMovementSpeed() << endl << endl;
                                player1.xCoord_powerUp[j] = -1;
                                player1.yCoord_powerUp[j] = -1;
                            }
                        }
                    }
                }
            break;

            case 'W':
            case 'w':
                for(int i = 0; i < player1.getMovementSpeed(); i++) {
                    if(player1.getYCoord() < max) {
                        player1.setYCoord(player1.getYCoord() + 1);
                        for(int j = 0; j < 10; j++) {
                            if(player1.xCoord_coins[j] == player1.getXCoord() && player1.yCoord_coins[j] == player1.getYCoord()) {
                                player1.pickUpCoin();
                                cout << "+1 coin!" << endl << endl;
                                player1.xCoord_coins[j] = -1;
                                player1.yCoord_coins[j] = -1;
                            }
                        }
                        for(int j = 0; j < 2; j++) {
                            if(player1.xCoord_powerUp[j] == player1.getXCoord() && player1.yCoord_powerUp[j] == player1.getYCoord()) {
                                player1.pickUpPowerUp();
                                cout << "+1 power up! Your movement speed is now " << player1.getMovementSpeed() << endl << endl;
                                player1.xCoord_powerUp[j] = -1;
                                player1.yCoord_powerUp[j] = -1;
                            }
                        }
                    }
                }
            break;

            case 'S':
            case 's':
                for(int i = 0; i < player1.getMovementSpeed(); i++) {
                    if(player1.getYCoord() > min) {
                        player1.setYCoord(player1.getYCoord() - 1);
                        for(int j = 0; j < 10; j++) {
                            if(player1.xCoord_coins[j] == player1.getXCoord() && player1.yCoord_coins[j] == player1.getYCoord()) {
                                player1.pickUpCoin();
                                cout << "+1 coin!" << endl << endl;
                                player1.xCoord_coins[j] = -1;
                                player1.yCoord_coins[j] = -1;
                            }
                        }
                        for(int j = 0; j < 2; j++) {
                            if(player1.xCoord_powerUp[j] == player1.getXCoord() && player1.yCoord_powerUp[j] == player1.getYCoord()) {
                                player1.pickUpPowerUp();
                                cout << "+1 power up! Your movement speed is now " << player1.getMovementSpeed() << endl << endl;
                                player1.xCoord_powerUp[j] = -1;
                                player1.yCoord_powerUp[j] = -1;
                            }
                        }
                    }
                }
            break;

            case 'D':
            case 'd':
                for(int i = 0; i < player1.getMovementSpeed(); i++) {
                    if(player1.getXCoord() < max) {
                        player1.setXCoord(player1.getXCoord() + 1);
                        for(int j = 0; j < 10; j++) {
                            if(player1.xCoord_coins[j] == player1.getXCoord() && player1.yCoord_coins[j] == player1.getYCoord()) {
                                player1.pickUpCoin();
                                cout << "+1 coin!" << endl << endl;
                                player1.xCoord_coins[j] = -1;
                                player1.yCoord_coins[j] = -1;
                            }
                        }
                        for(int j = 0; j < 2; j++) {
                            if(player1.xCoord_powerUp[j] == player1.getXCoord() && player1.yCoord_powerUp[j] == player1.getYCoord()) {
                                player1.pickUpPowerUp();
                                cout << "+1 power up! Your movement speed is now " << player1.getMovementSpeed() << endl << endl;
                                player1.xCoord_powerUp[j] = -1;
                                player1.yCoord_powerUp[j] = -1;
                            }
                        }
                    }
                }
            break;
            case 'q':
            case 'Q':
                choice = 'q';
            break;
            default:
                cout << "Sorry, I don't understand" << endl;
        }
        cout << "(" << player1.getXCoord() << ", " << player1.getYCoord() << ") Coins: " << player1.getCoinCount() << endl;
    }
    if(player1.getCoinCount() == 10) {
        cout << "You win! Congrats on collecting all 10 coins." << endl;
    }
    return 0;
}
