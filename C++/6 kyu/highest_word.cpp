// https://www.codewars.com/kata/57eb8fcdf670e99d9b000272

#include <string>

std::string highestScoringWord(const std::string &str)
{
    std::string winningWord = "";
    int winningScore = 0;
  
    std::string item = "";
    int itemScore = 0;
    for(int i = 0; i < str.length();i++){
        // If we're at the end of a word
        if (str[i] == ' '){
            // Check if word is a winner and replace
            if (itemScore > winningScore){
                winningScore = itemScore;
                winningWord = item;
            }
            // Reset trackers
            itemScore = 0;
            item = "";
        }else{
            // add to string and score
            item += str[i];
            itemScore += int(str[i]) - 96;
            
            // If we reach the end of the sentence
            if  (i == str.length()-1){
                // Check if word is a winner and replace
                if (itemScore > winningScore){
                    winningScore = itemScore;
                    winningWord = item;
                }
            } 
        }
    }
    
    return winningWord;
}