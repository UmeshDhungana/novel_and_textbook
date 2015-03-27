#include <iostream>
#include "TextBook.h"

using namespace std;

TextBook::TextBook(string bookName, Author authorName, float bookPrice, int bookQuantity, string textSubject,string textPublisher,string textEdition)
    :Book( bookName, authorName, bookPrice, bookQuantity)
{
    setSubject(textSubject);
    setEdition(textEdition);
    publisher = textPublisher;
}

void TextBook::setSubject(string textSubject)
{
    subject = textSubject;
}

void TextBook::setEdition(string textEdition)
{
    edition = textEdition;
}

string TextBook::getSubject()
{
    return subject;
}

string TextBook::getPublisher()
{
    return publisher;
}

string TextBook::getEdition()
{
    return edition;
}

string TextBook::textBookInfo()
{
    return "Subject: " + getSubject() + " Publisher: " + getPublisher() + " Edition: " + getEdition();
}

float TextBook::getTotalPrice()
{
    return (price*quantity);
}
