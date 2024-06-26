#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int yearPublished;
public:
    
    Book(const std::string& title, const std::string& author, int yearPublished) : 
        title(title), author(author), yearPublished(yearPublished) {
        std::cout << "Constructor called for the book: " << title << std::endl;
    }

   
    ~Book() {
        std::cout << "Destructor called for the book: " << title << std::endl;
    }

    void display() {
        std::cout << "Title: " << title << std::endl<<"Author: " << author <<std::endl <<"Year Published: " << yearPublished << std::endl;
    }
};

int main() {
   
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1925);

   
    book1.display();

    return 0;
}

