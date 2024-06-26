#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int yearPublished;

public:
  
    Book(const std::string& bookTitle, const std::string& bookAuthor, int publicationYear) : title(bookTitle), author(bookAuthor), yearPublished(publicationYear) {
        std::cout << "Book object created: " << title << " by " << author << ", Year Published: " << yearPublished << std::endl;
    }

    ~Book() {
        std::cout << "Book object destroyed: " << title << " by " << author << ", Year Published: " << yearPublished << std::endl;
    }

    void displayInfo() {
        std::cout << "Title: " << title << ", Author: " << author << ", Year Published: " << yearPublished << std::endl;
    }
};

int main() {
    Book book1("To Kill a Mockingbird", "Harper Lee", 1960);
    Book book2("1984", "George Orwell", 1949);
    book1.displayInfo();
    book2.displayInfo();

    return 0;
}
