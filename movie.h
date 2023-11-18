#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
#include <sstream>

using namespace std;

class Movie {
public:
    Movie(char status, int stock, const string& director, const string& title, int year);
    Movie(char status, int stock, const string& director, const string& title, const string& majorActorMonthYear);
    virtual ~Movie() = default;

    char getStatus() const;
    int getStock() const;
    void setStock(int stock);
    const string& getDirector() const;
    const string& getTitle() const;
    const string getMajorActorMonthYear() const;
    int getYear() const;


    // Borrow and return movie(Not sure if we need them here)
    virtual bool borrowMovie();
    virtual bool returnMovie();

    // Comparison operators
    virtual bool operator==(const Movie& other) const;
    virtual bool operator!=(const Movie& other) const;

private:
    char status_;
    int stock_, year_;
    string director_, title_, majorActorMonthYear_;
};
#endif
