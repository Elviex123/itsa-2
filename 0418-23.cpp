#include<iostream>    
#include<string>    
#include<sstream>    
using namespace std;    
    
string plus_stacks(const string& num1, const string& num2) {//加法    
    int n1[35] = { 0 };    
    int n2[35] = { 0 };    
    int sum[35] = { 0 };//計算總和使用  adapter  
    int num1_len = num1.size();    
    int num2_len = num2.size();    
    stringstream ss;    
    
    for (int i = 0; i < 35; i++) {    
        if (i < num1_len)n1[34 - i] = num1[num1_len - 1 - i] - '0';//字串陣列-'0'後可以強制轉成int    
        if (i < num2_len)n2[34 - i] = num2[num2_len - 1 - i] - '0';//從[34-i]單純開始是為了觀察方便(千,百,十,個)    
    
        sum[i] = n1[34 - i] + n2[34 - i];//倒過來從個位數開始，比較好計算    
    };    
    
    for (int j = 0; j < 35; j++) {//加法迴圈    
        if (sum[j] >= 10) {//如果當下的陣列>=10    
            sum[j] -= 10;  //先-10    
            sum[j + 1]++;  //進位+1    
        };    
    };    
    
    bool leading_zeros = true;//輸入stringstream時把前導零排除    
    for (int k = 34; k >= 0; k--) {//因為sum是反著放的(個,十,百,千)，反向檢查回來    
        if (leading_zeros == 1 && sum[k] == 0) {    
            continue;//回頭    
        }    
        leading_zeros = false;//碰到第一個不是0的數字後設定成false    
        ss << sum[k];//輸入    
    }    
    
    string result = ss.str();//轉換成字串    
        
    return result;    
}    
    
int main()    
{    
    int n;    
    cin >> n;    
    string sum;    
    for (int i = 0; i < n;i++) {    
        string num1,num2;    
        cin >> num1 >> num2;    
           
        cout<<plus_stacks(num1, num2)<<endl;    
        
            
    };    
}  
