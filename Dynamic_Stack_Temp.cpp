//
// Created by Alexandro I. Milanez on 9/27/22.
//

#include<iostream>
#include<fstream>
#include "stack.h"
using namespace std;
// main method
int main()
{
    Stack<char> stack;
    string fileName = "test.txt";
    ifstream inp(fileName.c_str());

    cout << "Sending data from test.txt into stack\n\n";
    char ch;
    while (inp >> noskipws >> ch)
    {
        cout << ch; // Or whatever
        stack.push(ch);
    }
    inp.close();

    ofstream out("out.txt");
    string top = "";
    cout << "\nWriting data to out.txt\n\n";

    while (!stack.isEmpty())
    {
        top = stack.pop();
        cout << top;
        out << top;
    }
    out.close();
    return 0;
}
