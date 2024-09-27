/*************************************

COMSC 210 | Lab 15 | Skylar Robinson

This program demonstrates a movie class object

*************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
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

	//print
	void print(){
		cout << "Title: " << title << endl;
		cout << "Writer: " << writer << endl;
		cout << "Year: " << year << endl;
	}
};

int main(){
	//declare container
	vector<Movie> movies;

	//declare temp variables
	string n, w;
	int y;
	Movie temp;

	//open input file
	ifstream in;
	in.open("input.txt");
	if (!in){
		cout << "File open error.\n";
		return -1;
	}

	//populate movies vector
	while (!in.eof()){

	}

	//close file
	in.close();

	return 0;
}
