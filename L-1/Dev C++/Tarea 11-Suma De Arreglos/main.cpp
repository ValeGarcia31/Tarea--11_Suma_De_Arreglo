#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    int fil = 5;
	int col = 5; 
	int suma = 0;
    
	int arreglo [fil] [col]; 

    srand(time(NULL));
 
    for (int n = 0; n < fil; n++)
    {
	      for (int m = 0; m < col; m++)
        {
            arreglo [n] [m] = rand()%20 + 1;
            suma = suma + arreglo [n] [m];
        }
    }
    
    cout<<"Arreglo: "<<endl;
    cout<<endl;
    
    for (int n = 0; n < fil; n++)
    {
        for (int m = 0; m < col; m++)
        {
            cout<<arreglo [n] [m] <<"\t";
        }
        cout<<endl;
    }
     
    cout<<endl;
    cout<<"Total suma: "<< suma;
 
    return 0;
}

