#include<iostream>                                           // It is referred as a bad practice for sharing variable as ,
using namespace std;                                        // it can be easily modified thus effecting the desired result.
                                                            // use reference variable instead.                    
int score = 15;


void a(int& i) {

    cout << score << " in a" << endl;
    score++;
    char ch = 'a';
    cout << i << endl;
}

void b(int& i) {
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main() {
    cout << score << " in main" << endl;
    int i = 5;
    a(i);
    b(i);

    return 0;
}