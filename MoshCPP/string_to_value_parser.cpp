/*
    Given the following string, write a function to parse this into a Movie structure.
    "Terminator 1,1984"
    Hints: Because there is whitespace in the string, so we can't use extraction operator
    Use the getline() function to solve it
*/

#include <iostream>
#include <string> 
#include <sstream>
#include <iomanip>

using namespace std;

struct Movie{
    int year;
    string title;
};

int main(){
    string given_movie = "Terminator 1,1984";
    stringstream movie_stream;
    movie_stream.str(given_movie);
    Movie movie;
    getline(movie_stream,movie.title,',');
    string year = "";
    getline(movie_stream,year,'\n');
    movie.year = stoi(year);
    cout << "Movie title is: " << movie.title << ".\nMovie released year is: " << movie.year << ".\n";
    return 0;
}