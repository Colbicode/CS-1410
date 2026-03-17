#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Author {
    private:
        string name, nationality;

    public:
        Author(const string& name, const string& nationality): name(name), nationality(nationality) {}

        string getName() const {return name;}
        string getNationality() const {return nationality;}

        void setName(const string& name) {this->name = name;}
        void setNationality(const string& nationality) {this->nationality = nationality;}
};

class Book {
    private:
        string title;
        int year;
        Author author;

    public:
        Book(const string& t, int y, const Author& a): title(t), year(y), author(a){}

        string getTitle() const {return title;}
        int getYear() const {return year;}
        Author getAuthor() const {return author;}

        void setTitle(const string& a){title = a;}
        void setYear (int y) {year = y;}
        void setAuther (const Author& a) {author = a;}

        void show() const{
            cout << "Book: " << title << " (" << year << ")\n"
            << "Author: " << author.getName() << " [" << author.getNationality() << "]\n";
        }
};

int main() {
    Author a("George Orwell", "British");
    Book b("1984", 1949, a);

    b.show();

    return 0;
}

