#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix(3, vector<int>(3, 1));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            x=x%2;
            if (x % 2 == 1)
            {
                matrix[i][j] = abs(matrix[i][j] - 1);
                if (i + 1 < 3 && matrix[i + 1][j] == 1) matrix[i + 1][j] = 0;   
                else if(i + 1 < 3 && matrix[i + 1][j] == 0) matrix[i + 1][j] = 1;
                if (i - 1 >= 0 && matrix[i - 1][j] == 1) matrix[i - 1][j] = 0;
                else if (i - 1 >= 0 && matrix[i - 1][j] == 0) matrix[i - 1][j] = 1;
                    
                if (j + 1 < 3 && matrix[i][j + 1] == 1) matrix[i][j + 1] = 0;
                else if (j + 1 < 3 && matrix[i][j + 1] == 0) matrix[i][j + 1] = 1;
                    
                if (j - 1 >= 0 && matrix[i][j - 1] == 1) matrix[i][j - 1] = 0;
                else if (j - 1 >= 0 && matrix[i][j - 1] == 0) matrix[i][j - 1] = 1;
                    
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}