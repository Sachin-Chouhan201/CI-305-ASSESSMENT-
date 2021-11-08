/*
C++ Program to Remove all Characters in a String Except Alphabets.
You will learn to remove all characters from a string (string object and C-style string) in this example.

To understand this example, you should have the knowledge of the following C++ programming topics:

C++ Arrays
C++ Strings
C++ for Loop
Example 1: Remove all characters except alphabets
This program takes a string (object) input from the user and removes all characters except alphabets.
*/
#include <iostream>
using namespace std;

int main() {
    string line;
    string temp = "";

    cout << "Enter a string: ";
    getline(cin, line);

    for (int i = 0; i < line.size(); ++i) {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            temp = temp + line[i];
        }
    }
    line = temp;
    cout << "Output String: " << line;
    return 0;
}
Output

Enter a string: p2'r"o@gram84iz./
Output String: programiz
/*
Example 2: Remove all characters except alphabets
This program below takes a string (C-style string) input from the user and removes all characters except alphabets.
*/
#include <iostream>
using namespace std;

int main() {
    char line[100], alphabetString[100];
    int j = 0;
    cout << "Enter a string: ";
    cin.getline(line, 100);

    for(int i = 0; line[i] != '\0'; ++i)
    {
        if ((line[i] >= 'a' && line[i]<='z') || (line[i] >= 'A' && line[i]<='Z'))
        {
            alphabetString[j++] = line[i]; 

        }
    }
    alphabetString[j] = '\0';

    cout << "Output String: " << alphabetString;    
    return 0;
}
Output

Enter a string: P2'r"o@gram84iz./
Output String: Programiz
