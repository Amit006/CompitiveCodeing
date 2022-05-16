#include <iostream>
#include <array>
#include <sstream>

using namespace std;

void Display(int arr[50][50]);
void ConvertAnArray(int arr[50][50]);

int main()
{
    int rows[50][50] = {{1,1,1}, {1,0,1}, {1,1,1}};


    ConvertAnArray(rows);
    return 0;
}

void Display(int arr[50][50])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // cout << "Element at x[" << i
            //      << "][" << j << "]: ";
            cout << arr[i][j] << " ";
        }
            cout << "" <<  endl;
    }
}

void ConvertAnArray(int arr[50][50]){

    int tempArray[50][50] = {{1,1,1}, {1,0,1}, {1,1,1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(arr[i][j] == 0 ){
                cout << " i" << i ;
                cout << " j" << j ;

                switch(j){
                
                    case 0 :
                            tempArray[i][j+1] = 0;
                            tempArray[i][j+2] = 0;                            
                            break;
                    case 1: 
                            tempArray[i][j-1] = 0;
                            tempArray[i][j+1] = 0;
                            break;
                    case 2: 
                            tempArray[i][j-1]=0;
                            tempArray[i][j-2]=0;         
                            break;
                }
                switch(i){
                
                    case 0 :
                            tempArray[i+1][j] = 0;
                            tempArray[i+2][j] = 0;                            
                            break;
                    case 1: 
                            tempArray[i-1][j] = 0;
                            tempArray[i+1][j] = 0;
                            break;
                    case 2: 
                            tempArray[i-1][j]=0;
                            tempArray[i-2][j]=0;         
                            break;
                }
              break;               
            }
        }
            cout << "" <<  endl;
    }

    Display(tempArray);
}