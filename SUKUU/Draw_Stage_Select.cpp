#include"Game.hpp"

void Game::draw_stage_select() {

	TextureAsset(U"stage_select_back").draw(0, 0);

	FontAsset(U"UDP_G_B_100")(U"STAGE SELECT").drawAt(1920 / 2, 45 * 2,Palette::White);

	for (auto& b : stage_select_box) {

		int x = b.get_x();
		int y = b.get_y();


		int number = b.get_number();
		String name = b.get_name();

		TextureAsset(U"").draw();
	}
}
