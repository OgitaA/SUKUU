#pragma once

class Item {

public:

	Item(String,String,double,double);

	void update(double);
	void draw();

	RectF get_rect() { return rect; }
	String get_name() { return name; }

	void move();

private:

	double d_time;

	String name;

	String type;

	RectF rect;

	double speed;
};
