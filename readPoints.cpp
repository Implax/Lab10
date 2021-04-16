#include <iostream>
#include "stabbingLines.h"
#include <fstream>

using namespace std;

void readPoints(ifstream& inPutPointFile, Point pointsArray[], const int MaxPntsSize, int& numPoints){
    inPutPointFile.open("Points.txt");

    const int array_size = MaxPntsSize;

    int P,x,y;

    Point pt;

    for (int i=0; i < array_size; i++){
        inPutPointFile >> P >> x >> y;

        pt.Pid = P;
        pt.x = x;
        pt.y = y;

        pointsArray[i] = {pt};
    }
    inPutPointFile.close();
}








