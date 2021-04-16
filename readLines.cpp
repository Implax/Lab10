#include <iostream>
#include "stabbingLines.h"
#include <fstream>

void readLines(ifstream& inPutLineFile, Line linesArray[], const int MaxLnsSize, int& numLines){

    inPutLineFile.open("Lines.txt");

    const int array_size = MaxLnsSize;

    int L, p1, p2;

    Line ln;

    for (int i=0; i < array_size; i++){
        inPutLineFile >> L >> p1 >> p2;

        ln.Lid = L;
        ln.p1 = p1;
        ln.p2 = p2;

        linesArray[i] = {ln};
    }
    inPutLineFile.close();
}
