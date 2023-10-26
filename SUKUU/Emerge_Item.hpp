#pragma once

class Emerge_Item {

public:

	Emerge_Item(double _stage_time,String _name,String _type,int _x,int _y) {

		stage_time = _stage_time;
		name = _name;
		type = _type;
		x = _x;
		y = _y;
	}

	double get_stage_time() { return stage_time; }
	String get_name() { return name; }
	String get_type() { return type; }
	int get_x() { return x; }
	int get_y() { return y; }


	bool get_done() { return done; }
	void set_done() { done = true; }

private:

	double stage_time;

	String name;

	String type;

	int x, y;

	bool done = false;
};
