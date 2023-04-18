# 題目24. 計算複利

## 問題描述 ：
*
## 定義符號：

* r: 每期利率。以前例而言， r = 0.1%
* n: 期數。以前例而言， n = 3
* p: 每期投入金額。以前例而言 p = 10000

## 輸入說明 ：

* 第一列輸入一個正整數n。其後有n列，每一列代表一個想要做運算的虛數，每一列之資料依序為運算元、虛數1、虛數2。虛數的格式為a b。

## 輸出說明 ：

* 一列表一個運算結果。虛數的格式為a b。

## 程式碼 ：

    #include<iostream>    
    using namespace std;   
    int main()  
    {  
        long double r, n, p;  
        double sum = 0.0;
        cin >> r >> n >> p;  
        r += 1.0;  
        for (int i = 1; i <= n; i++) 
        {  
            sum = (sum + p) * r;  
        }  
        cout << (long long)sum << endl;    
        return 0;  
    }  
## 題目解析 ：

*  
*  
*  
*  
*  
