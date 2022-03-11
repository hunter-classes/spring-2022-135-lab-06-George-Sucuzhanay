#include <iostream>
#include "caesar.h"
#include "funcs.h"

std::string encryptCaesar(std::string plaintext, int rshift)
{
    std::string s = "";
    int i = -1;
    while(plaintext[++i])
    {
        s = s + shiftChar(plaintext[i], rshift);
    }
    return s;
    // return "hello world!";
}
