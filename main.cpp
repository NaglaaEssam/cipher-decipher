// Title: Memory Matching Game
#include <iostream>

using namespace std;
const int row=4;
const int col=4;

int main()
{
    char mat[][col]= {{'8','2','3','4'},{'2','8','4','1'},{'3','1','7','5'},{'7','6','6','5'}};
    char arr[row][col]= {{'*','*','*','*'},{'*','*','*','*'},{'*','*','*','*'},{'*','*','*','*'}};
    int var1,var2,var3,var4;
    cout<<" Start Game "<<endl;
    cout<<endl;
    for(int i=0; i<row; i++) //this loop to show star when you start game
    {
        for(int j=0; j<col; j++)
        {

            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0; i<row-2; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<i << j<<"time"<<endl;
            cout<<" Enter first index"<<endl;
            cin>>var1;
            cin>>var2;
            cout<<" Enter second index"<<endl;
            cin>>var3;
            cin>>var4;
            while(mat[var1][var2]!=mat[var3][var4]) //this loop know if two indices not equal ,the stars will shown and you will input new indices until you write right indices
            {
                for(int i=0; i<row; i++)
                {
                    for(int j=0; j<col; j++)
                    {
                        cout<<"*";
                    }
                    cout<<endl;
                }
                cout<<"Enter first index again"<<endl;
                cin>>var1;
                cin>>var2;
                cout<<"Enter second index again"<<endl;
                cin>>var3;
                cin>>var4;

            }
            cout<<endl;
            cout<<"Now the matrix is "<<endl;
            for(int k=0; k<row; k++) //this loop to output the content of second indix plus content of first indix
            {
                for(int m=0; m<col; m++)

                {
                    if((mat[k][m]==mat[var1][var2])&&(mat[k][m]==mat[var3][var4])) //check if the content of two indices are equal
                    {
                        arr[k][m]=mat[var1][var2]; //pass the value from 2d array of numbers to 2d array of stars
                        for(int l=0; l<row; l++)
                        {
                            for(int n=0; n<col; n++)
                            {
                                cout<<arr[l][n]<<" ";  //print content of first indix and the rest will be stars

                            }

                            cout<<endl;
                        }
                        cout<<"////////"<<endl;
                    }

                }
                cout<<endl;

            }

        }
    }
    cout<<" Now the game is finished "<<endl;


    return 0;
}
