#include <iostream>
#include <string>

using namespace std;

int main() {
  // a:
  string word1, word2, word3;

  cout << "Skriv tre ord: ";
  cin >> word1 >> word2 >> word3;

  // b:
  string sentence = word1 + " " + word2 + " " + word3 + ".";

  // c:
  cout << "word1.length() = " << word1.length() << endl;
  cout << "word2.length() = " << word2.length() << endl;
  cout << "word3.length() = " << word3.length() << endl;
  cout << "sentence.length() = " << sentence.length() << endl;

  // d:
  string sentence2 = sentence;

  // e:
  for (int i = 10; i <= 12 && i < sentence2.length(); i++) {
    sentence2[i] = 'x';
  }
  cout << "setence: " << sentence << endl;
  cout << "sentence2: " << sentence2 << endl;

  // f:
  string sentence_start = sentence.substr(0, min(5, (int)sentence.length()));
  cout << "setence: " << sentence << endl;
  cout << "sentence_start: " << sentence_start << endl;

  // g:
  string sub_str = "hallo";
  size_t found = sentence.find(sub_str);
  if (found != string::npos) {
    cout << "\"" << sub_str << "\"" << " finnes i sentence" << endl;
  } else {
    cout << "\"" << sub_str << "\"" << " finnes ikke i sentence" << endl;
  }

  // h:
  sub_str = "er";
  int count = 0;
  size_t pos = 0;
  while ((pos = sentence.find(sub_str, pos)) != string::npos) {
    ++count;
    pos += sub_str.length();
  }

  cout << "Antall \"" << sub_str << "\" i sentence: " << count << endl;

  return 0;
}