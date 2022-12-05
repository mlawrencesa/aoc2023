#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string myText;

    ifstream myReadFile("puzzleInput/inputTask1.txt");

    while (getline(myReadFile, myText))
    {
        cout << myText;
    }

    myReadFile.close();
}