/* Sort.chpl:166 */
 void chpl__init_Sort(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  DefaultComparator_chpl this_chpl;
  DefaultComparator_chpl wrap_call_tmp_chpl;
  _ref_DefaultComparator ret_to_arg_ref_tmp__chpl = NULL;
  DefaultComparator_chpl this_chpl2;
  DefaultComparator_chpl wrap_call_tmp_chpl2;
  _ref_DefaultComparator ret_to_arg_ref_tmp__chpl2 = NULL;
  ReverseComparator_DefaultComparator_chpl call_tmp_chpl;
  _ref_ReverseComparator_DefaultComparator ret_to_arg_ref_tmp__chpl3 = NULL;
  if (chpl__init_Sort_p) {
    goto _exit_chpl__init_Sort_chpl;
  }
  modFormatStr_chpl = "%*s\n";
  modStr_chpl = "Sort";
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(4));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Sort_p = UINT8(true);
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_DefaultComparator_chpl(&this_chpl, ret_to_arg_ref_tmp__chpl);
  defaultComparator_chpl = wrap_call_tmp_chpl;
  ret_to_arg_ref_tmp__chpl2 = &wrap_call_tmp_chpl2;
  _construct_DefaultComparator_chpl(&this_chpl2, ret_to_arg_ref_tmp__chpl2);
  ret_to_arg_ref_tmp__chpl3 = &call_tmp_chpl;
  ReverseComparator_chpl(&wrap_call_tmp_chpl2, ret_to_arg_ref_tmp__chpl3);
  reverseComparator_chpl = call_tmp_chpl;
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Sort_chpl:;
  return;
}

/* Sort.chpl:580 */
 void _construct_DefaultComparator_chpl(DefaultComparator_chpl* const meme_chpl, _ref_DefaultComparator _retArg_chpl) {
  DefaultComparator_chpl this_chpl;
  *(_retArg_chpl) = *(meme_chpl);
  return;
}

/* Sort.chpl:602 */
 void _construct_ReverseComparator_chpl(DefaultComparator_chpl* const comparator_chpl, ReverseComparator_DefaultComparator_chpl* const meme_chpl, _ref_ReverseComparator_DefaultComparator _retArg_chpl) {
  ReverseComparator_DefaultComparator_chpl this_chpl;
  this_chpl = *(meme_chpl);
  (&this_chpl)->comparator_chpl = *(comparator_chpl);
  *(_retArg_chpl) = this_chpl;
  return;
}

/* Sort.chpl:615 */
 void ReverseComparator_chpl(DefaultComparator_chpl* const comparator_chpl, _ref_ReverseComparator_DefaultComparator _retArg_chpl) {
  ReverseComparator_DefaultComparator_chpl this_chpl;
  ReverseComparator_DefaultComparator_chpl this_chpl2;
  DefaultComparator_chpl _init_class_tmp__chpl;
  ReverseComparator_DefaultComparator_chpl wrap_call_tmp_chpl;
  _ref_ReverseComparator_DefaultComparator ret_to_arg_ref_tmp__chpl = NULL;
  (&this_chpl2)->comparator_chpl = _init_class_tmp__chpl;
  (&this_chpl2)->comparator_chpl = *(comparator_chpl);
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
  _construct_ReverseComparator_chpl(comparator_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl);
  *(_retArg_chpl) = wrap_call_tmp_chpl;
  return;
}

