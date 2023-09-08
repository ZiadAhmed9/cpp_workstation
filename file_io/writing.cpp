#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;         // create the stream
    fout.open("text.txt"); // load the file in the ram, if the file is not found it creates it
    fout << "Hello world"; // writing into the file
    fout.close();          // closing the file
    return 0;
}