#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
#include <sstream>

using namespace std;

class Movie {
public:
    Movie(int stock, const string& director, const string& title);
    virtual ~Movie() = default;

    int getStock() const;
    void setStock(int stock);
    int getCurrentStock()const;
    const string& getDirector() const;
    const string& getTitle() const;


    bool borrowMovie();
    bool returnMovie();

    // Comparison operators
    virtual bool operator==(const Movie& other) const;
    virtual bool operator!=(const Movie& other) const;

private:
    int current_stock_;
    int stock_;
    string director_, title_;
};
#endif
