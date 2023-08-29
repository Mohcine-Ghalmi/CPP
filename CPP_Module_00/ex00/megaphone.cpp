#include <iostream>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc > 1)
        for (int j = 1; j < argc; j++)
            for (size_t i = 0; i < strlen(argv[j]); i++)
            {
                toupper(argv[j][i]);
                std::cout << argv[j][i];
            }
    else
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return (0);
}