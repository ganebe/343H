// ----------------------------------------------------comedy.h-------------------------------------------------------
// Vincent Nguyen CSS 343 B
// 11/17/2023
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This header file has various functions to handle and process the genre, stock, director, title, and release year
// by the charater 'F' which will be used by the parent class "Movie".
// 
// --------------------------------------------------------------------------------------------------------------------
// The only code/genre inputted can only be 'F' for comedy.
// -------------------------------------------------------------------------------------------------------------------- 

#pragma once
#ifndef COMEDY_H
#define COMEDY_H
#include <string>
#include <vector>

using namespace std;

class Comedy
{

public:
	//Constructors
	Comedy();
	Comedy(char genre, int stock, string director, string title, int releaseYear);

	//Destructor
	~Comedy();

	//getters
	string getDirector() const;
	string getTitle() const;
	int getReleaseYear() const;
	int getStock() const;
	char getGenre() const;

	//Overloads
	bool operator<(const Comedy& other) const;
	bool operator>(const Comedy& other) const;
	bool operator==(const Comedy& other) const;
	bool operator!=(const Comedy& other) const;

private:
	int stock;
	string director;
	string title;
	int releaseYear;
	char genre;

};
#endif