#include <iostream>
using namespace std;

int main()
{
    string s1, result, message, ALFABETH = "$ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned int n, rows;
    cin >> n;
    for (unsigned int i = 0; i <= n; ++i)
    {
        getline(cin, s1);
        result += s1;
    }
    char size;
    for (unsigned int i = 15; i < result.length(); i += 16)
    {
        if (result[i] != 'X')
        {
            if (message == "TRIANGULO")
            {
                // TRIANGULO ASTERISCOS
                size = result[i];
                rows = ALFABETH.find(size);
                for (unsigned int i = 0; i < rows; i++)
                {
                    for (unsigned int j = 0; j < rows; j++)
                        cout << "*";
                    cout << endl;
                }
                return 0;
            }
            else if (message == "CUADRADO")
            {
                size = result[i];
                rows = ALFABETH.find(size);
                // RECTANGULO ASTERISCOS
                for (unsigned int i = 1; i <= rows; i++)
                {
                    for (unsigned int j = 1; j <= i; j++)
                        cout << "*";
                    cout << endl;
                }
                return 0;
            }

            else if (message == "PIRAMIDE")
            {
                size = result[i];
                rows = ALFABETH.find(size);
                cout << message;
                return 0;
            }
            else
                message += result[i];
        }
    }
    cout << message << "\n";
    return 0;
}