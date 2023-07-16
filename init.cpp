#include"RandomColor.h"

int main(){
    string empty;

    vector<int> mysterious = GenerateRandomRGB();
    PrintColor(mysterious);

    cin >> empty;

    return 0;
}