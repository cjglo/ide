#include "FileEditor.hpp"

namespace file_system {


    FileEditor::FileEditor(std::string fileName) : fileName(std::move(fileName)) {}


    bool FileEditor::initFile() {
        auto inputFile = std::ifstream{fileName};

        if(inputFile.good()) {
            return true;
        }

        auto outputFile = std::ofstream{fileName};
        auto status = outputFile.good();
        outputFile.close();
        return status;
    }


    std::string FileEditor::readFile() {
        auto file = std::ifstream{fileName};
        if(!file.good()) {
            // TODO: put in logger SEVERE
            return "";
        }

        return std::string{(std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>()};
    }

    bool FileEditor::writeFile(const std::string& content) {
        auto file = std::ofstream{fileName};
        if (!file.is_open()) {
            // TODO add log
            return false;
        }

        // Write to the file
        file << content;

        // Close the file after writing
        file.close();
        return true;
    }


}