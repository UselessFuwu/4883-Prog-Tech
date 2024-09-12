// Alexander Dela Cruz 
// Programming Techniques 
// 09/03/2024

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string line;

  while (cin >> line) {
    vector<char> left;     // To store characters to be inserted at the front
    vector<char> right;    // To store characters to be inserted at the back
    vector<char> braxWord; // To accumulate characters between brackets
    bool toggle = false;   // Toggle to switch between left and right

    for (char c : line) {
      if (c == '[') {
        if (toggle) {
          // Insert the segment at the front of the left vector
          left.insert(left.begin(), braxWord.begin(), braxWord.end());
        } else {
          // Insert the segment at the end of the right vector
          right.insert(right.end(), braxWord.begin(), braxWord.end());
        }
        braxWord.clear();
        toggle = true; // Switch to inserting at the front (left)
      } else if (c == ']') {
        // Finalize the current segment and place it into the correct vector
        if (toggle) {
          // Insert the segment at the front of the left vector
          left.insert(left.begin(), braxWord.begin(), braxWord.end());
        } else {
          // Insert the segment at the end of the right vector
          right.insert(right.end(), braxWord.begin(), braxWord.end());
        }
        braxWord.clear();
        toggle = false; // Switch to inserting at the back (right)
      } else {
        // Collect characters into the current segment
        braxWord.push_back(c);
      }
    }

    // Finalize the last segment
    if (toggle) {
      left.insert(left.begin(), braxWord.begin(), braxWord.end());
    } else {
      right.insert(right.end(), braxWord.begin(), braxWord.end());
    }

    // Output the result by printing left first (in reverse order), then right
    for (int j = 0; j < left.size(); j++) {
      cout << left[j];
    }
    for (int j = 0; j < right.size(); j++) {
      cout << right[j];
    }
    cout << endl;
    left.clear();
    right.clear();
  }

  return 0;
}
