//
// Created by Asmita Tamang on 2/1/25.
//
#include <iostream>
#include <iomanip>
#include <cstdlib>


using namespace std;

int main() {

    long elapsedSeconds = time(nullptr);
    srand(elapsedSeconds);
    int suitNum = rand() % 4;
    int rankNum = (rand() % 13) + 1;
    string card = " Suit: " + to_string(suitNum) + ", Rank: " + to_string(rankNum);

    cout << left << setw(20) << setfill('-') << "*Casino card: " << right << setw(19) << card << "*" << endl;




    return 0;
}