#include"Game.hpp"

void Game::draw_stage_select() {

	TextureAsset(U"stage_select_back").draw(0, 0);

	FontAsset(U"UDP_G_B_100")(U"STAGE SELECT").drawAt(1920 / 2, 45 * 2,Palette::White);

	for (auto& b : stage_select_box) {

		
		int b_w = 1000;
		int b_h = 250;

		int pos_x = (1920 - b_w) / 2;
		int pos_y = 200;


		int blank = 50;

		int x = b.get_x();
		int y = b.get_y();

		int number = b.get_number();
		String name = b.get_name();

		int box_x = pos_x;
		int box_y = pos_y + (b_h + blank) * (number - 1);

		TextureAsset(U"stage_select_box").draw(box_x, box_y);

		FontAsset(U"UD_G_B_60")(name).drawAt(box_x + b_w / 2, box_y + b_h / 2, Palette::White);


	}
}
