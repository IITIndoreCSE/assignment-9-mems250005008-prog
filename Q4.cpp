#include <iostream>
using namespace std;

int main()
{
    struct SalesRecord {
        string month;
        float amount;
    };
    // defined an array called SalesRecord

    SalesRecord record[12];
    // declared an array called record

    cout<< "Enter data, do not leave any data blank!" << endl;
    for (int i = 0; i < 12; i++) {
        cout << "Enter month: ";
        cin >> record[i].month;
        cout << endl << "Enter amount: ";
        cin >> record[i].amount;
        cout << endl;
    }
    // populating the arrays with user input

    float max_amount = record[0].amount, min_amount = record[0].amount;
    string max_month = record[0].month, min_month = record[0].month;
    // these data will store output data, we did not initialise as zero as this may always give output of minimum sales as zero

    for (int i = 0; i < 12; i++) {

        if (record[i].amount > max_amount) {
            max_amount = record[i].amount;
            max_month = record[i].month;
        }
        if (record[i].amount < min_amount) {
            min_amount = record[i].amount;
            min_month = record[i].month;
        }
    }
    //we run through the array and compare each element to the min and max

    cout << "The month with the maximum sales is " << max_month << " with a sales amount of: " << max_amount << endl;
    cout << "The month with the minimum sales is " << min_month << " with a sales amount of: " << min_amount << endl;
    //output

    return 0;
}

