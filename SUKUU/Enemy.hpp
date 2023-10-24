#pragma once

class Enemy {

public:

	Enemy(String,double,double);

	Enemy(String, String, int, int, int, int, int);

	void update(double);
	void draw();

	void each();

	RectF get_rect() { return rect; }
	void damage(int v) { hp -= v; if (hp < 0) { hp = 0; } }
	int get_hp() { return hp; }
	double get_count() { return count; }
	bool get_boss() { return boss; }
	int get_item() { return item; }

	int get_make_bullet() { return make_bullet; }
	void set_make_bullet_done() { make_bullet = -1; }

	void move();

	void straight_move();

private:

	double d_time;

	String name;

	RectF rect;

	double speed;

	String pattern;

	int hp;

	int score;

	int item;

	double count = 0;

	int make_bullet = -1;

	bool boss = false;
};
