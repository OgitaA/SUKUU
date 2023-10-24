﻿#include"Game.hpp"

void Game::update_change_scene() {

	double d_time = Scene::DeltaTime();

	//フェイドインの時間
	const double fade_in_time = 0.5;

	//暗転している時間
	const double fade_time = 0.5;

	//フェイドアウトの時間
	const double fade_out_time = 0.5;



	//黒を増やす
	if (change_scene_scene == 0) {

		change_scene_alpha += (1 / fade_in_time) * d_time;

		//黒くなったら次の＜黒い画面キープ＞へ
		if (change_scene_alpha >= 1) {
			change_scene_scene++;

			change_scene_alpha = 1;
		}
	}

	//黒い画面キープ
	else if (change_scene_scene == 1) {

		change_scene_count += d_time;

		//暗転時間が終わったらシーンを変えて、次の＜黒を減らす＞へ
		if (change_scene_count >= fade_time) {

			change_scene_scene++;

			change_scene_count = 0;

			//シーンの変更
			main_scene = change_scene_go_scene;
			
		}

	}

	//黒を減らす
	else if (change_scene_scene == 2) {

		change_scene_alpha -= (1/fade_out_time) * d_time;

		//終了処理(フェイドアウトが終わった)
		if (change_scene_alpha <= 0) {

			change_scene_process = false;

			change_scene_scene = 0;
			change_scene_count = 0;
			change_scene_alpha = 0;

		}
	}
}



void Game::draw_change_scene() {

	TextureAsset(U"black").draw(0, 0, ColorF(1, 1, 1, change_scene_alpha));
}



//呼ぶとシーンが変わる
void Game::change_scene(int v) {

	change_scene_process = true;
	change_scene_go_scene = v;
}

void Game::change_scene_title() {

	change_scene(100);
}

void Game::change_scene_battle() {

	change_scene(0);
}
