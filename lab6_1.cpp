#include<iostream>
using namespace std;

int main(){
    int num;
    int even = 0;
    int odd = 0;
    while (num != 0) {
        cout << "Enter an integer: " << endl;
        cin >> num;
        if (num%2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}
