#include <iostream>
using namespace std;

int main() {

    string names[5] = {"Ali", "Sara", "Ahmed", "Mona", "Khalid"};
    int ages[5] = {45, 20, 30, 18, 50};

    string key;
    bool found = false;

    cout << "Enter name to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++) {

        if (names[i] == key) {

            cout << key << " was found and is aged "
                 << ages[i] << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found";
    }

    return 0;
}