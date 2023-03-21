# 題目10. 輾轉相除法

## 問題描述 ：

* 給定二個正整數，利用輾轉相除法求其最大公因數。

## 輸入說明 ：

* 給定二個正整數

## 輸出說明 ：

* 輸出最大公因數

## 程式碼 ：

    #include<iostream>  
    using namespace std;
    int euc(int a, int b);
    int main()
    {
        int input = 0, input2 = 0, c = 0;
        cin >> input >> input2;
        if (input < input2)
        {
            c = input;
            input = input2;
            input2 = c;
        }
        cout << euc(input, input2) << endl;
        return 0;
    }
    int euc(int a, int b)
    {
        int f = a % b;
        if (f == 0) return b;
        else return euc(b, f);
    }

## 題目解析 ：

* 輾轉相除法用遞迴函式宣告 
* 比大小
