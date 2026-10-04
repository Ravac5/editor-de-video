#include "fileshandler.h"
#include <iostream>
#include <string>

int countFiles(const std::filesystem::path path) {
    int numberFiles = 0;
    std::filesystem::path temp_path;
    for (const auto& entry: std::filesystem::recursive_directory_iterator{path}) { //scans recursively in search of files
        if (!entry.is_directory() && checkextension(entry)){
        //std::cout << entry << std::endl; // prints every file path and name (used for debug)
        numberFiles++;
        }
    }
    return numberFiles;
}

int countDirectories(const std::filesystem::path path) {
    int numberDirectories = 0;
     for (const auto& entry: std::filesystem::recursive_directory_iterator{path}) { //scans recursively in search of directories
        if (entry.is_directory()){
        //std::cout << entry << std::endl; // prints every directory path and name (used for debug)
            numberDirectories++;
        }
    }
    return numberDirectories;
}

bool checkextension(const std::filesystem::directory_entry entry){
    if (entry.path().extension() == ".mp4" || entry.path().extension() == ".mov" || entry.path().extension() == ".m4a" || entry.path().extension() == ".mkv"){
        return true;
    } else {
        return false;
    }

}