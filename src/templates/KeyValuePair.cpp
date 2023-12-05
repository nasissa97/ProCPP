#include <iostream>
#include <string>
#include <utility>


namespace templates {
template<typename K, typename V>
class KeyValuePair {
 public:
  KeyValuePair(K key, V value)
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

template<>
class KeyValuePair<const char*, const char*> {
 public:
  KeyValuePair(const char* key, const char* value)
   : m_key{ std::move(key) }, m_value{ std::move(value) }
  {
    std::cout << "Specialization Template Constructor" << std::endl;
  }

 
  /** Getter and Setter for m_key */
  auto getKey() {
   return m_key;
  }

  void setKey(std::string key) {
   m_key = key;
  }

  /** Getter and Setter for m_value */
  auto getValue() {
   return m_value;
  }

  void setValue(std::string value) {
   m_value = value;
  }

 private:
  std::string m_key;
  std::string  m_value;
};
};
