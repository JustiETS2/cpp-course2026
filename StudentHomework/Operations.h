#pragma once
#include <iostream>
#include "Student.h"
#include <vector>

std::ostream& operator<<(std::ostream& stream, std::vector<short>&& vec);
std::ostream& operator<<(std::ostream& stream, const Student& s);
bool operator<(const Student& lhs, const Student& rhs);