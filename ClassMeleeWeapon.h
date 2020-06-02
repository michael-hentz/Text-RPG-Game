#pragma once
class meleeWeapon {
public:
	void setDamage(int d);
	int getDamage();
	void setTime(int t);
	int getTime();

private:
	int damage;
	int time;
};