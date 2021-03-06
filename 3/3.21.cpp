// 3.21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

void printVector (vector<int> v) {
    cout << "The size of the vector is: " << endl;
    cout << v.size() << endl;
    cout << "The contents of the vector are: " << endl;
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl << endl;
}

void printVector(vector<string> v) {
    cout << "The size of the vector is: " << endl;
    cout << v.size() << endl;
    cout << "The contents of the vector are: " << endl;
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl << endl;
}

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{ 10 };
    vector<int> v5{ 10, 42 };
    vector<string> v6{ 10 };
    vector<string> v7{ 10, "hi" };
    printVector(v1);
    printVector(v2);
    printVector(v3);
    printVector(v4);
    printVector(v5);
    printVector(v6);
    printVector(v7);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
