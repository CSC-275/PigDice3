#include "NewGame.h"

int main() {
    //Game my_game;
    //NewGame my_game;
    Game *my_game = new NewGame();
    my_game->play_game();
}
