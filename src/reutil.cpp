#include<string>
#include<vector>
#include<regex>

#include "reutil.h"

namespace reutil {
    std::vector<std::string> groups(std::string regex_text, std::string text) {
        std::vector<std::string> result;
        std::regex regex(regex_text);
        std::smatch match;
        std::regex_match(text, match, regex);
        for (auto group: match) {
            result.push_back(group);
        }
        return result;
    }
}