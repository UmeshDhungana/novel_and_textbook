#include <iostream>
#include "Novel.h"
#include <string>

using namespace std;

Novel::Novel(string bookName, Author authorName, float bookPrice, int bookQuantity, bool novelCover, string novelGenre, string novelPublisher)
:Book( bookName, authorName, bookPrice, bookQuantity)
{
    isHardCover = novelCover;
    genre = novelGenre;
    publisher = novelPublisher;
}

bool Novel::getCover()
{
    return isHardCover;
}

string Novel::getGenre()
{
    return genre;
}

string Novel::getPublisher()
{
    return publisher;
}

string Novel:: novelInfo()
{
    string cover;
    if (getCover() == 1)
        cover = "Yes";
    else if (getCover()== 0)
        cover = "No";

    return "Cover: " + cover + " Genre: " + getGenre() + " Publisher: " + getPublisher();
}

float Novel:: getTotalPrice()
{
    return (price*quantity);
}
