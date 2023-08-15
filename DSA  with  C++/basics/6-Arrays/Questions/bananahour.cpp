#include <iostream>

using namespace std;

bool ispossible(int *piles, int h, int mid, int size)
{
    int hour = 0;
    cout << "The mid is: " << mid << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Pile is: " << piles[i] << endl;

        if (hour >= h)
        {
            return false;
        }
        if (piles[i] == mid)
        {
            hour = hour + 1;
        }
        else
        {
            int s = (piles[i] / mid) + 1;
            hour = hour + s;
        }
        cout << "Hour is now:" << hour << endl;
    }
    return true;
}

int minEatingSpeed(int *piles, int h, int size)
{

    int s = piles[0];
    int e = piles[size - 1];
    int ans = -1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        cout << endl
             << endl;
        cout << "H is : " << h << endl;
        if (ispossible(piles, h, mid, size))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()

{

    int piles[5] = {4, 11, 20, 23, 30};
    int h = 5;
    cout << minEatingSpeed(piles, h, 5);
    return 0;
}
