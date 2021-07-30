#include <iostream>
#include <string>

int main()
{
	  int guessCount = 0;
    int minNumber = 0;
    int maxNumber = 0;
    int randomNumber = 0;
    std::string input = "";
    bool bIsRunning = true;

    while (bIsRunning)
    {
        std::cout << "***Number guessing game***\n";
        
        // Take input from user
      
        std::cout << "\nEnter the number of guesses: ";
        getline(std::cin, input);
        guessCount = std::stoi(input);

        std::cout << "\nEnter the minimum number: ";
        getline(std::cin, input);
        minNumber = std::stoi(input);

        std::cout << "\nEnter the maximum number: ";
        getline(std::cin, input);
        maxNumber = std::stoi(input);
        
        // Generate random number
      
        srand(unsigned(time(0)));
        randomNumber = rand() % (maxNumber - minNumber + 1) + minNumber;

        // User try to guess the number
      
        for (int i = 0; i < guessCount; ++i)
        {
            int guess = 0;

            std::cout << "\nEnter your guess: ";
            getline(std::cin, input);
            guess = std::stoi(input);

            if (guess == randomNumber)
            {
                std::cout << "\nWell done, you guessed the number!\n";
                break;
            }

            int guessesRemaining = guessCount - (i + 1);

            if (guessesRemaining == 0)
            {
                std::cout << "\nYou have no guesses remaining :(";
                break;
            }

            std::cout << "\nYour guess was too " << (guess < randomNumber ? "low. " : "high. ");
            std::cout << "\nYou have " << guessesRemaining << (guessesRemaining > 1 ? " guesses" : " guess") << " remaining.";
        }

        std::cout << "\nEnter 0 to exit, or any number to play again: ";
        getline(std::cin, input);
        if (std::stoi(input) == 0)
        {
            bIsRunning = false;
        }
    }
}
