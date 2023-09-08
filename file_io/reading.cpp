#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream fin;   //create a stream of the type ifstream
    fin.open("text.txt");       //open a file
    char ch;    //acts like a buffer
    fin>>ch;        //save the stream first character to the buffer
    while(!fin.eof())   //while we didn't reach eof (end of file)
    {
        cout<<ch;       //cout the character
        fin>>ch;        //load the next character
    }
    fin.close();        //close the file

    return 0;
}