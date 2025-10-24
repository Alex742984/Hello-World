#include <iostream>
#include <string>
using namespace std;

int main() {
    string favouriteBook; //variable to store the name of their favourite book
    string authorName; //variable to store the name of their favourite author
    int publishYear; //variable to store the year the book was published
    
    // getline(cin, varName);

    cout << "What is your favourite book?\n"; 
    getline(cin, favouriteBook); //stores the name of their favourite book
    cout << "\nwhat is the authors name?\n";
    getline(cin, authorName); //stores authors name
    cout << "\nwhat is the year that this book was published?\n";
    cin >> publishYear; //stores year the book was published
    
    cout << "\nYour favourite book is " << favouriteBook << " by " << authorName << "\npublish year " << publishYear;
    return 0;
}