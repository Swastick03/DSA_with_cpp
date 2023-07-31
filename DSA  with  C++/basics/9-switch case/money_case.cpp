#include <iostream> 

using namespace std;
int main() 

{ 

    int amount ;
    int n1000=0, n500=0, n100=0, n50=0, n10=0;
    cout<< "Enter the amount :"<< endl;
    cin>> amount;
    switch (amount>=1000)
    {
    case 1:
        n1000=amount/1000;
        amount-= n1000*1000;
        break;
    }
    switch (amount>=500)
    {
    case 1:
        n500=amount/500;
        amount-= n500*500;
        break;
    }
    switch (amount>=100)
    {
    case 1:
        n100=amount/100;
        amount-= n100*100;
        break;
    }
    switch (amount>=50)
    {
    case 1:
        n50=amount/50;
        amount-= n50*50;
        break;
    }
    switch (amount>=10)
    {
    case 1:
        n10=amount/10;
        amount-= n10*10;
        break;
    }
    cout<< "1000 = "<< n1000<< endl;
    cout<< "500 = "<< n500<< endl;
    cout<< "100 = "<< n100<< endl;
    cout<< "50 = "<< n50<< endl;
    cout<< "10 = "<< n10<< endl;
    return 0; 

}