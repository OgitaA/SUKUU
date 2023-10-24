#pragma once

class Enemy_Bullet {

public:

	Enemy_Bullet(String, double, double, double, int, double);

	void update(double);
	void draw();

	Circle get_circle() { return circle; }
	int get_power() { return power; }

	void move();
	void move_normal();

private:

	double d_time;

	Circle circle;

	String name;

	double speed;

	int power;

};
