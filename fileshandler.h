#pragma once
#include <filesystem>

int countFiles(const std::filesystem::path path);
int countDirectories(const std::filesystem::path path);
bool checkextension(const std::filesystem::directory_entry entry);
