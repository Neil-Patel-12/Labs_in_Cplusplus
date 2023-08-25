////////////////////////
//    Neil Patel      //
//     C++ Lab 1      //
////////////////////////
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    /* Overall flow of the program:
    Get some input for the title
    Get some input for column header #1
    Get some input for column header #2

    Until the user types "-1":
    Get input for a string
    Validate input
    If valid...
        Split
        Validate second half of input
        If also valid...
        Store separate pieces
    Print out data in table format
    Print out data in chart format
    */

    string title;
    string columb1;
    string columb2;

    string input;
    int controle = 1;
    vector <string> main_str;
    vector <int> main_int;

    cout << "Enter a title for the data:" << endl;
    getline(cin, title);
    cout << "You entered: " << title << endl;
    cout << "Enter the column 1 header:" << endl;
    getline(cin, columb1);
    cout << "You entered: " << columb1 << endl;
    cout << "Enter the column 2 header:" << endl;
    getline(cin, columb2);
    cout << "You entered: " << columb2 << endl;

    while (controle == 1) {
        cout << "Enter a data point (-1 to stop input):" << endl;
        getline(cin, input);
        if (input != "-1") {
            int comma = input.find(",");

            // youtube
            int manyC = 0;
            int length = input.length();
            for (int i = 0; i < length; i++) {
                if (input[i] == ',') {
                    manyC++;
                }
            }
            // if (input.substr(comma -1).find(",") != -1)    NOT WORKING RIGHT cout <<
            // {
            //     throw "Error: Too many commas in input";
            // }

            if (manyC > 1) {      // this is wrong, need to fix (done)
                cout << "Error: Too many commas in input." << endl;
            }
            else if (manyC < 1) {
                cout << "Error: No comma in string." << endl;
            }
            else {
                string sep_data;
                sep_data = input.substr(0, comma);
                try {
                    int sep_in;

                    sep_in = stoi(input.substr(comma + 2, input.size()));

                    main_str.push_back(sep_data);
                    main_int.push_back(sep_in);

                    cout << "Data string: " << sep_data << endl;
                    cout << "Data integer: " << sep_in << endl;
                }
                catch (invalid_argument& e) { // youtube
                    cout << "Error: Comma not followed by an integer." << endl;
                }
            }
        }
        else {
            controle = 0;
        }

    }
    int vec_size;
    vec_size = main_str.size();
    // the table setw(20)___setw(1)___setw(23) total (44)
    cout << endl;
    cout << setw(33) << right << title << endl;
    cout << setw(20) << left << columb1 << "|" << setw(23) << right << columb2 << endl;
    cout << setfill('-') << setw(44) << "" << setfill(' ') << endl;  // youtube

    for (int i = 0; i < vec_size; i++) {
        if (main_int[i] <= 0) {
            continue;
        }
        else {
            cout << setw(20) << left << main_str[i] << "|" << setw(23) << right << main_int[i] << endl;
        }
    }


    // histograme (format right) and (int j = 0; j < main_i[i]; j++)
    cout << endl;
    for (int i = 0; i < vec_size; i++) {
        cout << setw(20) << right << main_str[i] << " ";
        for (int j = 0; j < main_int[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
