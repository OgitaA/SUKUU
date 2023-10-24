#pragma once

class Stage_Select_Box {

public:

	int get_number() { return number; }
	String get_name() { return name; }

	int get_x() { return x; }
	int get_y() { return y; }


private:

	int number = 0;

	String name;

	int x, y;

};
