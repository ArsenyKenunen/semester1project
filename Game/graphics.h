#pragma once
#include <string>
using std::string;

void display(void);

class UIobject
{
public:
	UIobject();
	UIobject(string unput_text);

	void show();
private:
	float w, h, x0, y0;
	bool state;
	string text;

};