#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string name [20];
    string ids[20];
    string phones[20];

    for (int i = 0; i < 20; i++){

        cout << "Nhap SV thu " << i + 1 << endl;

        cout << "Ten sinh vien: ";
        getline (cin, name[i]);

        cout << "ID sinh vien: ";
        getline (cin, ids[i]);

        cout << "SDT sinh vien: ";
        getline (cin, phones[i]);
    }

    cout << "=====STUDENT LIST=====" << endl;
    for (int i = 0; i < 20; i++){

        cout << "Sinh vien " << i + 1 << endl;

        cout << "Ten      :" << name[i] << endl;

        cout << "ID       :" << ids[i] << endl;

        cout << "SDT      :" << phones[i] << endl;
    }

    return 0;
}

