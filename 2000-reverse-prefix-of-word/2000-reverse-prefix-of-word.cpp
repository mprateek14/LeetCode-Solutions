class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        for(int i=0; i<word.size(); i++){
            if(word[i] == ch){
                reverse(word, 0, i);
                break;
            }
        }
        
        
        return word;
        
    }
    
    void reverse(string &s, int a, int b){
        while(a<b){
            swap(s[a], s[b]);
            a++;
            b--;
        }
    }
};