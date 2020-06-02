#pragma once
class rangeWeapon {
public:
	void setDamage(int d);
	int getDamage();
	void setTime(int t);
	int getTime();
	void setLoaded(bool l);
	bool getLoaded();
	void setAmmo(int a);
	int getAmmo();
	
	
	void LoadWeapon();

private:
	int damage;
	int time;
	bool loaded;
	int ammo;
};