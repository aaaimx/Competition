#include<iostream>
#include<queue>

int main() {
    using namespace std;
    queue< int > clients;
    queue< int > answers;
    int n, m, aux, tacos = 0;
    cin >> n;
    
    for(unsigned int i = 0; i < n; ++i) {
        cin >> m;
        switch (m) {
            case 1:
                cin >> aux;
                clients.push(aux);
                break;
            case 2:
                if (!clients.empty()) {
                    aux = clients.front();
                    tacos += aux;
                    clients.pop();
                } 
                break;
            case 3:
                aux = clients.size();
                answers.push(aux);
                break;
            case 4:
                answers.push(tacos);
                break;
            default:
                break;
        }
    }
    while (!answers.empty()) {
        cout << answers.front() << "\n";
        answers.pop();
    }
  return 0;
}