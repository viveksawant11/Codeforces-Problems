#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        char grid[8][8];
        
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> grid[i][j];
            }
        }
        
        int r=0;
        
        for (int i = 0; i < 8; i++)
        {
            int b = 0;
            
            for (int j = 0; j < 8; j++)
            {
                if (grid[i][j] == 'R')
                    r++;
                else if (grid[i][j] == 'B')
                    b++;
            }
            if (r==8) break;
            else r=0;
        }
        
        if (r==8)
            cout << "R" << endl;
        else 
            cout << "B" << endl;
    }
    
    return 0;
}