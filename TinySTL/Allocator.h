#pragma once

#include <cstddef>

namespace MyStl {
    template<typename T>
    class Allocator {
    public:
        using value_type = T;
        using pointer = T *;
        using const_pointer = const T *;
        using reference = T &;
        using const_reference = const T &;
        using size_type = size_t;
        using difference_type = ptrdiff_t;
    public:
        Allocator() noexcept = default;
        Allocator(const Allocator<T>&)noexcept {
            
        }
    };
}
