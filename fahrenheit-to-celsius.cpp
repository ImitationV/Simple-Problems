#include <iostream>

int main()
{
    double temp;
    int input;

    std::cout << "Press 1 to convert to Celcius\n";
    std::cout << "Press 2 to convert to Farenheit\n";
    std::cout << "Enter your input (1 or 2): ";
    std::cin >> input;
    std::cout << "Enter a temperature: ";
    std::cin >> temp;

    while (!(input == 1 || input == 2))
    {
        std::cout << "Wrong Input!(Exit: 0) Enter 1 or 2 : ";
        std::cin >> input;
        if (input == 0)
        {
            std::cout << "Exiting program.....";
            exit(0);
        }
    }
    if (input == 1)
    {
        std::cout << "\nThe temperature in Celcius is " << (temp - 32) * 5 / 9 << std::endl;
        ;
    }
    else if (input == 2)
    {
        std::cout << "\nThe temperature in Farenheit is " << ((9 / 5) * temp) + 32 << std::endl;
    }
    return 0;
}