#include <iostream>
using namespace std;

int main()
{

    struct item {
        int id;
        float cost;
    };
    //defined a struct named item

    item itemArr[6];
    //declared a struct array

    

    itemArr[0].id = 1;
    itemArr[0].cost = 24;

    itemArr[1].id = 2;
    itemArr[1].cost = 80;

    itemArr[2].id = 3;
    itemArr[2].cost = 30;

    itemArr[3].id = 4;
    itemArr[3].cost = 52;

    //initialised the first four structs

    

    for (int i =0 ; i<6 ; i++) {
        if (itemArr[i].cost > 50) {
            cout<<"item id: "<<itemArr[i].id<<endl<<"item cost: "<<itemArr[i].cost<<endl;
        }
    }
    //ran a for loop and gave details of all items that cost above fifty

    return 0;
}

