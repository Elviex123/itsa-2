# 題目22. 圈圈叉叉

## 問題描述 ：

* OX 遊戲是大家小時候的童年記憶，甚至在長大後，無聊時還是會玩一下呢 ! 但當你一個人時，是否也能讓電腦跟你玩呢 ?

## 輸入說明 ：

* 輸入一個 3*3 的 2 維矩陣，矩陣內容， 0 代表 O ， 1 代表 X 。註：每列數字之間均有空格隔開。

## 輸出說明 ：

* 輸出這場 OX 遊戲是否有勝負之分。註：輸出結尾需換行。

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
