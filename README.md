# 題目24. 計算複利

## 問題描述 ：
* 你每個月存 10000 元到銀行中，銀行的每月利率為 0.1% ，以複利計算，請問 3 個月後，你的帳戶為多少錢？底下的表格示範了如何得到第 3 個月時，帳戶中的本利和（本金 + 利率總合）。

|   月份  | 月初金額 | 月底本利和 | 備註 |
| :-----: | :-----: | :-------: | :--: |
| 第一個月 |  10000  | 	 10010   |月初存入 10000 元。利息為 10000 * 0.1% = 10 所以本利和為 10010|
| 第二個月 |  20010  | 20030.01  |第二個月再存入 10000 加上前一個月的 10010 所以月初有 20010 元 |
| 第三個月 |30030.01 |30060.04001|所以第 3 個月時，本利和為 30060.04001 元。|
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
* sum =>本利和（本金 + 利率總合）  
* long long =>將數字換算更精準
