//
// Created by Кирилл Никитин on 11.11.2022.
//

#include "Game.h"

void Game::begining() {

}

void Game::step(Game *game) {
	// 1) Пробегаю по таблице, ищу башни и ловушки у которых проверяю возможность атаковать кого-либо, наносим урон
	Landscape *b = game->landscape;
	Point a = {0, 0 };
	for (a.y = 0; a.y < b->dimension.height; a.y++){
		for (a.x = 0; a.x < b->dimension.width; a.x++){
			size_t idx = b->dimension.width * a.y + a.x;
			if (b->cells[idx].building->BuildingType() == "Simple"){
				Point en = check_neighbor_cells_choose_enemy(b->cells[idx].number);
				size_t idxen = b->dimension.width * en.y + en.x;
				Enemy *enemy = b->cells[idxen].enemy;
				enemy->deal_damage_smp();
			}
			if (b->cells[idx].building->BuildingType() == "Magic"){
				Point en = check_neighbor_cells_choose_enemy(b->cells[idx].number);
				size_t idxen = b->dimension.width * en.y + en.x;
				Enemy *enemy = b->cells[idxen].enemy;
				enemy->deal_damage_mgt();
			}
			if (b->cells[idx].building->BuildingType() == "Trap"){
				Point en = check_neighbor_cells_choose_enemy(b->cells[idx].number);
				size_t idxen = b->dimension.width * en.y + en.x;
				Enemy *enemy = b->cells[idxen].enemy;
				enemy->deal_damage_trp();
			}

		}
	}

	 // 2)-3) Логово выпускает врага в зависимости от периода,
	 // Каждый враг делает шаг по направлению к замку, бьет замок если находится на этой клетке





}

void Game::resetLandscape(Dimensions d) {

	Point a = {0, 0};
	for (a.y = 0; a.y <= d.height; a.y++){

	}
}

Landscape* Game::getLandscape() {

}

int Game::check_readyness() {
	// бежим по таблице и проверяем ближние клетки на наличие тропы(road)
	return 1;
}

Point Game::check_neighbor_cells_choose_enemy(Point p) {
	//в зависимости от радиуса проверяю соседние клетки, выбираю врага для атаки,
	// запоминаю, возвращаюего местоположение,
	//атакую после выхода из функции
}

