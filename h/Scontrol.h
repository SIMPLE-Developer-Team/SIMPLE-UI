#ifndef S_CONTROL_
#define S_CONTROL_
#include "../header.h"

class Scontrol{
public:
	Scontrol(int w = 0, 
		 int h = 0,
		 Scolor bc = WHITE,
	         Swindow* w = nullptr,
		 Sgrid* g = nullptr)
	:width(w),
	 height(h),
	 bkcolor(WHITE),
	 _window(w),
	 _grid(g){}
	
	virtual bool render() = 0;

	int getwidth() const { return width; }
	int getheight() const { return height; 	}
	void setwidth(int neww) { width = neww; }
	void setheight(int newh) { height = newh; }
private:
	int width,
	    height;
	Swindow* _window;
	Sgrid* _grid;
	Scolor bkcolor;
};
#endif // Scontrol.h
