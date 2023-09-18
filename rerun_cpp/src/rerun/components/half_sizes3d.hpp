// DO NOT EDIT! This file was auto-generated by crates/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/re_types/definitions/rerun/components/half_sizes3d.fbs".

#pragma once

#include "../data_cell.hpp"
#include "../datatypes/vec3d.hpp"
#include "../result.hpp"

#include <cstdint>
#include <memory>
#include <utility>

namespace arrow {
    class DataType;
    class FixedSizeListBuilder;
    class MemoryPool;
} // namespace arrow

namespace rerun {
    namespace components {
        /// Half-sizes (extents) of a 3D box along its local axis, starting at its local
        /// origin/center.
        ///
        /// The box extends both in negative and positive direction along each axis.
        /// Negative sizes indicate that the box is flipped along the respective axis, but this has
        /// no effect on how it is displayed.
        struct HalfSizes3D {
            rerun::datatypes::Vec3D xyz;

            /// Name of the component, used for serialization.
            static const char NAME[];

          public:
            // Extensions to generated type defined in 'half_sizes3d_ext.cpp'

            /// Construct HalfSizes3D from x/y/z values.
            HalfSizes3D(float x, float y, float z) : xyz{x, y, z} {}

            float x() const {
                return xyz.x();
            }

            float y() const {
                return xyz.y();
            }

            float z() const {
                return xyz.z();
            }

          public:
            HalfSizes3D() = default;

            HalfSizes3D(rerun::datatypes::Vec3D _xyz) : xyz(std::move(_xyz)) {}

            HalfSizes3D& operator=(rerun::datatypes::Vec3D _xyz) {
                xyz = std::move(_xyz);
                return *this;
            }

            HalfSizes3D(const float (&arg)[3]) : xyz(arg) {}

            /// Returns the arrow data type this type corresponds to.
            static const std::shared_ptr<arrow::DataType>& arrow_datatype();

            /// Creates a new array builder with an array of this type.
            static Result<std::shared_ptr<arrow::FixedSizeListBuilder>> new_arrow_array_builder(
                arrow::MemoryPool* memory_pool
            );

            /// Fills an arrow array builder with an array of this type.
            static Error fill_arrow_array_builder(
                arrow::FixedSizeListBuilder* builder, const HalfSizes3D* elements,
                size_t num_elements
            );

            /// Creates a Rerun DataCell from an array of HalfSizes3D components.
            static Result<rerun::DataCell> to_data_cell(
                const HalfSizes3D* instances, size_t num_instances
            );
        };
    } // namespace components
} // namespace rerun
