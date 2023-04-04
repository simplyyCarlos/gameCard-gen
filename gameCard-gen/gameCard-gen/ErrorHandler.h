#include <iostream>
using namespace std;

class ErrorHandler {
public:
    void handle(const std::exception& e, const std::string& scope, const std::string& fileName, int lineNumber) {
        // Handle the error here, for example by logging it along with the scope and other information
        std::cerr << "Error in " << scope << " (" << fileName << ":" << lineNumber << "): " << e.what() << std::endl;
    }
};