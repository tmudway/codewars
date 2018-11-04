//https://www.codewars.com/kata/576757b1df89ecf5bd00073b

class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    { 
        std::vector<std::string> tower;
        for (int i = 0; i < nFloors; i++)
        {
            std::string spaces = "";
            std::string stars = "*";
            
            for (int j = i; j > 0; j--){
                stars += "**";
            }
            for (int j = i+1; j < nFloors; j++){
                spaces += " ";
            }
            
            tower.push_back(spaces + stars + spaces);
        }
        
        return tower;
    }
};