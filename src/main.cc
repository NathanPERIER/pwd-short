
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>


std::string get_pwd(const bool shorten_home) {
	const std::string pwd(std::getenv("PWD"));
	std::string res;

	size_t current_idx = 0;

	if(shorten_home) {
		const char* home_dir = std::getenv("HOME");
		if(home_dir != nullptr && pwd.starts_with(home_dir)) {
			res.push_back('~');
			current_idx = std::strlen(home_dir);
		}
	}

	if(current_idx >= pwd.length()) {
		return res;
	}

	size_t search_idx = pwd.find('/', current_idx + 1);
	
	while(search_idx != std::string::npos) {
		res.push_back('/');
		res.push_back(pwd[current_idx+1]);
		if(res.back() == '.') {
			res.push_back(pwd[current_idx+2]);
		}
		current_idx = search_idx;
		search_idx = pwd.find('/', search_idx+1);
	}

	res += std::string_view(pwd).substr(current_idx);

	return res;
}


int main() {
	
	std::cout << get_pwd(true) << std::endl;

	return 0;
}

