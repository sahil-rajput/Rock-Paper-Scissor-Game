#include "header.h"
#include <ctime>
//generate random number
// int randomNo()
// {
//    int rand = 0;
//    int minimum = 0, maximum = 2;
//    random_device rd;
//    mt19937 gen(rd());
//    uniform_int_distribution<> dis(minimum, maximum);
//    rand = dis(gen);
//    //return random number betwwen 0 and 2
//    return rand;
// }

void WhoWouldWin(char choice)
{
    //clear screen.
    cout << "\033[2J\033[1;1H";
    //char array
    char option[3] = {'R', 'P', 'S'};
    int value = 0;
    //initialize with random value
   srand(time(NULL));
    value = rand();
    //0 -> R
    //1 -> P
    //2 -> S
    char com = option[value];
    //If both are equal
    if(com == choice)
    {
        cout <<"\nYou both tied "<<"\t\t\t\tYou : "<<user_count<<" | "<<"Computer : "<<computer_count;
        cout<<"\nYou : "<<choice<<"\tComputer : "<<com<<"\n";
    }
    else if (choice == 'R')
    {
        //Paper beats Rock
        if (com == 'P')
        {
            ++computer_count;
            cout<<"\nYou lose "<<"\t\t\t\tYou : "<<user_count<<" | "<<"Computer : "<<computer_count;
            cout<<"\nYou : "<<choice<<"\tComputer : "<<com<<"\n";
        }
        //Rock beats Scissor
        else
        {
            ++user_count;
            cout<<"\nYou win "<<"\t\t\t\tYou : "<<user_count<<" | "<<"Computer : "<<computer_count;
            cout<<"\nYou : "<<choice<<"\tComputer : "<<com<<"\n";
        }
    }
    else if (choice == 'S')
    {
        //Rock beats Scissor
        if (com == 'R')
        {
            ++computer_count;
            cout<<"\nYou lose "<<"\t\t\t\tYou : "<<user_count<<" | "<<"Computer : "<<computer_count;
            cout<<"\nYou : "<<choice<<"\tComputer : "<<com<<"\n";
        }
        //Scissor beats Paper
        else
        {
            ++user_count;
            cout<<"\nYou win "<<"\t\t\t\tYou : "<<user_count<<" | "<<"Computer : "<<computer_count;
            cout<<"\nYou : "<<choice<<"\tComputer : "<<com<<"\n";
        }
    }
    else if (choice == 'P')
    {
        //Scissor beats Paper
        if (com == 'S')
        {
            ++computer_count;
            cout<<"\nYou lose "<<"\t\t\t\tYou : "<<user_count<<" | "<<"Computer : "<<computer_count;
            cout<<"\nYou : "<<choice<<"\tComputer : "<<com<<"\n";
        }
        //Paper beats Rock
        else
        {
            ++user_count;
            cout<<"\nYou win "<<"\t\t\t\tYou : "<<user_count<<" | "<<"Computer : "<<computer_count;
            cout<<"\nYou : "<<choice<<"\tComputer : "<<com<<"\n";
        }
    }
    //Invalid Choice
    else
    {
        cout<<"\nI'm [S]MART, Enter right choice [ R , P , S ]\n";
    }

}

int main()
{
    char choice;
    char request = 'Z';
    while(request != 'E')
    {
        cout<<"\t\t[R]ock\t[P]aper\t[S]cissor\n";
        cin>>choice;
        choice = toupper(choice);
        WhoWouldWin(choice);
        cout<<"\n\t\t\t\t\tPress [E] for Exit\n";
        request = toupper(choice);
    }
    return 0;
}
