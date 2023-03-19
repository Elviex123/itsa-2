# 題目11. 矩陣反轉

## 問題描述 ：

* 請設計一程式，輸入一個陣列並且反轉後再輸出。

## 輸入說明 ：

* 第一行先輸入矩陣的行、列，之後再輸入陣列元素。

## 輸出說明 ：

* 反轉後的矩陣。

## 程式碼

    #include<iostream>  
    #include<string>  
    #include<sstream>   
    using namespace std;  
  
    int main()  
    {  
        int inputBus=0,inputLine=0;  
      
        cin>>inputBus>>inputLine;
        cin.ignore(1,'\n'); 
        int reArray[inputLine][inputBus];  
        for(int bus=0;bus<inputBus;bus++)
        {  
            string nums;  
            getline(cin,nums);  
            istringstream cutStr(nums);  
            for(int line=0;line<inputLine;line++)
            {
                string save;  
                getline(cutStr,save,' ');  
                istringstream chType(save);  
                chType>>reArray[line][bus];
            }  
        }  
        for(int i=0;i<inputLine;i++)
        {  
            for(int j=0;j<inputBus;j++)  
            {  
                if(j==inputBus-1) cout<<reArray[i][j]<<endl;  
                else cout<<reArray[i][j]<<" ";  
            }  
        }  
        return 0;  
    }  


## 題目解析 ：

1.
2.
3.
4.
5.
