#ifndef BASE_NONCOPYABLE_HPP_
#define BASE_NONCOPYABLE_HPP_

namespace base {

class NonCopyable {
 protected:
  NonCopyable() = default;
  ~NonCopyable() = default;

  NonCopyable(const NonCopyable&) = delete;
  NonCopyable& operator=(const NonCopyable&) = delete;
};

}  // namespace base

#endif  // BASE_NONCOPYABLE_HPP_
