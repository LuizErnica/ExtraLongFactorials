// https://www.hackerrank.com/challenges/extra-long-factorials/problem?isFullScreen=true

//#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */


string BigSum(string a, string b)
{
    int sizeA = (int) a.size();
    int sizeB = (int) b.size();
    int sizeTotal = max(sizeA, sizeB);
    string result(sizeTotal, '0');
    int sumAB = 0;

    //    cout << a << endl;
    //    cout << b << endl;

    for (int id = 0; id < abs(sizeA - sizeB); id++)
    {
        if (sizeA < sizeB)
            a.insert(0, "0");
        else
            b.insert(0, "0");
    }

    //    cout << a << endl;
    //    cout << b << endl;

    for (int id = sizeTotal - 1; id >= 0; id--)
    {
        sumAB = (a[id] - '0') + (b[id] - '0') + (result[id] - '0');

        //cout << (a[id] - '0') << endl;
        //cout << (b[id] - '0') << endl;
        //cout << (result[id] - '0') << endl;
        //cout  << sumAB << endl;

        if (sumAB > 9)
        {
            result[id] = (sumAB - 10) + '0';

            if (id > 0)
                result[id - 1] = '1';

            if (id == 0)
                result.insert(0, "1");
        }
        else
            result[id] = (sumAB)+'0';

        //cout << result << endl;

    }

    return result;
}


string BigMulti(int a, string b)
{
    string result = "0";

    for (int id = 0; id < a; id++)
        result = BigSum(result, b);

    return result;
}

void extraLongFactorials(int n)
{
    //    cout << BigSum("5555555555", "5555555555");
    //    cout << BigMulti(59, "300000");
    string result = "1";

    for (int id = n; id > 0; id--)
        result = BigMulti(id, result);

    cout << result;
}

/*
Input (stdin)
25
Your Output (stdout)
15511210043330985984000000
Expected Output
15511210043330985984000000
*/
int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

    return 0;
}

string ltrim(const string& str)
{
    string s(str);

    //s.erase(
    //    s.begin(),
    //    find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    //);

    s.erase(
        s.begin(),
        //find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
        find_if(s.begin(), s.end(), [](unsigned char c) { return !std::isspace(c); })
    );

    return s;
}

string rtrim(const string& str)
{
    string s(str);

    //s.erase(
    //    find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
    //    s.end()
    //);

    s.erase(
        std::find_if(s.rbegin(), s.rend(),
            [](unsigned char c)
            {
                return !std::isspace(c);
            }).base(),
                s.end()
                );

    return s;
}
