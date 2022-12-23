#include <iostream>
#include <vector>
#include <string>

int main() {

  std::string input = "turpentine and turtles! i love them so much";
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;
  
  // Nested loop to check if there are matches
  for (int i = 0; i < input.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (input[i] == vowels[j]) {
        result.push_back(input[i]);
      }
    }
    
    if (input[i] == 'e' || input[i] == 'u') {
      result.push_back(input[i]);
    }
  }
  
  // Check if vowels have been stored with loop
  for (int m = 0; m < result.size(); m++) {
    std::cout << result[m];
  }
}
