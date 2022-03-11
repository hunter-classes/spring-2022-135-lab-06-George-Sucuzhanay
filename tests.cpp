#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"


TEST_CASE("Task B: Caesar"){
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}
TEST_CASE("Task C: Vigenere"){
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
}