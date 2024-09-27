/*************************************

COMSC 210 | Lab 15 | Skylar Robinson

This program demonstrates a movie class object

*************************************/

#include <iostream>
#include <string>
using namespace std;

class Movie{
private:
	string title, writer;
	int year;
public:
	//setters
	void setTitle(string t)  { title = t; }
	void setWriter(string w) { writer = w; }
	void setYear(int y)      { year = y; }

	//getters
	string getTitle() const  { return title; }
	string getWriter() const { return writer; }
	int getYear() const      { return year; }
};

int main(){


	return 0;
}
