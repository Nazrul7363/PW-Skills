#include <iostream>
#include <string>

using namespace std;


    void reverse(string& word) {
        int left = 0;
        int right = word.length() - 1;
        
        while (left < right) {
           
            char temp = word[left];
            word[left] = word[right];
            word[right] = temp;
            
           
            left++;
            right--;
        }
    }

    string reverseWords(string s) {
        string result;
        string word;

        for (char c : s) {
            if (c == ' ') {
          
                reverse(word);
                result += word + " ";
                word = "";  
            } else {
                
                word += c;
            }
        }

        
        reverse(word);
        result += word;

        return result;
    }


int main() {
    string s = "Let's take LeetCode contest";

    
    string reversed =reverseWords(s);

    cout <<  reversed << endl;

    return 0;
}
