// DO NOT EDIT! This file was auto-generated by crates/re_types_builder/src/codegen/rust/to_archetype.rs

#![allow(unused_imports)]
#![allow(unused_parens)]
#![allow(clippy::clone_on_copy)]
#![allow(clippy::cloned_instead_of_copied)]

use crate::{LatestAtResults, PromiseResolver, PromiseResult};
use re_types_core::{Archetype, Loggable as _};
use std::sync::Arc;

impl crate::ToArchetype<re_types::blueprint::archetypes::VisualBounds> for LatestAtResults {
    #[inline]
    fn to_archetype(
        &self,
        resolver: &PromiseResolver,
    ) -> PromiseResult<crate::Result<re_types::blueprint::archetypes::VisualBounds>> {
        re_tracing::profile_function!(<re_types::blueprint::archetypes::VisualBounds>::name());

        // --- Required ---

        // --- Recommended/Optional ---

        use re_types::components::Range2D;
        let range2d = if let Some(range2d) = self.get(<Range2D>::name()) {
            match range2d.to_dense::<Range2D>(resolver) {
                PromiseResult::Pending => return PromiseResult::Pending,
                PromiseResult::Error(promise_err) => return PromiseResult::Error(promise_err),
                PromiseResult::Ready(query_res) => match query_res {
                    Ok(data) => data.first().cloned(),
                    Err(query_err) => return PromiseResult::Ready(Err(query_err)),
                },
            }
        } else {
            None
        };

        // ---

        let arch = re_types::blueprint::archetypes::VisualBounds { range2d };

        PromiseResult::Ready(Ok(arch))
    }
}
