#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int count=0;

// Function to generate computer's choice
string generateComputerChoice() 
{
    int randomNum = rand() % 3;
    if (randomNum == 0)
        return "rock";
    else if (randomNum == 1)
        return "paper";
    else if(randomNum == 2)
        return "scissors";
}

// Function to determine the winner
string determineWinner(string userChoice, string computerChoice) 
{
    if (userChoice == computerChoice)
        return "It's a tie!";
        
    else if ((userChoice == "rock" && computerChoice == "scissors") ||
             (userChoice == "paper" && computerChoice == "rock") ||
             (userChoice == "scissors" && computerChoice == "paper"))
    {
        count=count+1;	
        return "\nYou win!";
	}
    
	else
        return "\nComputer wins!";
}

int main() 
{
	char playAgain;
    srand(time(nullptr)); //random number generator

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout<<"Press 'x' to exit."<<endl;

    
    do {
        cout << "\nEnter your choice (rock, paper, or scissors): ";
        string userChoice;
        cin >> userChoice;

        // Check if the user wants to exit
        if (userChoice == "x")
            break;

        // Validate user input
        if (userChoice != "rock" && userChoice != "paper" && userChoice != "scissors") 
		{
            cout << "Invalid choice! Please enter either rock, paper, or scissors." << endl;
            continue;
        }

        // Generate computer's choice
        string computerChoice = generateComputerChoice();

        cout << "You chose: " << userChoice << endl;
        cout << "Computer chose: " << computerChoice << endl;

        // Determine the winner
        cout << determineWinner(userChoice, computerChoice) << endl;
        
        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;

    } while (playAgain != 'n' && playAgain != 'N');
    
    cout<<"\nScore = "<<count;
    cout << "\nThanks for playing!" << endl;

    return 0;
}
