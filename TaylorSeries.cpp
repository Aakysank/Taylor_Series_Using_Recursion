// TaylorSeries.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double e_1(double x, double n)
{
    static double r = 1.0;

    //int i = n;
    //static int i = 0;
    /*while (i != 0)
    {
        r*=  (x / i);
        r += 1.0;

        i--;
    }*/

    if (n == 0)
        return r;
    else
    {
        r *= (x / n);
        r += 1.0;

        return e_1(x, n - 1);
    }
}
double e(int x, int n)
{
    static double p = 1.0, f = 1.0;
    if (n == 0)
        return 1;
    else
    {
        double r = 0;
        r = e(x, n - 1);
        p *= x;
        f *= n;
        
        return r + (p / f);
    }
}

int main()
{
    printf("%lf", e(4,2));
    printf("%lf", e_1(4, 2));
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
