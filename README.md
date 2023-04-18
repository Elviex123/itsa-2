# 題目23. 找零錢問題

## 問題描述 ：

* 假設銅板有1元、5元、50元共三種，媽媽請小明去菜市場買水果，給了小明N元，且媽媽交待，要老闆找小明的零錢的數目要最少，而小明到了水果攤買了a1顆蘋果，a2顆柳丁，及a3顆桃子，1顆蘋果15元，1顆柳丁20元，1顆桃子30元，請問老問需找多少個1元、5元、50元，其銅板數目最少。

## 輸入說明 ：

* 先輸入媽媽給小明多少錢，N，接著輸入a1, a2, a3 ， 在此n, a1, a2, a3為整數，且a1*15+ a2*20+ a3*30小於或等於N。
## 輸出說明 ：

* 列出共找小明多少個1元，5元及50元，若帶的錢不夠買水果，則顯示”0”。

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
