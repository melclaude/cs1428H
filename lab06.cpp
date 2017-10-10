//Doesn't work


#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    //NUMBER OF ROWS AND COLUMNS
    const int ROWS = 10;
    const int COLS = 10;
    char life[ROWS][COLS];
    char copy[ROWS][COLS];

    //RANDOM NUMBER GENERATOR TO CREATE INITIAL GENERATION
    srand (time(NULL));
    int cell;

    for(int r=0; r<ROWS; r++)
    {
        for(int c =0; c<COLS; c++)
        {
            cell = rand() % 7;
            if(cell >= 5)
            {
                life[r][c] = '*';
            }
            else
            {
                life[r][c]=' ';
            }
        }
    }

    int generations;
    cout << "How many generations will there be: " << endl;
    cin >> generations;

    for(int i=0; i<generations; i++)
        cout << "Gen #" << i <<endl;
    for(int r=0; r <ROWS; r++)
    {
        for(int c=0; r <COLS; c++)
        {
            cout << life[r][c]<< " ";
        }
        cout << endl;
    }

    int cellCount=0;
    for(int r=0; r <ROWS; r++)
    {
        for(int c=0; r <COLS; c++)
        {
            if(r-1 >= 0 && c-1 >=0 && life[r-1][c-1] == '*')
                cellCount++;
            if(r+1 < 10 && c+1 <=10 && life[r+1][c+1] == '*')
                cellCount++;
            if(c+1<10 && life[r][c+1] == '*')
                cellCount++;
            if(r+1 < ROWS && life[r+1][c] == '*')
                cellCount++;
            if(r-1 >= 0 && life[r-1][c] == '*')
                cellCount++;
            if(c-1 >=0 && life[r][c-1] == '*')
                cellCount++;
            if(c+1 < COLS && life[r][c+1] == '*')
                cellCount++;

        }

    }


    for(int r=0; r <ROWS; r++)
    {
        for(int c=0; r <COLS; c++)
        {
            if (cellCount)< 2)
                copy[r][c]=' ';
            else if (cellCount) == 2)
                copy[r][c] = life[r][c];
            else if (cellCount) == 3)
                copy[r][c]= '*';
            else
                copy[r][c]=' ';
                    }
}


for(int r=0; r <ROWS; r++)
    {
        for(int c=0; r <COLS; c++)
        {
            life[r][c] = copy[r][c];
        }
    }

    return 0;

}
