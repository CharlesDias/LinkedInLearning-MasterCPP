#include <iostream>

void fizz_buzz(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            std::cout << "FizzBuzz" << std::endl;
        else if (i % 3 == 0)
            std::cout << "Fizz" << std::endl;
        else if (i % 5 == 0)
            std::cout << "Buzz" << std::endl;
        else
            std::cout << i << std::endl;
    }
}

int main (int argc, char** argv)
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    fizz_buzz(n);

    return 0;
}