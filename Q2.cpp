#include <iostream>
using namespace std;

void invert (int &R,int &G,int &B)
{
    R = 255-R;
    G = 255-G;
    B = 255-B;
};

int main()
{
    struct colour {
        int red, green, blue;
    };
    //defined a struct called colour

    colour prettyColours[5];
    //declared a struct array called prettyColours

    prettyColours[0].red = 0;
    prettyColours[0].green = 139;
    prettyColours[0].blue = 139;
    //dark teal

    prettyColours[1].red = 64;
    prettyColours[1].green = 224;
    prettyColours[1].blue = 208;
    //turquoise

    prettyColours[2].red = 216;
    prettyColours[2].green = 191;
    prettyColours[2].blue = 216;
    //thistle

    prettyColours[3].red = 188;
    prettyColours[3].green = 143;
    prettyColours[3].blue = 143;
    //rosy brown

    prettyColours[4].red = 112;
    prettyColours[4].green = 128;
    prettyColours[4].blue = 144;
    //slate gray

    for (int i = 0; i < 3; i++) {
    invert(prettyColours[i].red, prettyColours[i].green, prettyColours[i].blue);
    }
    //inverts first three colours

    for (int i = 0; i < 5; i++) {
        cout <<"colour " << i << ": ("<< prettyColours[i].red << " , " << prettyColours[i].green << " , " << prettyColours[i].blue << ")" << endl;
    }
    //prints out colours

    return 0;
}

