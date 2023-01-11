#pragma once
#include <concepts>
#include <iostream>

// Primitive Types
void print(std::integral auto &data) {
  std::cout << data << "\n";
}

void print(std::floating_point auto &data) {
  std::cout << data << "\n";
}

// C++ Library Types