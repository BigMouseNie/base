#ifndef BASE_SINGLETON_HPP_
#define BASE_SINGLETON_HPP_

namespace base {

template <typename T>
class Singleton {
 public:
  Singleton(const Singleton&) = delete;
  Singleton& operator=(const Singleton&) = delete;

  static T* Instance() {
    static T instance;
    return &instance;
  }

 protected:
  Singleton() = default;
  ~Singleton() = default;
};

}  // namespace base

#endif  // BASE_SINGLETON_HPP_
