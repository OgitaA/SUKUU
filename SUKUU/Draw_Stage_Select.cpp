#include"Game.hpp"

void Game::draw_stage_select() {

	TextureAsset(U"stage_select_back").draw(0, 0);

	FontAsset(U"UDP_G_B_100")(U"STAGE SELECT").drawAt(1920 / 2, 45 * 2,Palette::White);

	TextureAsset(U"stage_select_doctor").draw(1920 - 380 - 30, 1080 - 550 - 30);

	    int b_w = 1000;
		int b_h = 250;

		int pos_x = (1920 - b_w) / 2;
		int pos_y = 200;

		int blank = 50;



		int select_x = pos_x;
		int select_y = pos_y + (b_h + blank) * (stage_select_cur);

		TextureAsset(U"stage_select_cur").draw(select_x - 50, select_y - 175);



	for (auto& b : stage_select_box) {

		int x = b.get_x();
		int y = b.get_y();

		int number = b.get_number();
		String name = b.get_name();

		int box_x = pos_x;
		int box_y = pos_y + (b_h + blank) * (number - 1);


		String box_name = U"stage_select_box_" + Format(number);

		TextureAsset(box_name).draw(box_x, box_y);

		FontAsset(U"UDP_G_B_40")(U"Stage " + Format(number)).draw(box_x + 30, box_y + 25);

		FontAsset(U"UDP_G_B_70")(name).drawAt(box_x + b_w / 2, box_y + b_h / 2, Palette::White);

	}
}
