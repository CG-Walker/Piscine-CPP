#include <iostream>

int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1 ; i < argc ; i++)
    {
        for (int c = 0 ; argv[i][c] ; c++)
            std::cout << (char)toupper(argv[i][c]);
    }
    std::cout << std::endl;
    return 0;
}
