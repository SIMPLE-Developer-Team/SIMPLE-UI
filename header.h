/*
 *
 * 	header.h
 *
 * 	contains header files and forward declarations required by the SIMPLE-UI library
 *
 */
#include <iostream>
#include <vector>
#include <any>
#include <utility>

// ===================================================
class Swindows;
class Scontrol;
class Sbutton;
class Slist;
class Smenu;
class SrenderEngine;
class Sgrid;
// ===================================================
// enum: Scolor
enum Scolor{
	RED,
	ORANGE,
	YELLOW,
	GREEN,
	CYAN,
	PURPLE,
	BLACK,
	WHITE
};

// struct: Vertex
// a vertex struct for SIMPLE-UI
struct Vertex{
	std::pair<int, int> _pos;
	Scolor _color;
};
