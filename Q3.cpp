#include <iostream>
using namespace std;

int main()
{
    struct point {
        int x,y;
    };
    //defined a struct called point

    point p[7];
    //declared an array of points called p

    cout<<"Enter the coordinates" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Enter abscissa for point" << i+1<<": ";
        cin >> p[i].x;
        cout << endl << "Enter ordinate for point" << i+1<<": ";
        cin >> p[i].y;
        cout << endl;
    }
    //populating the array with user input

    int quadI = 0;
    for (int i = 0; i < 7; i++) {
        if (p[i].x>0 && p[i].y>0) {
            quadI = quadI + 1;
        }
    }
    //finding number of points in first quadrant

    cout <<"The number of points in first quadrant are: " << quadI << endl;
    //displaying results

    return 0;
}

