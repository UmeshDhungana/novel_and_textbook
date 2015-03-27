#include <iostream>
#include "Book.h"
using namespace std;

Book::Book(string bookName, Author authorName, float bookPrice)
{
    name = bookName;
    author = authorName;
    setPrice(bookPrice);
}
Book::Book(string bookName, Author authorName, float bookPrice, int bookQuantity)
{
    name = bookName;
    author = authorName;
    setPrice(bookPrice);
    setQuantity(bookQuantity);
}
void Book::setPrice(float bookPrice)
{
    price = bookPrice;
}
void Book::setQuantity(int bookQuantity)
{
    quantity = bookQuantity;
}

string Book::getName()
{
    return name;
}
Author Book::getAuthor()
{
    return author;
}
float Book::getPrice()
{
    return price;
}
int Book::getQuantity()
{
    return quantity;
}

string Book::toString()
{
    return  getName() + " by " + author.toString();
}
