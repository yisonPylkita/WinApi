/// @file reg.hpp
#pragma once
#include "Arch.hpp"
#include "AccessRights.hpp"
#include "Path.hpp"
#include "Key.hpp"
#include "Value.hpp"
#include <string>
#include <type_traits>

namespace winapi {
    namespace reg {
        ///
        /// Get value of one registry key
        /// @param[in] key Full path to registry key
        /// @param[in] name Name of value to retrive
        /// @return Retrived value
        ///
        Value GetValue(Path key, std::wstring name);
        // TODO: tag based template dispatch
        template <typename T>
        Value SetValue(Path key, std::wstring name, const T value)
        {
            SetValue<T>(typename traits_type<t>::tag())
        }
    }
}