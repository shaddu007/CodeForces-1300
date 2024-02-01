 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 #include<math.h>
 #include<map>
 using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> matrix(n, std::vector<char>(m, 0));
    for(int i = 0;i<n;i++)
    {
        for(int j = 0 ; j<m;j++)
        {
            cin>>matrix[i][j];
            
                if(matrix[i][j]=='.')
                {
                    if((j+i) %2 ==0)matrix[i][j] = 'B';
                    else matrix[i][j] = 'W';
                }
            
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0 ; j<m;j++)
        {
            
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}   

