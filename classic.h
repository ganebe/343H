// ----------------------------------------------------comedy.h-------------------------------------------------------
// Vincent Nguyen CSS 343 B
// 11/17/2023
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This header file has various functions to handle and process 
// the genre, stock, director, title, major name, release year, and release month
// by the charater 'C' which will be used by the parent class "Movie".
// 
// --------------------------------------------------------------------------------------------------------------------
// The only code/genre inputted can only be 'C' for comedy.
// -------------------------------------------------------------------------------------------------------------------- 
#pragma once
#ifndef CLASSICS_H
#define CLASSICS_H
#include <string>
#include <vector>

using namespace std;

class Classic
{

public:
	//Constructors
	Classic();
	Classic(char genre, int stock, string director, string title,  string majorName, int releaseYear, int releaseMonth);

	//Destructor
	~Classic();

	//getters
	string getDirector() const;
	string getTitle() const;
	string getMajorName() const;
	int getReleaseMonth() const;
	int getReleaseYear() const;
	int getStock() const;
	char getGenre() const;

	//Overloads
	bool operator<(const Classic& other) const;
	bool operator>(const Classic& other) const;
	bool operator==(const Classic& other) const;
	bool operator!=(const Classic& other) const;

private:
	int stock;
	string director;
	string title;
	string majorName;
	int releaseMonth;
	int releaseYear;
	char genre;

};
#endif