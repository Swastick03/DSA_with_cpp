//wap to impliment multiplication of 2 matrix using multidirection matrix


#include <iostream> 
using namespace std;
int main() 

{   
    //1st Matrix
    int r1,c1;
    cout<< "For the 1st Matrix!\n";
    cout<< "Enter the row:\n";
    cin >> r1;
    cout<< "\nEnter the column:\n";
    cin >> c1;


    int a[r1][c1];
    int i,j,k,l=0;
    cout<< "Enter the matrix now!! \n";
    for ( i = 0; i < r1; i++)
    {
        
        for ( j = 0; j < c1; j++)
        {
            cout << "Enter the value a[" << i<< "]["<< j << "]" << endl;
            cin >> a[i][j];
        }
        
    }
    cout<< "The 1st matrix is:\n";
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            cout <<"  "<<  a[i][j];
            if (j==c1-1)
            {
                cout<< endl;
            }
            
        }
        
    }
    

    //2nd matrix
    int r2,c2;
    cout << "For the 2nd Matrix!\n";
    cout << "Enter the row:\n";
    cin >> r2;
    cout << "\nEnter the column:\n";
    cin >> c2;


    int b[r2][c2];
    
    cout << "Enter the matrix now!! \n";
    for ( i = 0; i < r2; i++)
    {
        
        for ( j = 0; j < c2; j++)
        {
            cout <<"Enter the value a[" << i<< "]["<< j << "]" << endl;
           cin >>b[i][j];
        }
        
    }
    cout << "The matrix after multiplication is:\n";
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            cout << "  " << b[i][j];
            if (j==c2-1)
            {
                cout << endl;

            }
            
        }
        
    }
    

    // Results
    if (c1==r2)
    {
    
    int c[r1][c2];
    
    
   cout << "The matrix is :" << endl;
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {   
            l=0;
           for (k = 0; k < c1; k++)
           {
            l+=a[i][k]*b[k][j];
            c[i][j]=l;
           }
           
            
        }
        
    }
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            cout<< "   " << c[i][j];
            if (j==c2-1)
            {
                cout << endl;
            }
            
        }

        
    }
    }
    else
    {
        cout << "Check rows and columns" << endl;
    }
    
    
    return 0; 

}