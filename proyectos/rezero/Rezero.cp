#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

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
    int decision, a;
    cout << "---ARC 1---" << endl;
    cout << "1- Prologue" << endl;
    for(int i=1;i<22; i++){
        cout << i+1 << "- Chapter " << i << endl;
    }
    cout << "23- Interlude\n" << endl;
    
    cin >> decision;
    
    switch(decision){
        case 1: readfile("prologue.txt", 1000);
                break;
        
        case 23: readfile("interlude.txt", 1000);
                 break;
        
        default:{
            int chapter = decision - 1;
            string chapter_name = "chap" + to_string(chapter) + ".txt";
            readfile(chapter_name, 1000);
            break;
        }
    }
    return 0;
}
