#include<iostream>
#include<fstream>

using namespace std;

int main()
{   
    int row = 4;
    int col = 4;
    
    int myArray[row][col];

    //Opening the file
    ifstream inputfile("2dinput.txt");
    
    if (!inputfile.is_open()) 
    cout<<"Error opening file" ;

    //Defining the loop for getting input from the file
    
    for (int r = 0; r < row; r++) //Outer loop for rows
    {
        for (int c = 0; c < col; c++) //inner loop for columns
        {
          inputfile >> myArray[r][c];  //Take input from file and put into myArray
        }
    }

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cout << myArray[r][c] << "\t";
        }
        cout<<endl;
    }
}