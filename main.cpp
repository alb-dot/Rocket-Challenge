#include <iostream>
# include <cstdlib>
# include <cstring>

using namespace std;

/* Different functions has been made for a specific part of the rocket since most part of the code from the
straight rocket orientation can be reused for the reversed orientation.
*/

/*
FUNCTION spike generates the spike of the rocket.
Parameter "t" is the size of the rocket.
*/
void spike(int t) 
{   
    /*
    Spike
    Fill with empty spaces until meeting the center of the rocket.
    */

    for(int s=1;s<=t-1;s++) 
    {
        cout<<" ";
    }

    cout<<"|"<<endl;
}

/*
Function rocket_body generates the body of the rocket in a triangular shape. 
The number of rows will be determined according to the input value.
Parameter "t" is the size of the rocket.
*/
void rocket_body(int t)
{
    /*
    Body
    Fill with "X" each row knowing the following patterns:
    1-The numbers of "X" symbols in each row are odd. The first row starts with 1 "X" symbol.
    2-Each consecutive jump in each row, we add two more "X" symbols.
    3-Therefore, we can determine the succession to obtain the number of X symbols in each row: (2*r-1), where "r" is the row.
    
    Nested loops has been applied to solve this process.
    */
    for(int r=1;r<=t;r++)
    {
        for(int c=t-1;c>=r;c--)
        {
            cout<<" ";
        }
        for(int x=1;x<=(2*r-1);x++) 
        {
            cout<<"X";
        }
        cout<<"\n";
    }
}

/*
FUNCTION r_rocket_body generates the body of the rocket in a reversed triangular shape.
Parameter "t" is the size of the rocket.
*/
void r_rocket_body(int t)
{
    /*Body
    Follows the same rule as the FUNCTION rocket_body.
    Just changes one line of code to turn it upside-down.
    */
    for(int r=t;r>=1;r--)
    {
        for(int c=t-1;c>=r;c--)
        {
            cout<<" ";
        }
        for(int x=1;x<=(2*r-1);x++)
        {
            cout<<"X";
        }
        cout<<"\n";
    }
}

/*
FUNCTION feet generates the three feet of the rocket.
Parameter "t" is the size of the rocket.
*/
void feet(int t)
{
    /*Feet
    Fill with "X" symbols on the far left, center and far right spot of the rocket.
    1-Far left is the first column
    2-Center column is the same as the value of "t" which is the total number of rows of rocket body
    3-Far right is the last column. It can be obtained with the succession from the Body: (2*t-1)
    */
    for(int f=1;f<=(2*t-1);f++)
    {
        if(f==1 || f==t || f== (2*t-1))
        {
            cout<<"X";
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<"\n";

}
/* 
FUNCTION s_draw_rocket draws the complete picture of the rocket straight.
It groups the corresponding functions in the corresponding order:
1-Spike (top)
2-Body (middle)
3-Feet (bottom)
Parameter "t" is the size of the rocket.
*/
void s_draw_rocket(int t)
{
    spike(t);
    rocket_body(t);
    feet(t);
}

/* 
FUNCTION r_draw_rocket draws the complete picture of the rocket reversed.
It groups the corresponding functions in the corresponding order:
1-Feet (top)
2-Body (middle)
3-Spike(bottom)
Parameter "t" is the size of the rocket.
*/
void r_draw_rocket(int t)
{
    feet(t);
    r_rocket_body(t);
    spike(t);
}

/*
FUNCTION draw_rocket draws the rocket on the desired orientation by the user. Depending on the logic of "inv"
it will draw a straight or reversed rocket.
Parameter "t" is the size of the rocket.
*/
void draw_rocket(int t, bool inv)
{
    if(inv)
    {
        r_draw_rocket(t);
    }
    else
    {
        s_draw_rocket(t);
    }
}


int main(int argc, char* argv[])
{
    int t=0; 
    bool inv = false;

    /*The size will be registered with "-l" followed with a value, which will be stored in the parameter "t" as an integer.
    The reverse option will be registered if "-i" is registered.
    */
    for(int i=1; i<argc;i++)
    {
        if(strcmp(argv[i],"-l")==0)
        {
            t=atoi(argv[i+1]); //returns 0 if after -l the number is less or equal than 0.
        }
        else if(strcmp(argv[i],"-i")==0)
        {
            inv=true;
        }
    }

    draw_rocket(t,inv);

    system("pause");
    return 0;
}
