#include <stdio.h>
#include "iostream"
#define MAXLINE 1000 

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);
using namespace std;
int main()
{
    int myScore = 1000;
    int& mikesScore = myScore;

    cout << "myScore is: " << myScore << "\n";
    cout << "mikesScore is:" << mikesScore << "\n\n";
    cout << "Adding 500 to myScore\n";
    myScore += 500;
    cout <<"myScore is: " << myScore << "\n";
    cout << "myScore is: " << myScore << "\n\n";

    return 0;
}