// DO NOT EDIT! This file was auto-generated by crates/re_types_builder/src/codegen/rust/to_archetype.rs

#![allow(unused_imports)]
#![allow(unused_parens)]
#![allow(clippy::clone_on_copy)]
#![allow(clippy::cloned_instead_of_copied)]

use crate::{LatestAtResults, PromiseResolver, PromiseResult};
use re_types_core::{Archetype, Loggable as _};
use std::sync::Arc;

impl crate::ToArchetype<re_types::archetypes::TextDocument> for LatestAtResults {
    #[inline]
    fn to_archetype(
        &self,
        resolver: &PromiseResolver,
    ) -> PromiseResult<crate::Result<re_types::archetypes::TextDocument>> {
        re_tracing::profile_function!(<re_types::archetypes::TextDocument>::name());

        // --- Required ---

        use re_types::components::Text;
        let text = match self.get_required(<Text>::name()) {
            Ok(text) => text,
            Err(query_err) => return PromiseResult::Ready(Err(query_err)),
        };
        let text = match text.to_dense::<Text>(resolver) {
            PromiseResult::Pending => return PromiseResult::Pending,
            PromiseResult::Error(promise_err) => return PromiseResult::Error(promise_err),
            PromiseResult::Ready(query_res) => match query_res {
                Ok(data) => {
                    let Some(first) = data.first().cloned() else {
                        return PromiseResult::Error(std::sync::Arc::new(
                            re_types_core::DeserializationError::missing_data(),
                        ));
                    };
                    first
                }
                Err(query_err) => return PromiseResult::Ready(Err(query_err)),
            },
        };

        // --- Recommended/Optional ---

        use re_types::components::MediaType;
        let media_type = if let Some(media_type) = self.get(<MediaType>::name()) {
            match media_type.to_dense::<MediaType>(resolver) {
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

        let arch = re_types::archetypes::TextDocument { text, media_type };

        PromiseResult::Ready(Ok(arch))
    }
}
