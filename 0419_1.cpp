#include<iostream>  
#include<sstream>  
#include<string>  
#include<map>  
#include<algorithm>  
using namespace std;  
int main()  
{  
    string input, sort;  
    int count = 0;  
    map<char, int> F;  
    string Englishword = "abcdefghijklmnopqrstuvwxyz";  
  
    getline(cin, input);  
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    istringstream split(input);        
    while (getline(split, sort, ' ')) 
	{     
        count++;
        for (int i = 0; i < sort.length(); i++)  
        {  
            F[sort[i]] += 1;  
        };  
    };  
        cout << count << endl;
        for (int j = 0; j < 26; j++)  
        {  
            for (map<char, int>::iterator p = F.begin(); p != F.end(); p++) 
			{  
                if (Englishword[j] == (*p).first && (*p).second != 0) 
				{  
                    cout<< (*p).first << " : " << (*p).second << endl;  
                };  
            };  
        };  
}  
