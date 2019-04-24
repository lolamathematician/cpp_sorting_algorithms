#include <iostream>

int main()
{
    const int length(9);
    int anArray[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    int currentElement{0};

    for (int index{0}; index < length - 1; ++index)
    {
        if (anArray[index] > anArray[index + 1])
        {
            std::swap(anArray[index], anArray[index + 1]);
        }
        for (int index{0}; index < length - 1; ++index)
        {
            std::cout << anArray[index];
        }
        std::cout << '\n';
    }

    return 0;
}



























