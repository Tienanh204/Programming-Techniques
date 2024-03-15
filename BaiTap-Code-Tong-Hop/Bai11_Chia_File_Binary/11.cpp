
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include <direct.h> 
#include <stdlib.h>

using namespace std;

void CopyFile(const string& sourcePath, const string& destinationPath) 
{
    ifstream sourceFile(sourcePath, ios::binary);
    if (!sourceFile) 
    {
        cout << "Khong the mo tap tin nguon." << endl;
        return;
    }

    sourceFile.seekg(0, ios::end);
    int n = sourceFile.tellg();
    sourceFile.seekg(0, ios::end);

    string nameFileCopy = destinationPath + ".Copy";

    ofstream copyFile(nameFileCopy, ios::binary);

    if (!copyFile)
    {
        cout << "Khong the tao tap tin dich." << endl;
        return;
    }
    char* Temp = new char[n];
    sourceFile.read((char*)Temp, n);
    copyFile.write((char*)Temp, n);
    delete[]Temp;

    cout << "Sao chep tep thanh cong." << endl;

    sourceFile.close();
    copyFile.close();
}

int main(int argc, char* argv[]) {
    if (argc != 3)
    {
        cout << "Tham so kgong hop le" << endl;
        return 0;
    }

    string source = argv[1];

    string destination = argv[2];

    CopyFile(source, destination);
}


