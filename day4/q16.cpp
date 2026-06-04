#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for(int i = start; i <= end; i++)
    {
        int temp = i;
        int sum = 0, rem;

        while(temp != 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }

        if(sum == i)
            cout << i << " ";
    }

    return 0;
}