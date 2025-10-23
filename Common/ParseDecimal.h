#pragma once
#include <print>
#include <string>
#include <stdexcept>
#include <expected>

namespace Game2D::Common {
	std::expected<double, std::string> parse_decimal(const std::string& input);
} // namespace common