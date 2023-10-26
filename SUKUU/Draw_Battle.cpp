﻿#include"Game.hpp"

void Game::draw_battle() {

	draw_back();

	draw_back_object();

	draw_item();

	draw_player_bullet();

	draw_enemy();

	draw_enemy_bullet();

	player.draw();

	draw_UI();

	
}

void Game::draw_player_bullet() {

	for (auto& b : player_bullet) {
		b.draw();
	}
}

void Game::draw_enemy() {

	for (auto& e : enemy) {
		e.draw();
	}
}

void Game::draw_enemy_bullet() {

	for (auto& b : enemy_bullet) {
		b.draw();
	}
}

void Game::draw_back() {

	back.draw();
}

void Game::draw_back_object() {

	for (auto& o : back_object) {
		if (o.get_layer() == 1) {
			o.draw();
		}
	}

	for (auto& o : back_object) {
		if (o.get_layer() == 0) {
			o.draw();
		}
	}
}

void Game::draw_item() {

	for (auto& i : item) {
		i.draw();
	}
}

void Game::draw_UI() {

	TextureAsset(U"frame").draw(0, 0);

	/*
	int p_hp = player.get_hp();
	int p_max_hp = player.get_max_hp();

	double hp_bar_w = 400;
	double display_w = hp_bar_w * p_hp / p_max_hp;

	//hp
	//TextureAsset(U"hp_bar")(0, 0, display_w, 60).draw(100, 50);
*/
	


	//GAUGE

	const int edge_x = 30;

	const int moji_w = 120;

	const int interval = 350;

	const int gauge_w = 120;

	const int gauge_space = 40;


	const int burn = edge_x;


	//BURN

	TextureAsset(U"burn_mini").draw(burn, 0);

	FontAsset(U"KIKA_R_30")(U"POWER").draw(burn + moji_w, 10);

	for (int i = 0; i < 5; i++) {

		int x = burn + gauge_w + gauge_space * i;

		TextureAsset(U"gauge").draw(x, 52);
	}

	int red_gauge = player.get_burn_gauge();

	for (int i = 0; i < red_gauge; i++) {

		int x = burn + gauge_w + gauge_space * i;

		TextureAsset(U"red_gauge").draw(x, 52);
	}



	//NON_BURN

	const int non_burn = edge_x + interval;

	TextureAsset(U"non_burn_mini").draw(non_burn, 0);

	FontAsset(U"KIKA_R_30")(U"SPEED").draw(non_burn + moji_w, 10);

	for (int i = 0; i < 5; i++) {

		int x = non_burn + gauge_w + gauge_space * i;

		TextureAsset(U"gauge").draw(x, 52);
	}

	int blue_gauge = player.get_non_burn_gauge();

	for (int i = 0; i < blue_gauge; i++) {

		int x = non_burn + gauge_w + gauge_space * i;

		TextureAsset(U"blue_gauge").draw(x, 52);
	}


	//RECYCLE

	const int recycle = edge_x + interval * 2;

	TextureAsset(U"recycle_mini").draw(recycle, 0);

	FontAsset(U"KIKA_R_30")(U"BARRIER").draw(recycle + moji_w, 10);

	for (int i = 0; i < 5; i++) {

		int x = recycle + gauge_w + gauge_space * i;

		TextureAsset(U"gauge").draw(x, 52);
	}


	int green_gauge = player.get_recycle_gauge();

	for (int i = 0; i < green_gauge; i++) {

		int x = recycle + gauge_w + gauge_space * i;

		TextureAsset(U"green_gauge").draw(x, 52);
	}






	//SCORE

	const int score_x = 1645;

	FontAsset(U"KIKA_R_30")(U"スコア").draw(score_x, 10);

	String score_string = Format(score);

	int digit = score_string.size();

	int digit_max = 8;

	String zero = U"";

	//足りない桁があるなら
	if (digit_max - digit > 0) {

		int loop = digit_max - digit;

		for (int i = 0; i < loop; i++) {
			zero += U"0";
		}

	}

	score_string = zero + score_string;


	FontAsset(U"KIKA_R_30")(score_string).draw(score_x, 55);



	//Remain

	int remain_x = 1100;

	TextureAsset(U"player").scaled(0.75).draw(remain_x, 30);

	FontAsset(U"KIKA_R_30")(U"×" + Format(remain)).draw(remain_x + 100, 40);


}
