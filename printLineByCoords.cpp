#include <iostream>
#include "stabbingLines.h"
#include <fstream>

void printLineByCoords(LineId lid, Line linesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){


  for (int i=0; i < MaxLnsSize; i++){
    // Line coordinates
    int a = linesArray[i].p1;
    int b = linesArray[i].p2;

    // Points
    int x1= pointsArray[a].x;
    int y1= pointsArray[a].y;

    int x2 = pointsArray[b].x;
    int y2 = pointsArray[b].y;

    cout << "LineID: " << i;
    cout << " Coordinates: " << " (" << x1 << "," << y1 <<  "," << x2 << "," << y2 << ")" << endl;
  }
}
