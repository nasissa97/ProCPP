#include <concepts>
#include <format>
#include <string>
#include <string_view>


template<typename T>
concept ToString = requires(T& v) {
 std::to_string(v);
};

auto concat(const ToString auto& v1, const ToString auto& v2) {
 return std::to_string(v1) + std::to_string(v2);
}

auto concat(std::string_view t1, std::string_view t2) {
 return std::string(t1) + std::string(t2);
}

auto concat(const ToString auto& t1, std::string_view t2) {
 return std::to_string(t1) + std::string(t2);
}

auto concat(std::string_view t1, const ToString auto& t2) {
 return std::string(t1) + std::to_string(t2);
}
