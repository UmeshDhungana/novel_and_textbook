#include <iostream>
#include "Book.h"
#ifndef TEXTBOOK_H
#define TEXTBOOK_H


using namespace std;

class TextBook:public Book
{
private:
    string subject;
    string publisher;
    string edition;
public:
    TextBook(string, Author, float, int, string , string, string);
    void setSubject(string textSubject);
    void setEdition(string textEdition);
    string getSubject();
    string getPublisher();
    string getEdition();
    string textBookInfo();
    float getTotalPrice();
};
#endif // TEXTBOOK_H
