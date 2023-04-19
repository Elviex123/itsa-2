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
        int board[3][3];  
        int flag;   
        bool compare=false;   
        for (int i = 0; i < 3; i++) 
        {   
            for (int j = 0; j < 3; j++) 
            {   
                cin >> board[i][j]; 
            }   
        }     
        for (int i=0; i < 2; i++) 
        {   
            flag = 0;   
            for (int j=0; j < 2; j++) 
            {   
                if (board[i][j] == board[i][j+1])
                flag++;
            }   
            if (flag == 2)compare = true;   
        }   
        for (int i=0; i < 2; i++) 
        {   
            flag = 0;   
            for (int j=0; j < 2; j++) 
            {   
                if (board[j][i] == board[j+1][i])
                flag++;   
            }   
            if (flag == 2)compare = true;   
        }   
        flag = 0;   
        for (int i=0; i < 2; i++) 
        {    
            if (board[i][i] == board[i + 1][i + 1])
            flag++;   
            if (flag == 2)compare = true;   
        }   
        flag = 0;   
        for (int i=0; i < 2; i++) 
        {
            if (board[2 - i][i] == board[1 - i][i+1])
            flag++;   
            if (flag == 2)compare = true;   
        }   
        if (compare == true)cout << "True" << endl;   
        else cout << "False" << endl;   
        return 0;   
    }  


## 題目解析 ：

*  排出井字
*  輸入0 or 1
*  依序檢查
