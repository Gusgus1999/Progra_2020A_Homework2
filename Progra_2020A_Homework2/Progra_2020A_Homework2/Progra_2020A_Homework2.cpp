#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    while (number < 5000)
    {
        cout << "Chose one number between 1 and 5000 : \n";
        cin >> number;

        if (number <= 5000)
        {
            for (int i = number; i > 0; i--)
            {
             if (number % i == 0)
             {
                cout << i << "\n";

             }
             
             else
              cout << " higher than 5000 \n";
            }
        }
    }
   
    return 0;
}


