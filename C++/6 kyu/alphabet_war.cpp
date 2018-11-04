// https://www.codewars.com/kata/5938f5b606c3033f4700015a

#include <string>
using namespace std;

string alphabetWar(string fight)
{ 
    map<char, int> points = {{'_', 0}, {'*', 0},                          // empty and bomb
                             {'w', 4},  {'p', 3},  {'b', 2},  {'s', 1},   // Left
                             {'m', -4}, {'q', -3}, {'d', -2}, {'z', -1}}; // Right
   
   // Adding buffer characters to remove special cases at start and end
   fight = '_' + fight + '_';
   int score = 0;
   
   for (int i = 1; i < fight.length()-1; i++){
       // If character is a combatant
       if (points.count(fight.at(i))){
           // if a bomb
           if (fight.at(i) == '*'){
               // subtract previous score
               score -= points[fight.at(i-1)];
               // Bombs dont destroy bombs so only replace right if not a bomb
               if (fight.at(i+1) == '*'){
                   fight.replace(i-1, 2, "__");
               }else{
                   fight.replace(i-1, 3, "___");
               }
           }else{
               score += points[fight.at(i)];
           }
       }
   }
   
   // As left is +ve and right is -ve, use sign of final score to get result
   if (score == 0) return "Let's fight again!";
   return score > 0 ? "Left side wins!" : "Right side wins!";
}