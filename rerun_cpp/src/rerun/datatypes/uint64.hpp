// DO NOT EDIT! This file was auto-generated by crates/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/re_types/definitions/rerun/datatypes/uint64.fbs".

#pragma once

#include "../result.hpp"

#include <cstdint>
#include <memory>

namespace arrow {
    /// \private
    template <typename T>
    class NumericBuilder;

    class Array;
    class DataType;
    class UInt64Type;
    using UInt64Builder = NumericBuilder<UInt64Type>;
} // namespace arrow

namespace rerun::datatypes {
    /// **Datatype**: A 64bit unsigned integer.
    struct UInt64 {
        uint64_t value;

      public:
        UInt64() = default;

        UInt64(uint64_t value_) : value(value_) {}

        UInt64& operator=(uint64_t value_) {
            value = value_;
            return *this;
        }
    };
} // namespace rerun::datatypes

namespace rerun {
    template <typename T>
    struct Loggable;

    /// \private
    template <>
    struct Loggable<datatypes::UInt64> {
        static constexpr const char Name[] = "rerun.datatypes.UInt64";

        /// Returns the arrow data type this type corresponds to.
        static const std::shared_ptr<arrow::DataType>& arrow_datatype();

        /// Fills an arrow array builder with an array of this type.
        static rerun::Error fill_arrow_array_builder(
            arrow::UInt64Builder* builder, const datatypes::UInt64* elements, size_t num_elements
        );

        /// Serializes an array of `rerun::datatypes::UInt64` into an arrow array.
        static Result<std::shared_ptr<arrow::Array>> to_arrow(
            const datatypes::UInt64* instances, size_t num_instances
        );
    };
} // namespace rerun