// https://www.codewars.com/kata/56747fd5cb988479af000028

std::string get_middle(std::string input) 
{
  int len = input.length();
  if (len % 2) return input.substr(len / 2, 1); // odd
  else return input.substr(len / 2 - 1, 2);     // even
  
}