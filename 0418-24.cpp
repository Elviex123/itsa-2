#include<iostream>    
using namespace std;  
  
int main()  
{  
    long double r, n, p;  
    double sum = 0.0;//���Q�M  
    cin >> r >> n >> p;  
    r += 1.0;  
      
    for (int i = 1; i <= n; i++) {  
  
        sum = (sum + p) * r;//(�e��+�����s��)*�Q�v  
    }  
    cout << (long long)sum << endl;//longlong�j���ഫ�W�[���  
  
    return 0;  
}  
