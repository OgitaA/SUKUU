#include"Item.hpp"

Item::Item(String _name,double _x,double _y) {
	name = _name;

	rect = Rect(_x, _y, 100, 100);

	speed = 300;
}

void Item::update(double _d_time) {

	d_time = _d_time;

	move();
}


void Item::draw() {

	String image_name = name + U"_item";

	TextureAsset(image_name).draw(rect.x, rect.y);
}


void Item::move() {
	rect.x -= speed * d_time;
}
