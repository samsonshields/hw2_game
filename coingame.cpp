#include "game.h"
#include <cstdlib>

Player::Player() {
    xCoord = 0;
    yCoord = 0;
    coinCount = 0;
    movementSpeed = 1;
}
void Player::moveUp() {
    yCoord += movementSpeed;
}
void Player::moveDown() {
    yCoord -= movementSpeed;
}
void Player::moveLeft() {
    xCoord -= movementSpeed;
}
void Player::moveRight() {
    xCoord += movementSpeed;
}
int Player::getXCoord() const{
    return xCoord;
}
int Player::getYCoord() const {
    return yCoord;
}
void Player::pickUpCoin() {
    coinCount++;
}
void Player::pickUpPowerUp() {
    movementSpeed *= 2;
}
int Player::getCoinCount() const {
    return coinCount;
}
int Player::getMovementSpeed() const{
    return movementSpeed;
}
void Player::setXCoord(int x) {
    xCoord = x;
}
void Player::setYCoord(int y) {
    yCoord = y;
}
void Player::setupBoard() {
    for(int i = 0; i < 10; i++) {
        rand_x = rand() % 10 + 1;
        xCoord_coins[i] = rand_x;
        rand_y =  rand() % 10 + 1;
        yCoord_coins[i] = rand_y;
    }
    for(int i = 0; i < 2; i++) {
        rand_x = rand() % 9 + 1;
        xCoord_powerUp[i] = rand_x;
        rand_y =  rand() % 9 + 1;
        yCoord_powerUp[i] = rand_y;
    }
}

