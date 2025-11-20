#pragma once

void display(void);

class UIobject
{
public:
	UIobject();

	void show();
private:
	float w, h, x0, y0;
	bool state;
	const char* text;

};