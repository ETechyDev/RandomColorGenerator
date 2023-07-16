#pragma once
#include<vector>
#include<iostream>
using namespace std;

vector<int> GenerateRandomRGB()
{
    vector<int> rgb;
    srand(time(0));
    int _r = rand() % 255;
    int _g = rand() % 255;
    int _b = rand() % 255;

    rgb.push_back(_r);
    rgb.push_back(_g);
    rgb.push_back(_b);

    return rgb;
}

void PrintColor(vector<int> rgb)
{
    cout << "R:" << rgb.at(0);
    cout << ", B:" << rgb.at(1);
    cout << ", G:" << rgb.at(2);
}