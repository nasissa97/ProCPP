#ifndef CONCAT_HPP
#define CONCAT_HPP

#include <concepts>
#include <format>
#include <string>


template<typename T>
concept ToString = requires(T& v) {
 std::to_string(v);
};

auto concat(const ToString auto& v1, const ToString auto& v2) {
 return std::to_string(v1) + std::to_string(v2);
}

#endif
