#include <iostream>

using namespace std;

int main()
{
    int x[1000];
    int y = 0;
    int yy = 0;

    int z[1000];
    int zz = 0;
    int zzz = 0;

    int i;

    for (i = 0; i<1000; i++)
    {
        if(i%3 == 0 && i != 0)
        {
            x[y] = i;
            y++;
            cout << i << "+" << yy << "=" << yy + i << endl;
            yy += i;
        }

        if(i%5 == 0 && i != 0)
        {
            if(i%3 == 0 && i != 0)
            {

            }
            else
            {
                z[zz] = i;
                zz++;
                cout << i << "+" << zzz << "=" << zzz + i << endl;
                zzz += i;
            }
        }
    }

    int suma = yy + zzz;

    cout << "\n" << "La suma de los multiplos de 3 y 5 por debajo de 1000 es igual a " << suma << endl;
}
