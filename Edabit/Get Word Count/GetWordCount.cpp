int countWords(std::string str) {
	return std::count(str.begin(), str.end(), ' ') + 1;
}
