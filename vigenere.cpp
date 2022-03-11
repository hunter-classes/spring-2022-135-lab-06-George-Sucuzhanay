#include <iostream>
#include "funcs.h"
#include "vigenere.h"

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
    // similar to encryptCaesar
    // will do a while loop
    std::string result = "";
    int i = -1;
    int index = -1;

    while(plaintext[++i])
    {
        if(!isalpha(plaintext[i]))
        {
            result = result + plaintext[i];
        }
        else
        {
            result = result + shiftChar(plaintext[i], charIndex(keyword[++index % keyword.length()]));
        }
    }
    return result;
}
