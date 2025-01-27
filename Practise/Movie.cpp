#include<iostream>
#include<string>
using namespace std;

class Movie
{
    private:
    string title;
    int year;
    string director;

    public:
    void setTitle()
    {
        cout << "Enter the movie title: ";
        getline(cin, title);
    }
    void setYear()
    {
        cout << "Enter the year: ";
        cin >> year;
        cin.ignore(); // To ignore the newline character left in the buffer
    }
    void setDirector()
    {
        cout << "Enter the director: ";
        getline(cin, director);
    }
    void displayTitle()
    {
        cout << "Movie title: " << title << endl;
    }
    void displayYear()
    {
        cout << "Movie year: " << year << endl;
    }
    void displayDirector()
    {
        cout << "Movie director: " << director << endl;
    }
};

int main()
{
    Movie myFavMovie;
    myFavMovie.setTitle();
    myFavMovie.setYear();
    myFavMovie.setDirector();
    myFavMovie.displayTitle();
    myFavMovie.displayYear();
    myFavMovie.displayDirector();

    return 0;
}