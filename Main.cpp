#include <iostream>
#include <string>
#include "Book.h"
#include "TextBook.h"
#include "Novel.h"

using namespace std;

int main()
{
    string author, email, gender;
    string subject;
    string name;
    string edition, publisher, genre;
    int choice;
    bool cover;
    int quantity;
    float price;

    cout<<"Enter the name, gender and email address of author:";
    cout << endl;

    getline(cin,author);
    cin >> gender;
    cin.get();
    getline(cin,email);

    cout<< "Enter the name, price and quantity of book: ";
    getline(cin, name);
    cin>> price;
    cin>> quantity;

    Author newAuthor(author, gender, email);
    //Book book1 (name, newAuthor, price);
    Book book2 (name, newAuthor, price, quantity);

    cout<<"Enter 1 for Novel and 2 for TextBook: ";
    cin>> choice;

    if(choice == 1)
    {
        cout<< "Enter 1 if novel is hard cover else 0: ";
        cin>> cover;
        cout<< "Enter genre and publisher of novel: ";
        cin.get();
        getline(cin,genre);
        cin.get();
        getline(cin,publisher);

        Novel novel (name, newAuthor, price, quantity, cover, genre, publisher);
        cout<< "Information of Textbook: "<<endl<< novel.novelInfo()<< endl;
        cout<< "Total price of novel is: " << novel.getTotalPrice()<< endl;
    }
    else
    {
        cout<< "Enter subject, edition and publisher of book: ";
        cin>> subject;
        cin>>edition;
        cin.get();
        cin>> publisher;

        TextBook text (name, newAuthor, price, quantity, subject, publisher, edition);
        cout<< "Information of Textbook: "<<endl<< text.textBookInfo()<< endl;
        cout<< "Total price of textbook is: " << text.getTotalPrice()<< endl;
    }
    cout<<"Author and book information: "<< endl;
    cout<< book2.toString();

}

