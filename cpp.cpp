// C++ program to print diamond pattern using recursion
#include <bits/stdc++.h>
using namespace std;
void gotonextLine(int k, int i, int z)
{
    if (k == i) // base case
        return;
    cout << "* ";
    gotonextLine(k + z, i, z);
}
void addblankSpaceInDiamond(
    int j, int i, int z) // print blank space of diamond
{
    if (j == i)
        return;
    cout << " ";
    addblankSpaceInDiamond(j + z, i, z);
}
void upperDiamond(int row, int i)
{
    if (i > row) // base case
        return;
    addblankSpaceInDiamond(row, i, -1);
    gotonextLine(0, i, 1);
    cout << endl;
    upperDiamond(row, i + 1); // recursive call
}
void lowerDiamond(int row,
                  int i) // print the next line of diamond
{
    if (i > row) // base case
        return;
    addblankSpaceInDiamond(0, i, 1);
    gotonextLine(row, i, -1);
    cout << endl;
    lowerDiamond(row, i + 1);
}
int main()
{
    int row;
    row = 5;
    upperDiamond(row, 0); // print upper part of triangle
    lowerDiamond(row, 1); // print lower part of diamond
    return 0;
    
}