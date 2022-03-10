#include <iostream>

void extractingString(std::string s)
{
    for(int i = 0; i < s.length(); i++)
    {
        std::cout << s[i] << " " << (int)s[i] << std::endl;
    }
}
int main()
{
    extractingString("Cat :3 Dog");
    std::cout << " \n";
    extractingString("cat and dog");
    std::cout << " \n";
    extractingString("Dog and car");
    return 0;
}