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
		cout << "Movie Title: " << title << endl;
		cout << "Screenwriter: " << writer << endl;
		cout << "Year Released: " << year << endl;
	}
};

int main(){
	//declare container
	vector<Movie> movies;

	//declare temp variables
	string t, w;
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
	while (!in.eof()) {
		getline(in, t);
		temp.setTitle(t);
		in >> y;
		in.ignore();
		temp.setYear(y);
		getline(in, w);
		temp.setWriter(w);
		movies.push_back(temp);
	}

	//close file
	in.close();

	//display vector contents
	for (Movie m : movies) {
		m.print();
		cout << endl;
	}

	return 0;
}
