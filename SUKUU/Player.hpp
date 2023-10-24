#pragma once

class Player {

public:

	Player();

	void update(double);
	void draw();

	RectF get_rect() { return rect; }
	double get_shot_cool_time() { return shot_cool_time; }
	void set_shot_cool_time(double v) { shot_cool_time = v; }
	void damage();
	String get_mode() { return mode; }

	void move();
	void limit_screen();
	void change_mode();

	void reset();

	int get_burn_gauge() { return burn_gauge; }
	int get_non_burn_gauge() { return non_burn_gauge; }
	int get_recycle_gauge() { return recycle_gauge; }

	bool get_miss() { return miss; }

private:

	double d_time;

	RectF rect;

	double speed = 450;

	double shot_cool_time = 0;

	bool miss = false;

	double muteki_count = 0;

	String mode;

	int burn_gauge = 0;
	int non_burn_gauge = 0;
	int recycle_gauge = 0;


};
