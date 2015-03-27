#include <iostream>
#include "Author.h"

using namespace std;

Author::Author(){
}
Author::Author(string authorName, string authorGender, string authorEmail)
{
    name =  authorName;
    gender = authorGender;
    setEmail(authorEmail);
}

void Author::setEmail(string authorEmail)
{
    email = authorEmail;
}

string Author::getName()
{
    return name;
}

string Author::getGender()
{
    return gender;
}

string Author::getEmail()
{
    return email;
}

string Author::toString()
{
    return getName() + " at " + getEmail();
}

