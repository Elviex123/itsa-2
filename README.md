# 題目21. 最大值與最小值

## 問題描述 ：

* 寫一個程式來找出輸入的十個數字的最大值和最小值，數值不限定為整數，且值可存放於 float 型態數值內。

## 輸入說明 ：

* 輸入十個數字，以空白間隔。

## 輸出說明 ：

* 輸出數列中的最大值與最小值，輸出時需附上小數點後兩位數字。

## 程式碼 ：


    #include<iostream>  
    using namespace std;

        int main()
        {
        int input = 0;

        cin >> input;
        while (input--)
        {
            int a = 0, ai = 0, b = 0, bi = 0;
            char ch;
            cin >> ch >> ai >> a >> bi >> b;
            switch (ch)   
            { 
                case '+':
                    cout << ai + bi << " " << a + b << endl; 
                    break;
                case '-':
                    cout << ai - bi << " " << a - b << endl; 
                    break;
                case '*':
                    cout << ai * bi - a * b << " " << a * bi + ai * b << endl; 
                    break;
                case '/':
                    cout << (ai * bi + a * b) / (bi * bi + b * b) << " " << a * bi - ai * b / (bi * bi + b * b) << endl;
                    break;
            }
        }
        return 0;
    }


## 題目解析 ：

*  令a和b表示實部，ai和bi表示虛部
*  依據輸入的行數遞減計算次數
*  ch為運算符號 
*  依據運算符號來決定計算方式 
*  依據運算符號輸出計算公式的答案 
