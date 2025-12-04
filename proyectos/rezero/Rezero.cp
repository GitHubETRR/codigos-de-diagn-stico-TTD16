#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

struct Chapter {
    int chapter_number;             
    string title;      
    string filename;    
};

void readfile(const string& File, int reading_velocity){
    ifstream file (File);
    if (!file){
        cout << "This file couln´t be read" << endl;
        return;
    }
    string line;
    while (getline(file, line)){
        cout << line << endl;
        sleep_for(milliseconds(reading_velocity));
    }
    file.close();
}

int main() {

    // Lista de capítulos en estructura
    Chapter chapters[] = {
        {1,  "Prologue",     "prologue.txt"},
        {2,  "Chapter 1",    "chap1.txt"},
        {3,  "Chapter 2",    "chap2.txt"},
        {4,  "Chapter 3",    "chap3.txt"},
        {5,  "Chapter 4",    "chap4.txt"},
        {6,  "Chapter 5",    "chap5.txt"},
        {7,  "Chapter 6",    "chap6.txt"},
        {8,  "Chapter 7",    "chap7.txt"},
        {9,  "Chapter 8",    "chap8.txt"},
        {10, "Chapter 9",    "chap9.txt"},
        {11, "Chapter 10",   "chap10.txt"},
        {12, "Chapter 11",   "chap11.txt"},
        {13, "Chapter 12",   "chap12.txt"},
        {14, "Chapter 13",   "chap13.txt"},
        {15, "Chapter 14",   "chap14.txt"},
        {16, "Chapter 15",   "chap15.txt"},
        {17, "Chapter 16",   "chap16.txt"},
        {18, "Chapter 17",   "chap17.txt"},
        {19, "Chapter 18",   "chap18.txt"},
        {20, "Chapter 19",   "chap19.txt"},
        {21, "Chapter 20",   "chap20.txt"},
        {22, "Chapter 21",   "chap21.txt"},
        {23, "Interlude",    "interlude.txt"}
    };

    int total = 23;

    cout << "---ARC 1---" << endl;
    for (int i = 0; i < total; i++){
        cout << chapters[i].chapter_number << "- " << chapters[i].title << endl;
    }
    cout << endl;

    int decision;
    cin >> decision;

    if (decision < 1 || decision > total){
        cout << "Invalid option" << endl;
        return 0;
    }

    int reading_velocity;
    cout << "Enter the velocity to read between lines (1 Second = 1000)" << endl;
    cin >> reading_velocity;

    Chapter selected = chapters[decision - 1];

    readfile(selected.filename, reading_velocity);

    return 0;
}
