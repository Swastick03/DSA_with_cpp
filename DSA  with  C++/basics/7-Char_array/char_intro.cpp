#include <iostream> 

using namespace std;
int main() 

{ 

    char name[20];
    cout<< "Enter the Char array" << endl;
    cin>> name;
    // name[2]= '\0';            // This will assign null value in that place

    cout<< "Your name is " << endl;
    cout<< name <<endl;
    return 0; 

}