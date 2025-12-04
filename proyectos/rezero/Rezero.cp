#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

class Book {
public:
    struct Chapter {
        int number;
        string title;
        string filename;

        void read(int reading_velocity) const {
            ifstream file(filename);
            if (!file) {
                cout << "This file couldn't be read" << endl;
                return;
            }

            string line;
            while (getline(file, line)) {
                cout << line << endl;
                sleep_for(milliseconds(reading_velocity));
            }
        }
    };

private:
    Chapter chapters[23];
    int total = 23;

public:
    Book() {
        chapters[0] = {1, "Prologue", "prologue.txt"};
        chapters[1] = {2, "Chapter 1", "chap1.txt"};
        chapters[2] = {3, "Chapter 2", "chap2.txt"};
        chapters[3] = {4, "Chapter 3", "chap3.txt"};
        chapters[4] = {5, "Chapter 4", "chap4.txt"};
        chapters[5] = {6, "Chapter 5", "chap5.txt"};
        chapters[6] = {7, "Chapter 6", "chap6.txt"};
        chapters[7] = {8, "Chapter 7", "chap7.txt"};
        chapters[8] = {9, "Chapter 8", "chap8.txt"};
        chapters[9] = {10, "Chapter 9", "chap9.txt"};
        chapters[10] = {11, "Chapter 10", "chap10.txt"};
        chapters[11] = {12, "Chapter 11", "chap11.txt"};
        chapters[12] = {13, "Chapter 12", "chap12.txt"};
        chapters[13] = {14, "Chapter 13", "chap13.txt"};
        chapters[14] = {15, "Chapter 14", "chap14.txt"};
        chapters[15] = {16, "Chapter 15", "chap15.txt"};
        chapters[16] = {17, "Chapter 16", "chap16.txt"};
        chapters[17] = {18, "Chapter 17", "chap17.txt"};
        chapters[18] = {19, "Chapter 18", "chap18.txt"};
        chapters[19] = {20, "Chapter 19", "chap19.txt"};
        chapters[20] = {21, "Chapter 20", "chap20.txt"};
        chapters[21] = {22, "Chapter 21", "chap21.txt"};
        chapters[22] = {23, "Interlude",  "interlude.txt"};
    }

    void showMenu() const {
        cout << "---ARC 1---" << endl;
        for (int i = 0; i < total; i++) {
            cout << chapters[i].number << "- " << chapters[i].title << endl;
        }
        cout << endl;
    }

    void readChapter(int index, int velocity) const {
        chapters[index].read(velocity);
    }

    int getTotal() const { return total; }
};

int main() {

    Book book;

    book.showMenu();

    int decision;
    cin >> decision;

    if (decision < 1 || decision > book.getTotal()) {
        cout << "Invalid option" << endl;
        return 0;
    }

    int reading_velocity;
    cout << "Enter the velocity to read between lines (1 Second = 1000)" << endl;
    cin >> reading_velocity;

    book.readChapter(decision - 1, reading_velocity);

    return 0;
}
