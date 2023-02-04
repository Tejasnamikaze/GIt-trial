#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    string t, p;
    cout << "Enter String of Text" << endl;
    cin >> t;
    cout << "Enter Pattern" << endl;
    cin >> p;
    clock_t start, end;
    start = clock();
    bool k = false;

    for (int i = 0; i <= (t.length() - p.length()); i++)
    {
        int j = 0;
        while (j < p.length() && t[i + j] == p[j])
        {

            j++;
        }
        // bool k = false;
        if (j == p.length())
        {
            cout << "Patter matched";
            k = true;
        }
    }
    if (k == false)
        cout << "pattern never matched";

    // start = clock();

    end = clock();

    printf("\nSeconds taken %lf", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}
