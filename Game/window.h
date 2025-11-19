#ifndef WINDOW_H
#define WINDOW_H 




void reshape(int w, int h);

class window
{
public:
	const char* windowName;

	window(int argc, char** argv);
	void run(void);
private:

};

#endif // WINDOW_H