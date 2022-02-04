#include <iostream>

#include <fstream>

using namespace std;

int main()

{

    ofstream f1;

    f1.open("test");

    f1 << "Hello World";

    f1.close();

    fstream f2;

    f2.open("test9.txt", ios::in | ios::trunc | ios::out);

    cout << f2.tellg();

    f2 << "jk";

    f2.close();

    return 0;
}