#include <iostream>
using namespace std;

int main()
{
    string s1, result, message = "", ALFABETH = "$ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n, rows;
    cin >> n;
    // result = "ABCDEFGHIJKLMNOPABCDEFGHIJKLMNOIABCDEFGHIJKLMNORABCDEFGHIJKLMNOAABCDEFGHIJKLMNOMABCDEFGHIJKLMNOIABCDEFGHIJKLMNODABCDEFGHIJKLMNOEABCDEFGHIJKLMNEEABCDEFGHIJKLMNOX";
    for(int i = 0; i <= n; ++i) {
        getline (cin, s1);
        result += s1;
    }
    char size;
    for(int i = 15; i < result.length(); i += 16) {
        if (result[i] != 'X') 
            message += result[i];
            
    }
    size = message[message.length() - 1];

    // https://stackoverflow.com/questions/18410234/how-does-one-represent-the-empty-char/18410297
    message[message.length() - 1] = '\0';

    rows = ALFABETH.find(size);
    cout << "\r";
    // http://www.cplusplus.com/reference/string/string/compare/
    if (message.compare("TRIANGULO") == 1) {
        
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if (message.compare("CUADRADO") == 1) {
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < rows; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}