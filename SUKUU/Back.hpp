#pragma once

class Back {

public:

	Back();

	void update(double);
	void draw();

	void set_stage(int v) { stage = v; }

private:

	int stage = 1;
};
