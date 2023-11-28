#ifndef KEYVALUEPAIR_HPP
#define KEYVALUEPAIR_HPP
namespace templates {
template<typename K, typename V>
class KeyValuePair {
 public:
  KeyValuePair(K key, V value)
   : m_key{ key }, m_value{ value }
  {}

 
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

#endif
