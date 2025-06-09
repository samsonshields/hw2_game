class Player {
public:
    Player();
    int getXCoord() const;
    void setXCoord(int x);
    int getYCoord() const;
    void setYCoord(int y);
    int getCoinCount() const;
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void pickUpCoin();
    void pickUpPowerUp();
    void setupBoard();
    int getMovementSpeed() const;
    int yCoord_coins[10];
    int xCoord_coins[10];
    int yCoord_powerUp[2];
    int xCoord_powerUp[2];
private:
    int movementSpeed;
    int xCoord;
    int yCoord;
    int coinCount;
    int rand_x, rand_y;
};
