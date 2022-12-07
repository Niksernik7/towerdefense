#include <iostream>
#include <cstdlib>
#include "Game.h"
#include <vector>


/**
  0) 1) 2) 3) 4)
0)fo ma fo si fo
1)ca ro tr ro cs
2)si fo ma fo si
3)ca ro tr ro cs
4)fo si fo ma fo
*/








int main() {
	// 1. Настроить ГПСЧ
	srand(5);
	// 2. Создать и настроить Game
	Game game{};
	Dimensions dimensions{5,5};
	game.resetLandscape(dimensions);
	Landscape *landscape = game.getLandscape();
	Point a  {0, 0};
	for (a.x = 0; a.x < dimensions.width; a.x++) {
		for (a.y = 0; a.y < dimensions.height; a.y++){
			Cell cell = Cell({a.x, a.y}, Field);
			size_t idx = dimensions.width * a.y + a.x;
			landscape->cells[idx] = cell; /**????????????????????????*/
		}
	}

	landscape->setCellType(Point(1, 1), CellType::Road);
	landscape->setCellType(Point(1, 2), CellType::Road);
	landscape->setCellType(Point(1, 3), CellType::Road);
	landscape->setCellType(Point(3, 1), CellType::Road);
	landscape->setCellType(Point(3, 2), CellType::Road);
	landscape->setCellType(Point(3, 3), CellType::Road);
	landscape->setCellType(Point(0, 2), CellType::Forest);
	landscape->setCellType(Point(0, 0), CellType::Forest);
	landscape->setCellType(Point(0, 4), CellType::Forest);
	landscape->setCellType(Point(4, 0), CellType::Forest);
	landscape->setCellType(Point(4, 2), CellType::Forest);
	landscape->setCellType(Point(4, 4), CellType::Forest);
	landscape->setCellType(Point(2, 1), CellType::Forest);
	landscape->setCellType(Point(2, 3), CellType::Forest);
	landscape->setBuilding(Point(1, 0), new Castle("castle_1"));
	landscape->setBuilding(Point(3, 0), new Castle("castle_2"));
	landscape->setBuilding(Point(1, 0), new Cave());
	landscape->setBuilding(Point(3, 0), new Cave());
	landscape->setBuilding(Point(0, 1), new MagicTower(*new Effect(1, 5, freeze)));
	landscape->setBuilding(Point(0, 3), new SimpleTower());
	landscape->setBuilding(Point(2, 0), new SimpleTower());
	landscape->setBuilding(Point(2, 4), new SimpleTower());
	landscape->setBuilding(Point(2, 2), new MagicTower(*new Effect(1, 5, weakness)));
	landscape->setBuilding(Point(4, 1), new SimpleTower());
	landscape->setBuilding(Point(4, 3), new MagicTower(*new Effect( poison)));
	landscape->setBuilding(Point(1, 2), new Trap(*new Effect(poison)));
	landscape->setBuilding(Point(2, 2), new Trap(*new Effect(freeze)));



	if(!game.check_readyness()) {
		// error handling
	}

	// 3. Сымитировать ходы игрока, перемежая их переходом хода компьютеру



	// 4. Отображать события игры на экране в процессе (3) и результат игры
	return 0;
}
