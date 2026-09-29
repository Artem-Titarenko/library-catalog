#include <iostream>
#include <vector>
#include <locale>
#include "Book.h"
 
using namespace std;

int main() {
    
    setlocale(LC_ALL, "ukr");

    cout << "Варіант 1: Каталог бібліотеки\n";

    vector<Book> items = {
        {"Кобзар", "Тарас Шевченко", 1840, 240},
        {"Тіні забутих предків", "Михайло Коцюбинський", 1911, 128},
        {"Intro to Algorithms", "Thomas Cormen", 1990, 1312},
        {"Clean Code", "Robert Martin", 2008, 464},
    };

    for (const auto& item : items) {
        cout << item.title() << " | " << item.author() << " | "
                << item.year() << " | " << item.pages() << " стор. | "
                << (item.isOlderThan(1950) ? "до 1950" : "після 1950")
                << '\n';
    }
}