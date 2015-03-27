#include <iostream>
#include "Book.h"

using namespace std;

class Novel : public Book
{
private:
    bool isHardCover;
    string genre;
    string publisher;
public:
    Novel(string bookName, Author authorName, float bookPrice, int bookQuantity, bool novelCover, string novelGenre, string novelPublisher);
    bool getCover();
    string getGenre();
    string getPublisher();
    string novelInfo();
    float getTotalPrice();
};

