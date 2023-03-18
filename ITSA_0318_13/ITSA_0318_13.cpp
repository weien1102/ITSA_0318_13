// ITSA_0318_13.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>  
#include <string.h>  
#include <sstream>  
#include <vector>  
#include <algorithm>  
using namespace std;
bool f(string a, string b);
int main()
{
    int num;
    cin >> num;
    cin.get();
    for (int i = 0; i < num; i++)
    {
        string input;
        getline(cin, input);
        istringstream delim(input);
        string token;
        vector<string>arr;
        while (getline(delim, token, ' '))
        {
            arr.push_back(token);
        }
        sort(arr.begin(), arr.end(), f);
        for (int j = 0; j < arr.size(); j++)
        {
            if (j != arr.size() - 1)
                cout << arr[j] << " ";
            else
                cout << arr[j] << endl;
        }
    }
    return 0;
}
bool f(string a, string b)
{
    if (a[0] > b[0])
        return true;
    else if (a[0] == b[0])
    {
        if (a.length() > b.length())
            return true;
        else if (a.length() == b.length() && a.length() == 2)
        {
            if (a[1] > b[1])
                return true;
            else
                return false;
        }
        else if (a.length() == b.length() && a.length() == 3)
        {
            if (a[2] > b[2])
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
