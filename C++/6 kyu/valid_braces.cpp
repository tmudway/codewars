// https://www.codewars.com/kata/5277c8a221e209d3f6000b56

bool valid_braces(std::string braces) 
{
    // valid or not valid?
    std::map<std::string, int> typeLookup = {{"{", 1}, {"[", 2}, {"(", 3}, {"}", -1}, {"]", -2}, {")", -3}};
    std::vector<int> openStack;
    
    // Assign an initial value to make sure that strings
    // that start with a close bracket dont cause a segfault
    openStack.push_back(-1);
  
    for (int i = 0; i < braces.length(); i++){
        int type = typeLookup[(braces.substr(i,1))];
        // Open bracket
        if(type > 0){
            // Add to open bracket stack
            openStack.push_back(type);
        }else{
            // Compare the close bracket to most recent open
            // If they match, remove that bracket from the stack
            if(openStack.back() == type * -1){
                openStack.pop_back();
            }else{
                // If they dont match, return false
                return false;
            }
        }
    }
    
    // Only the initial value should be there
    if (openStack.back() != -1) return false;
    
    return true;
};