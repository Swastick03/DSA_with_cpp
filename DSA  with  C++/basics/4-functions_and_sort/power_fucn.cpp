#include <iostream> 

using namespace std;
int power(int a, int b)
{
    int ans=1;
    for (int i = 1; i <=b; i++)
    {
        ans*=a;
    }
    return ans;
}

int main() 

{ 

    int a,b;
    cout<<"Enter the values: "<< endl;
    cin>> a >> b;
    cout<< "Answer is: "<< power(a,b) << endl;

    return 0; 

}