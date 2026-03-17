#ifndef __BOOK__H_
#define __BOOK__H_

#include <iostream>
#include "author.h"

class Book {
    private:
        std::string title;
        int year;
        Author author;

    public:
        Book(const std::string& t, int y, const Author& a);

        std::string getTitle() const;
        int getYear() const;
        Author getAuthor() const;

        void setTitle(const std::string& a);
        void setYear (int y);
        void setAuthor (const Author& a);

        void show() const;
};

#endif