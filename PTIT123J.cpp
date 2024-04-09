#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 100001;

char S[MAXN];
char H[MAXN];
int sta;

void xuli() {
    sta = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] == '(' || S[i] == '[') {
            sta++;
            H[sta] = S[i];
            continue;
        }
        if (S[i] == ')' || S[i] == ']') {
            if ((S[i] == ']' && H[sta] == '(') || (S[i] == ')' && H[sta] == '[') || sta <= 0) {
                cout << "no" << endl;
                return;
            }
            sta--;
        }
    }
    if (sta > 0) {
        cout << "no" << endl;
        return;
    }
    cout << "yes" << endl;
}

int main() {
    while (true) {
        cin.getline(S, MAXN);
        if (strcmp(S, ".") == 0)
            break;
        xuli();
    }
    return 0;
}
