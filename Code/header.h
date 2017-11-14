#include <iostream>
#include <random>
#include <string>
using namespace std;
int user_count = 0;
int computer_count = 0;
int randomNo();
void WhoWouldWin(char);
std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}
