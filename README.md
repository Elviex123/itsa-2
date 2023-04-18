# 題目21. 最大值與最小值

## 問題描述 ：

* 寫一個程式來找出輸入的十個數字的最大值和最小值，數值不限定為整數，且值可存放於 float 型態數值內。

## 輸入說明 ：

* 輸入十個數字，以空白間隔。

## 輸出說明 ：

* 輸出數列中的最大值與最小值，輸出時需附上小數點後兩位數字。

## 程式碼 ：

    #include <iostream>
    #include <iomanip>
    using namespace std;
    int main()
    {
    
	    double a[10];
        double max=0.0, min=0.0;
        for (int i = 0; i < 10; i++) 
	    {
            cin >> a[i];
        }
        max = a[0];
        min = a[0];
        for (int i = 0; i < 10; i++) 
        {
    	    if (a[i] > max)
	    	max = a[i];
            if (a[i] < min)
	    	min = a[i];
        }
        cout << "maximum:" << fixed << setprecision(2) << max << endl;
        cout << "minimum:" << fixed << setprecision(2) << min << endl;
        return 0;
    }


## 題目解析 ：

*  設定輸入十個數字
*  在迴圈中排序
*  算到小數點後兩碼
*  依據運算符號輸出計算公式的答案 
