# 題目23. 找零錢問題

## 問題描述 ：

* 假設銅板有1元、5元、50元共三種，媽媽請小明去菜市場買水果，給了小明N元，且媽媽交待，要老闆找小明的零錢的數目要最少，而小明到了水果攤買了a1顆蘋果，a2顆柳丁，及a3顆桃子，1顆蘋果15元，1顆柳丁20元，1顆桃子30元，請問老問需找多少個1元、5元、50元，其銅板數目最少。

## 輸入說明 ：

* 先輸入媽媽給小明多少錢，N，接著輸入a1, a2, a3 ， 在此n, a1, a2, a3為整數，且a1*15+ a2*20+ a3*30小於或等於N。
## 輸出說明 ：

* 列出共找小明多少個1元，5元及50元，若帶的錢不夠買水果，則顯示”0”。

## 程式碼 ：


    #include<iostream>    
    #include<string>    
    #include<sstream>     
    using namespace std;     
    string plus_stacks(const string& num1, const string& num2) 
    {
        int n1[35] = { 0 };    
        int n2[35] = { 0 };    
        int sum[35] = { 0 };
        int num1_len = num1.size();    
        int num2_len = num2.size();    
        stringstream ss;     
        for (int i = 0; i < 35; i++) 
        {    
            if (i < num1_len)n1[34 - i] = num1[num1_len - 1 - i] - '0'; 
            if (i < num2_len)n2[34 - i] = num2[num2_len - 1 - i] - '0';    
            sum[i] = n1[34 - i] + n2[34 - i];
        };     
        for (int j = 0; j < 35; j++)
        {   
            if (sum[j] >= 10) 
            {  
                sum[j] -= 10;  
                sum[j + 1]++;
            };    
        };    
        bool leading_zeros = true;
        for (int k = 34; k >= 0; k--) 
        {  
            if (leading_zeros == 1 && sum[k] == 0) 
            {    
                continue;
            }    
            leading_zeros = false;
            ss << sum[k];
        }    
        string result = ss.str();   
        return result;    
    }    
    int main()    
    {    
        int n;    
        cin >> n;    
        string sum;    
        for (int i = 0; i < n;i++) 
        {    
            string num1,num2;    
            cin >> num1 >> num2;    
            cout<<plus_stacks(num1, num2)<<endl;           
        };    
    }  


## 題目解析 ：

* <sstream>-stringstream
*  讀進陣列
