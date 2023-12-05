#include <concepts>
#include <iostream>
#include <string>
#include <utility>


namespace templates {
template<std::integral K, std::floating_point V>
class KeyValuePair2 {
 public:
  KeyValuePair2(K key, V value)
   : m_key{ std::move(key) }, m_value{ std::move(value) }
  {
    std::cout << "Regular Template Constructor" << std::endl;
  }

 
  /** Getter and Setter for m_key */
  auto getKey() {
   return m_key;
  }

  void setKey(K key) {
   m_key = key;
  }

  /** Getter and Setter for m_value */
  auto getValue() {
   return m_value;
  }

  void setValue(V value) {
   m_value = value;
  }

 private:
  K m_key;
  V m_value;
};
};
