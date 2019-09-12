#include <bits/stdc++.h>

using namespace std;


string DecimalToBinary(int num)
{
        string binary;
        for(int i=31; i>=0; i--)
        {
                if( num >> i & 1)binary += "1";
                else binary += "0";
        }
        return binary;
}

int count_consequetive_ones(string binary)
{
        int cur = 0, maxcur = 0;
        for(int i=0; binary[i] != '\0'; i++)
        {
                if(binary[i] == '1')
                {
                        cur += 1;
                        maxcur = max(maxcur, cur);
                }
                else cur = 0;
        }
        return maxcur;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string binary = DecimalToBinary(n);
    int ones = count_consequetive_ones(binary);
    cout << ones << endl;
    return 0;
}
