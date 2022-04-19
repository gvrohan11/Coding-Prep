// O(n) run time
bool isPalindrome(std::string str) {
	if (str.length() <= 1) return true;
	std::string reverse;
	for (int i = str.length() - 1; i >= 0; i–) {
		reverse.push_back(i);
	}
	if (reverse == str) return true;
	else return false;
}
