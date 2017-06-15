#include "header.h"
//generate random number
int randomNo()
{
    int rand = 0;
   int minimum = 0, maximum = 2;
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> dis(minimum, maximum);
   rand = dis(gen);
   //return random number betwwen 0 and 2
   return rand;
}

void WhoWouldWin(char choice)
{
    //char array
    char option[3] = {'R', 'P', 'S'};
    int value = 0;
    //initialize with random value
    value = randomNo();
    //0 -> R
    //1 -> P
    //2 -> S
    char com = option[value];
    //If both are equal
    if(com == choice)
    {
        cout <<"You both tied\n";
        cout<<"You :"<<choice<<"\tComputer :"<<com<<"\n";
    }
    else if (choice == 'R')
    {
        //Paper beats Rock
        if (com == 'P')
        {
            cout<<"You lose\n";
            cout<<"You :"<<choice<<"\tComputer :"<<com<<"\n";
        }
        //Rock beats Scissor
        else
        {
            cout<<"You win \n";
            cout<<"You :"<<choice<<"\tComputer :"<<com<<"\n";
        }
    }
    else if (choice == 'S')
    {
        //Rock beats Scissor
        if (com == 'R')
        {
            cout<<"You lose\n";
            cout<<"You :"<<choice<<"\tComputer :"<<com<<"\n";
        }
        //Scissor beats Paper
        else
        {
            cout<<"You win\n";
            cout<<"You :"<<choice<<"\tComputer :"<<com<<"\n";
        }
    }
    else if (choice == 'P')
    {
        //Scissor beats Paper
        if (com == 'S')
        {
            cout<<"You lose\n";
            cout<<"You :"<<choice<<"\tComputer :"<<com<<"\n";
        }
        //Paper beats Rock
        else
        {
            cout<<"You win\n";
            cout<<"You :"<<choice<<"\tComputer :"<<com<<"\n";
        }
    }
    else if(choice == 'E' || choice == 'e')
    {
        cout<<"\n\t\tExiting Game\n";
    }
    //Invalid Choice
    else
    {
        cout<<"Enter right choice [ R , P , S ]\n";
    }

}

int main()
{
    char choice = 'Z';
    while(choice != 'E')
    {
        cout<<"\t\t[R]ock\t[P]aper\t[S]cissor\n";
        cin>>choice;
        choice = toupper(choice);
        WhoWouldWin(choice);
        choice = toupper(choice);
    }
    return 0;
}
