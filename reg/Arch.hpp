// @file Arch.hpp
#pragma once
namespace winapi {
    namespace reg {
        /// Defines registry key architecture
        enum class Arch : REGSAM {
            x32 = KEY_WOW64_32KEY, ///< 32 bit key
            x64 = KEY_WOW64_64KEY ///< 64 bit key
        }
    }
}
