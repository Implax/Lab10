#include <iostream>
#include "stabbingLines.h"

void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize, const int NumLines, Point pointsArray[],
const int MaxPtsSize, Line stabbedLines[], const int MaxStbSize, int& NumOfStbLines){

const int val = xcoord;

stabbedLines[MaxStbSize];

cout << endl;
cout << "Stabbed Lines include: " << endl;
Line ln;

for (int i=0; i<NumLines; i++){

   // Line coordinates
    int a = linesArray[i].p1;
    int b = linesArray[i].p2;

    // Points
    int x1= pointsArray[a].x;
    int y1= pointsArray[a].y;

    int x2 = pointsArray[b].x;
    int y2 = pointsArray[b].y;

    if (x2 >= val){
        if (x1 <= val){
            stabbedLines[i].Lid = linesArray[i].Lid;
            int temp = stabbedLines[i].Lid;
            cout << temp << endl;
        }
    }

}

}
