#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fullName, id;
    float grade;

    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter Grade: ";
    cin >> grade;

    ofstream outFile("Student.txt");

    if (outFile.is_open()) {
        outFile << "Full Name: " << fullName << endl;
        outFile << "ID: " << id << endl;
        outFile << "Grade: " << grade << endl;

        outFile.close();
        cout << "Data saved successfully to Student.txt!" << endl;
    } else {
        cout << "Error creating the file!" << endl;
    }

    return 0;
}
