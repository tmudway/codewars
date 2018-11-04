// https://www.codewars.com/kata/578aa45ee9fd15ff4600090d

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        std::vector<int> odds;
        std::vector<int> IDs;
        
        // Find all the odd values and their indexes
        for (int i = 0; i < array.size(); i++){
            if (array[i] % 2) {
                odds.push_back(array[i]);
                IDs.push_back(i);
            }
        }
        
        // Sort the odd values only
        sort(odds.begin(), odds.end());
        
        // replace the odd values using the gathered indexes
        for (int i = 0; i < odds.size(); i++){
            array[IDs[i]] = odds[i];
        }
        
        return array;
    }
};