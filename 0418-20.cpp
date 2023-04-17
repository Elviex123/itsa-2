#include<iostream>    
#include<string>    
#include<sstream>    
using namespace std;    
    
string plus_stacks(const string& num1, const string& num2) {//�[�k    
    int n1[35] = { 0 };    
    int n2[35] = { 0 };    
    int sum[35] = { 0 };//�p���`�M�ϥ�  adapter  
    int num1_len = num1.size();    
    int num2_len = num2.size();    
    stringstream ss;    
    
    for (int i = 0; i < 35; i++) {    
        if (i < num1_len)n1[34 - i] = num1[num1_len - 1 - i] - '0';//�r��}�C-'0'��i�H�j���নint    
        if (i < num2_len)n2[34 - i] = num2[num2_len - 1 - i] - '0';//�q[34-i]��¶}�l�O���F�[���K(�d,��,�Q,��)    
    
        sum[i] = n1[34 - i] + n2[34 - i];//�˹L�ӱq�Ӧ�ƶ}�l�A����n�p��    
    };    
    
    for (int j = 0; j < 35; j++) {//�[�k�j��    
        if (sum[j] >= 10) {//�p�G��U���}�C>=10    
            sum[j] -= 10;  //��-10    
            sum[j + 1]++;  //�i��+1    
        };    
    };    
    
    bool leading_zeros = true;//��Jstringstream�ɧ�e�ɹs�ư�    
    for (int k = 34; k >= 0; k--) {//�]��sum�O�ϵ۩�(��,�Q,��,�d)�A�ϦV�ˬd�^��    
        if (leading_zeros == 1 && sum[k] == 0) {    
            continue;//�^�Y    
        }    
        leading_zeros = false;//�I��Ĥ@�Ӥ��O0���Ʀr��]�w��false    
        ss << sum[k];//��J    
    }    
    
    string result = ss.str();//�ഫ���r��    
        
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
