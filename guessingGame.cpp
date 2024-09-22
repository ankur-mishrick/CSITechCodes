#include<iostream>
#include<ctime>
#include<conio.h>

int main()
{
    int guess,attempts = 0;

    srand(time(NULL));                 //initialising the seed for the random function...
    int num = (rand() % 100) + 1;

    std::cout << "**********Guessing Game**********\n\n";

    do
    {
        std::cout << "Enter a number within the range (1 to 100): ";
        std::cin >> guess;
        attempts++;
        if(guess > num)
        {
            std::cout << "Too high!\n";
        }
        else if(guess < num)
        {
            std::cout << "Too low!\n";
        }
        else
        {
            std::cout << "CORRECT! You win!\n" << "Number of attempts: " << attempts;
        }
    }while(guess != num);
    
    std::cout << "\n\n**********************************";

    getch();
    return 0;
}