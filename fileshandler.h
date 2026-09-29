#pragma once
#include <filesystem>

int countFiles(const std::filesystem::path *path);
int countDirectories(const std::filesystem::path *path);
int searchFiles(const std::filesystem::path *path, const int &numberoffiles);