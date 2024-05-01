#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int i,j;
        char RB[8][8];
        for (i = 0; i < 8; i++)
        {
            for ( j = 0; j <8; j++)
            {
                cin  >>RB[i][j];
            }
        }
        bool red = true,blue=true;
        for (int i = 0; i < 8; i++)
        {
            red = true;
            blue = true;
            for(int j = 0 ;j<8;j++)
            {
                if(RB[i][j]!= 'R')
                {
                    red = false;
                }
                if(RB[j][i]!= 'B')
                {
                    blue = false;
                }
            }
            if(red||blue)
            {
                break;
            }
        }
        if(red)
        {
            cout << "R" << endl;
        }
        else if(blue)
        {
            cout << "B" << endl;
        }
    }
    return 0;
}
