// https://www.codewars.com/kata/550f22f4d758534c1100025a

#import <stdio.h>

class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr){

        bool running = true; // have any edits been made in this iteration
        
        // Map that allows us to add the direction pairs, gives 0 if they cancel out
        std::map<std::string, int> convMap = {{"NORTH", 1}, {"SOUTH", -1}, {"EAST", 10}, {"WEST",-10}};
        
        std::vector<std::string> current = arr;
        
        while (running){
            // reset the completion check
            running = false;
            std::vector<std::string> temp;
            
            // Loop through current array
            for (int i = 0; i < current.size(); i++){
                
                // If we only have 1 left then just push it onto the end and break
                if (i == current.size() - 1){
                    temp.push_back(current[i]);
                    break;
                }
                
                // If the two directions dont cancel out, add the current one to the result
                if (convMap[current[i]] + convMap[current[i+1]] != 0){
                    temp.push_back(current[i]);
                }else{
                    // We want to keep running till no changes are made
                    running = true;
                    // Skip the next direction as we eliminated it
                    i++;
                }
            }
            current = temp;
        }
        
        return current;
    }
};