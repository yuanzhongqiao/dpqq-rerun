# DO NOT EDIT! This file was auto-generated by crates/re_types_builder/src/codegen/python/mod.rs
# Based on "crates/re_types/definitions/rerun/blueprint/components/visible_time_range_sequence.fbs".

# You can extend this class by creating a "VisibleTimeRangeSequenceExt" class in "visible_time_range_sequence_ext.py".

from __future__ import annotations

from ... import datatypes
from ..._baseclasses import ComponentBatchMixin

__all__ = ["VisibleTimeRangeSequence", "VisibleTimeRangeSequenceBatch", "VisibleTimeRangeSequenceType"]


class VisibleTimeRangeSequence(datatypes.VisibleTimeRange):
    """**Component**: The range of values on time timelines that will be included in a space view query."""

    # You can define your own __init__ function as a member of VisibleTimeRangeSequenceExt in visible_time_range_sequence_ext.py

    # Note: there are no fields here because VisibleTimeRangeSequence delegates to datatypes.VisibleTimeRange
    pass


class VisibleTimeRangeSequenceType(datatypes.VisibleTimeRangeType):
    _TYPE_NAME: str = "rerun.blueprint.components.VisibleTimeRangeSequence"


class VisibleTimeRangeSequenceBatch(datatypes.VisibleTimeRangeBatch, ComponentBatchMixin):
    _ARROW_TYPE = VisibleTimeRangeSequenceType()
