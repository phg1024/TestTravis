#include <vector>

template <typename T>
class vec {
public:
  vec() {}
  ~vec() {}

  void add(const T& x) { data.push_back(x); }
  void remove(const T& x) { data.pop_back(x); }
  T operator[](int idx) { return data[idx]; }

private:
  std::vector<T> data;
};
