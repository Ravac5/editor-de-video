#include <iostream>
#include "fileshandler.cpp"

int main(){
    std::filesystem::path path;
    std::cout << "insert a path" << std::endl;
    std::cin >> path;
    if (!std::filesystem::is_directory(path)){ 
        std::cout << "directory not found!" << std::endl;
    } else {
        std::cout << path << std::endl;
        std::cout << "Number of files: "<< countFiles(&path) << std::endl;
        std::cout << "Number of directories: "<< countDirectories(&path) << std::endl;
    }
    std::filesystem::path clear(path);
    path.~path();
    return 0;
}