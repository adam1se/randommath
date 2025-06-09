#include <iostream>
#include <random>
#include <string>
using namespace std;

int main() {

    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> num_dist(1, 100);

    uniform_int_distribution<> op_dist(0, 15);

    for (int i = 0; i < 1; ++i) {
        float a = num_dist(gen);
        float b = num_dist(gen);
        float c = num_dist(gen);
        int op = op_dist(gen);
        double  answer;

        string op_symbol;
        string op_symbol2;
        double  result;
        switch (op) {
        case 0:
            op_symbol = " + ";
            op_symbol2 = " / ";

            result = (a + b) / c;
            break;
        case 1:
            op_symbol = " + ";
            op_symbol2 = " * ";

            result = (a + b) * c;
            break;
        case 2:
            op_symbol = " + ";
            op_symbol2 = " - ";

            result = (a + b) - c;
            break;
        case 3:
            op_symbol = " + ";
            op_symbol2 = " + ";

            result = (a + b) + c;
            break;
        case 4:
            op_symbol = " - ";
            op_symbol2 = " / ";

            result = (a - b) / c;
            break;
        case 5:
            op_symbol = " - ";
            op_symbol2 = " * ";

            result = (a - b) * c;
            break;
        case 6:
            op_symbol = " - ";
            op_symbol2 = " - ";

            result = (a - b) - c;
            break;
        case 7:
            op_symbol = " * ";
            op_symbol2 = " + ";

            result = (a * b) + c;
            break;
        case 8:
            op_symbol = " * ";
            op_symbol2 = " / ";

            result = (a * b) / c;
            break;
        case 9:
            op_symbol = " * ";
            op_symbol2 = " * ";

            result = (a * b) * c;
            break;
        case 10:
            op_symbol = " * ";
            op_symbol2 = " - ";

            result = (a * b) - c;
            break;
        case 11:
            op_symbol = " / ";
            op_symbol2 = " + ";

            result = (a / b) + c;
            break;
        case 12:
            op_symbol = " / ";
            op_symbol2 = " / ";

            result = (a / b) / c;
            break;
        case 13:
            op_symbol = " / ";
            op_symbol2 = " * ";

            result = (a / b) * c;
            break;
        case 14:
            op_symbol = " / ";
            op_symbol2 = " - ";

            result = (a / b) - c;
            break;
        case 15:
            op_symbol = " / ";
            op_symbol2 = " + ";

            result = (a / b) + c;
            break;
        }
            cout << "(" << a << op_symbol << b << ")" << op_symbol2 << c << " = ? (chislo)\n";
            cin >> answer;
            if (answer == result)
                cout << "Nice answer. You are good!";
            else {
                cout << "Wrong answer.Try again. 1 of 2 \n";
                cin >> answer;
                if (answer == result)
                    cout << "ok you are right";
                else {
                    cout << "you are so stupid bruh " << result;
                }


            }

        }
        return 0;
    }