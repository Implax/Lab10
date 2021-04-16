#include <iostream>
#include "readPoints.cpp"
#include "readLines.cpp"
#include "printLineByCoords.cpp"
#include "getStabbedLine.cpp"


using namespace std;

int main(){
    Point pArray[8];
    Line lArray[5];

    ifstream pointFile;
    ifstream lineFile;

    const int pSize = 8;
    const int lSize = 5;

    int numPoints = 8;
    int numLines = 5;

    int x_val;
    cout << "Type in x-val: ";
    cin >> x_val;

    int digit = x_val;

    readPoints(pointFile, pArray, pSize, numPoints);

    readLines(lineFile, lArray, lSize, numLines);

    Line lineStabbed[5];

    printLineByCoords(0, lArray, lSize, pArray, pSize);

    getStabbedLines (digit, lArray, 5, numLines, pArray, pSize, lineStabbed, 6, numPoints);



}
