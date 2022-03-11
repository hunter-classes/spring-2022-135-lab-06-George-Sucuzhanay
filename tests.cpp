#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"


TEST_CASE("Task B: Caesar"){
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("WAY TO GO!", 5) == "BFD YT LT!");
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}
TEST_CASE("Task C: Vigenere"){
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("Hello, World!", "CaKe") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("Hello, World!", "CAKE") == "Jevpq, Wyvnd!");

}
TEST_CASE("Task D: Encryption with Caeser"){
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
}
TEST_CASE("Task D: Encryption with Vigenere"){
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "CAKE") == "Hello, World!");
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "caKe") == "Hello, World!");
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "CakE") == "Hello, World!");
}