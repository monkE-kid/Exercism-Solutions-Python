#include <string>

namespace log_line {
std::string message(std::string line) {
    std::size_t position = line.find(": ");
    return line.substr(position+2);
}

std::string log_level(std::string line) {
    std::size_t position = line.find("]");
    return line.substr(1, position - 1);

}
std::string reformat(std::string line) {
    std::string newformat = message(line) + " " + "(" + log_level(line) + ")";
    return newformat;
}
}  // namespace log_line
