int numberSyllables(std::string word) {
 return std::count(word.begin(),word.end(),'-') + 1;
}
