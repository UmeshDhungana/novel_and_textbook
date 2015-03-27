#include <iostream>
#include "Author.h"
#ifndef BOOK_H
#define BOOK_H

using namespace std;

class Book{
private:
    string name;
    Author author;

protected:
    float price;
    int quantity;

public:
    Book(string bookName, Author authorName, float bookPrice);
    Book(string bookName, Author authorName, float bookPrice, int bookQuantity);
    void setPrice(float bookPrice);
    void setQuantity(int bookQuantity);
    string getName();
    Author getAuthor();
    float getPrice();
    int getQuantity();
    string toString();
};
#endif // BOOK_H
