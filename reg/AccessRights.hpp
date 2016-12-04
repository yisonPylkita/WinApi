// @file AccessRights.hpp
#pragma once
namespace winapi {
    namespace reg {
        /// Defines access rights to registry key
        enum class AccessRights : REGSAM {
            READ = KEY_READ, ///> read key right
            WRITE = KEY_WRITE, ///> write key right
            
        }
    }
}
