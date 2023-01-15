#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;
    ifstream in ("text/input.txt");
    if(!in.is_open()) return -1;

    ofstream out ("text/output.txt");
    if(!out.is_open()) return -2;

    while ((getline(in,line))){
        out << line << endl;
        cout << line;
    }
    in.close();
    out.close();
    return 0;
}
