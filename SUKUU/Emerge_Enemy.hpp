#pragma once

class Emerge_Enemy {

public:

	Emerge_Enemy(double _stage_time,String _name,String _pattern,int _x,int _y,int _hp,int _score,int _item) {

		stage_time = _stage_time;

		name = _name;

		pattern = _pattern;

		x = _x;

		y = _y;

		hp = _hp;

		score = _score;

		item = _item;

	}

	double get_stage_time() { return stage_time; }
	String get_name() { return name; }
	String get_pattern() { return pattern; }
	int get_x() { return x; }
	int get_y() { return y; }
	int get_hp() { return hp; }
	int get_score() { return score; }
	int get_item() { return item; }

	bool get_done() { return done; }
	void set_done() { done = true; }

private:

	double stage_time;

	String name;

	String pattern;

	int x;

	int y;

	int hp;

	int score;

	int item;

	bool done = false;
};
