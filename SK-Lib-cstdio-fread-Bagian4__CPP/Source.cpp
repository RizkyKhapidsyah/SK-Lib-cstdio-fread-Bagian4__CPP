#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <fstream>
#include <vector>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    std::ofstream("test.txt") << 1 << ' ' << 2 << '\n';
    std::FILE* f = std::fopen("test.txt", "r");

    std::vector<char> buf(4);
    std::fread(&buf[0], sizeof buf[0], buf.size(), f);

    for (char n : buf) {
        std::cout << n;
    }
        
    std::vector<std::string> buf2; 

    _getch();
    return 0;
}