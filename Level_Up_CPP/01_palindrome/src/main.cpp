#include <iostream>     // std::cout, std::cin, std::endl
#include <string>       // std::string
#include <vector>       // std::vector
#include <algorithm>    // std::remove, std::remove_if, std::equal
#include <cctype>       // isspace
#include <iomanip>      // std::quoted

std::string removeSpaces1(std::string msg)
{
    auto str = std::remove(msg.begin(), msg.end(), ' ');
    msg.erase(str, msg.end());
    return msg;
}

std::string removeSpaces2(std::string msg)
{
    msg.erase(std::remove_if(msg.begin(), msg.end(), [](unsigned char x) { return std::isspace(x); }), msg.end());
    return msg;
}

std::string toLowerCase(std::string msg)
{
    std::transform(msg.begin(), msg.end(), msg.begin(), tolower);
    return msg;
}

bool isPalindrome(const std::string& msg) 
{
    std::string str = removeSpaces2(msg);
    str = toLowerCase(str);

#if 1
    return std::equal(str.cbegin(), str.cbegin() + str.size()/2, str.crbegin());
#else
    int size = str.size();
    for(auto i = 0; i < size/2; i++) 
    {
        if(str[i] != str[size - 1 - i])
        {
            return false;
        }
    }
    return true;
#endif
}

void getFromUser()
{
    std::string msg;
    std::cout << "Entry with the word or phrase to be check if is palindrome or no: ";
    std::getline(std::cin, msg);
    
    std::cout << "The word or phrase is: " << msg << std::endl;

    std::cout << "The word or phrase is palindrome? " << std::boolalpha << isPalindrome(msg) << std::endl;
}

void getFromCode()
{
    std::vector<std::string> msg{"Ana", "blue", "arara", "Sol", "radar", "red car", "luz azul", "blue light"};

    for(auto s : msg)
    {
        std::cout << std::quoted(s) << (isPalindrome(s) ? " is " : "is NOT ") << "a palindrome.\n";
    }
}

int main(void)
{
    getFromCode();

    // getFromUser();

    std::cout << std::endl;
    return 0;
}