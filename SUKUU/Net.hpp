#pragma once

class Net {

public:

	Net(){

		reset();

		rect = Rect();
		hit_rect = rect;
	}

	void first(double,double);

	void update(double,double,double);

	void draw();

	void reset();

	RectF get_hit_rect() {return hit_rect; }

private:

	RectF rect;

	double adjust_x = 30;
	double adjust_y = 20;

	double move_y = 0;

	bool operation = false;

	String status = U"down";

	double speed = 400;

	double count = 0;

	RectF hit_rect;
};
