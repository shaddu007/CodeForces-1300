#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<map>
#include<numeric>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int row = 2 * n;
        int col = 2 * n;
        vector<vector<char>> mat(row, vector<char>(col,'.'));

        for (int i = 0; i < row; i++)
        {

            if ((i / 2) % 2 == 0)
            {
                for (int j = 0; j < col; j++)
                {
                    if ((j / 2) % 2 == 0) // Fixed syntax error here
                    {
                        mat[i][j] = '#';
                    }
                }
            }
            else{
                for (int j = 0; j < col; j++)
                {
                    if ((j / 2) % 2 == 1) // Fixed syntax error here
                    {
                        mat[i][j] = '#';
                    }
                }
            }
        }
        for(int i = 0;i<row; i++)
        {
            for(int j = 0 ; j<col ; j++)
            {
                cout<<mat[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
