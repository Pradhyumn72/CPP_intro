#include<fstream>
#include<iostream>
using namespace std ;
int main()
// {
//     ofstream fout ;
//     fout.open("myfile1.txt");
//     fout<<"hello students";
// }
{
    ifstream fin;
    char ch;
    fin.open("myfile1.dat");
    fin>>ch;
    while(!fin.eof())
    {
        cout<<ch;
        fin>>ch;
    }
    fin.close();
}