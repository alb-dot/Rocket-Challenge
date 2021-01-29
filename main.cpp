#include <iostream>
#include <cstdlib>
#include <cstring>
#include "RocketFunctions.h"

using namespace std;

int main(int argc, char* argv[])
{
    int t = 0; 
    bool inv = false;

    /*The size will be registered with "-l" followed with a value, which will be stored in the parameter "t" as an integer.
    The reverse option will be registered if "-i" is registered.
    */
    for(int i = 1; i < argc; i++)
    {
        if(strcmp(argv[i], "-l") == 0)
        {
            t = atoi(argv[i+1]); //returns 0 if after -l the number is less or equal than 0.
        }
        else if(strcmp(argv[i], "-i") == 0)
        {
            inv = true;
        }
    }

    draw_rocket(t,inv);

    system("pause");
    return 0;
}
