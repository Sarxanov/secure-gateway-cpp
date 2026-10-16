
#include <iostream>
using namespace std;

int main() {
    int num;
    int score;

    cout << "| SECURE GATEWAY |" << endl;
    cout << endl;
    cout << "1. Admin" << endl;
    cout << "2. Analyst" << endl;
    cout << "3. Guest" << endl;

    cout << "Select your role: ";
    cin >> num;

    cout << "Write your score: ";
    cin >> score;

    if (score > 100 || score < 0) {
        cout << "INVALID SCORE" << endl;
    }
    else {
        switch (num) {
            case 1:
                if (score >= 80) {
                    cout << "ACCESS GRANTED: Admin" << endl;
                }
                else {
                    cout << "ACCESS DENIED" << endl;
                }
                break;

            case 2:
                if (score >= 60) {
                    cout << "ACCESS GRANTED: Analyst" << endl;
                }
                else {
                    cout << "ACCESS DENIED" << endl;
                }
                break;

            case 3:
                if (score >= 40) {
                    cout << "ACCESS GRANTED: Guest" << endl;
                }
                else {
                    cout << "ACCESS DENIED" << endl;
                }
                break;

            default:
                cout << "UNKNOWN ROLE" << endl;
                break;
        }
    }

    return 0;
}
