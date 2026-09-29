#pragma once
#include <string>

class Book {
    private:
    std::string title_;
    std::string author_;
    int year_;
    int pages_;

public:
    Book(std::string title, std::string author, int year, int pages);

    const std::string& title() const;
    const std::string& author() const;
    int year() const;
    int pages() const;

    bool isOlderThan(int year) const;

};