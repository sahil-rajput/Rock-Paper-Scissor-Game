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
        cout <<bold_on<<"\n\t\t\tYou both tied \n"<<bold_off;
        cout<<bold_on<<"\tYou : "<<bold_off<<user_count<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<computer_count;
        cout<<bold_on<<"\n\tYou : "<<bold_off<<choice<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<com<<"\n";
    }
    else if (choice == 'R')
    {
        //Paper beats Rock
        if (com == 'P')
        {
            ++computer_count;
            cout<<bold_on<<"\n\t\t\tYou lose \n"<<bold_off;
            cout<<bold_on<<"\tYou : "<<bold_off<<user_count<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<computer_count;
            cout<<bold_on<<"\n\tYou : "<<bold_off<<choice<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<com<<"\n";
        }
        //Rock beats Scissor
        else
        {
            ++user_count;
            cout<<bold_on<<"\n\t\t\tYou win \n"<<bold_off;
            cout<<bold_on<<"\tYou : "<<bold_off<<user_count<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<computer_count;
            cout<<bold_on<<"\n\tYou : "<<bold_off<<choice<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<com<<"\n";
        }
    }
    else if (choice == 'S')
    {
        //Rock beats Scissor
        if (com == 'R')
        {
            ++computer_count;
            cout<<bold_on<<"\n\t\t\tYou lose \n"<<bold_off;
            cout<<bold_on<<"\tYou : "<<bold_off<<user_count<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<computer_count;
            cout<<bold_on<<"\n\tYou : "<<bold_off<<choice<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<com<<"\n";
        }
        //Scissor beats Paper
        else
        {
            ++user_count;
            cout<<bold_on<<"\n\t\t\tYou win \n"<<bold_off;
            cout<<bold_on<<"\tYou : "<<bold_off<<user_count<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<computer_count;
            cout<<bold_on<<"\n\tYou : "<<bold_off<<choice<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<com<<"\n";
        }
    }
    else if (choice == 'P')
    {
        //Scissor beats Paper
        if (com == 'S')
        {
            ++computer_count;
            cout<<bold_on<<"\n\t\t\tYou lose \n"<<bold_off;
            cout<<bold_on<<"\tYou : "<<bold_off<<user_count<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<computer_count;
            cout<<bold_on<<"\n\tYou : "<<bold_off<<choice<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<com<<"\n";
        }
        //Paper beats Rock
        else
        {
            ++user_count;
            cout<<bold_on<<"\n\t\t\tYou win \n"<<bold_off;
            cout<<bold_on<<"\tYou : "<<bold_off<<user_count<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<computer_count;
            cout<<bold_on<<"\n\tYou : "<<bold_off<<choice<<"\t\t   | \t\t"<<bold_on<<"Computer : "<<bold_off<<com<<"\n";
        }
    }
    //Invalid Choice
    else if(choice!='E' || choice == 'e')
    {
        cout<<bold_on<<"\n\t\t\tI'm [S]MART, Enter right choice [ R , P , S ]\n"<<bold_off;
    }

}

int main()
{
    char choice;
    char request = 'Z';
    while(request != 'E')
    {
        cout<<"\t\t"<<bold_on<<"[R]"<<bold_off<<"ock\t"<<bold_on<<"[P]"<<bold_off<<"aper\t"<<bold_on<<"[S]"<<bold_off<<"cissor";
        cout<<"\t"<<bold_on<<"[E]"<<bold_off<<"xit\n";
        cin>>choice;
        choice = toupper(choice);
        WhoWouldWin(choice);
        request = toupper(choice);
    }
    return 0;
}
