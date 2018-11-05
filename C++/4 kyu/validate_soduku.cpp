// https://www.codewars.com/kata/529bf0e9bdf7657179000008

bool validSolution(unsigned int board[9][9]){
  int len = sizeof(board[0]) / sizeof(board[0][0]);
  
  // First create test arrays for each box and column
  std::vector<std::vector<unsigned int>> boxes = {{}, {}, {}, {}, {}, {}, {}, {}, {}};
  std::vector<std::vector<unsigned int>> columns = {{}, {}, {}, {}, {}, {}, {}, {}, {}};
  for(int i = 0; i < 9; i++){
    for (int j = 0; j < 9; j++){
      boxes[i/3 + 3 * (j/3)].push_back(board[i][j]);
      columns[j].push_back(board[i][j]);
    }
  }
  
  // Loop through each test case, sort and check that the values go from 1-9
  for(int i = 0; i < 9; i++) {
    std::sort(board[i], board[i] + len);
    std::sort(boxes[i].begin(), boxes[i].end());
    std::sort(columns[i].begin(), columns[i].end());
    for (int j = 0; j < 9; j++){
      if (board[i][j] != j+1) return false;
      if (boxes[i][j] != j+1) return false;
      if (columns[i][j] != j+1) return false;
    }
  }
  
  
   return true;
}