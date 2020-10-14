/*
1.   ofstream	Creates and writes to files
2.   ifstream	Reads from files
3.   fstream	A combination of ofstream and ifstream: creates, reads, and writes to files
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
string text;
ofstream now_file("new_file.txt"); //for make a txt file
now_file<<"my name is rajib.\nmy fav colour is skyblue.";
now_file.close();  //for close file
ifstream nfile("new_file.txt"); //for read file
while (getline(nfile,text))   //for print file.
{
    cout<<text;
}

return 0;
}