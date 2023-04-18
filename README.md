# 題目22. 圈圈叉叉

## 問題描述 ：

* OX 遊戲是大家小時候的童年記憶，甚至在長大後，無聊時還是會玩一下呢 ! 但當你一個人時，是否也能讓電腦跟你玩呢 ?

## 輸入說明 ：

* 輸入一個 3*3 的 2 維矩陣，矩陣內容， 0 代表 O ， 1 代表 X 。註：每列數字之間均有空格隔開。

## 輸出說明 ：

* 輸出這場 OX 遊戲是否有勝負之分。註：輸出結尾需換行。

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
            if (a[i] > max)max = a[i];  
            if (a[i] < min)min = a[i];  
        }  
        cout << "maximum:" << fixed << setprecision(2) << max << endl;  
        cout << "minimum:" << fixed << setprecision(2) << min << endl;  
        return 0;  
    }  


## 題目解析 ：

*  令a和b表示實部，ai和bi表示虛部
*  依據輸入的行數遞減計算次數
*  ch為運算符號 
*  依據運算符號來決定計算方式 
*  依據運算符號輸出計算公式的答案 
