#pragma once

class Back_Object {

public:

	Back_Object(String,int);
	Back_Object(String, int, String);

	void update(double);
	void draw();

	RectF get_rect() { return rect; }
	int get_layer() { return layer; }

private:

	String name;

	RectF rect;

	int layer = 0;



};
