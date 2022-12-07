
#ifndef LAB4_TOWERDEFENSE__GAME_H
#define LAB4_TOWERDEFENSE__GAME_H
#include "Landscape.h"
#include "Enemy.h"
#include "Cell.h"
#include "Building.h"
#include "Weapon.h"
#include "MagicTower.h"
#include "SimpleTower.h"
#include "Castle.h"
#include "Cave.h"
#include "Cave.h"
#include "Trap.h"


class Game {
private:
    Landscape *landscape;
public:
    Landscape *getLandscape();
    void begining();
    void step(Game *game);
    void resetLandscape(Dimensions d);/**Создаёт ландшафт с размерами и значения клеток по умолчанию**/
    int check_readyness();
    Point check_neighbor_cells_choose_enemy(Point p);
};


#endif
