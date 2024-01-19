#include<iostream>
using namespace std;

int main()
{
    
    int matrix[5][5];
    int center_i=5/2;
    int center_j=5/2;
    int one_i=0;
    int one_j=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
           if(matrix[i][j]==1)
            {
                one_i=i;
                one_j=j;
            }
        }
    }     
    int result=0;
    result=abs(one_i-center_i)+abs(one_j-center_j);
    cout<<result<<endl;
    return 0;
}