/* ChapelTuple.chpl:40 */
 void chpl__init_ChapelTuple(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelTuple_p) {
    goto _exit_chpl__init_ChapelTuple;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelTuple";
  printModuleInit(modFormatStr, modStr, INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelTuple_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelTuple:;
  return;
}

/* ChapelTuple.chpl:141 */
 _ref_range_int64_t_bounded_F this5(_ref__tuple_1_star_range_int64_t_bounded_F this7, int64_t i) {
  string local__str_literal_510;
  chpl_bool call_tmp;
  chpl_bool T;
  chpl_bool call_tmp2;
  _ref_range_int64_t_bounded_F call_tmp3 = NULL;
  local__str_literal_510 = _str_literal_510;
  call_tmp = (i < INT64(1));
  if (call_tmp) {
    T = UINT8(true);
  } else {
    call_tmp2 = (i > INT64(1));
    T = call_tmp2;
  }
  if (T) {
    halt3(&local__str_literal_510, i, INT64(146), INT32(19));
  }
  call_tmp3 = (*(this7) + (i - INT64(1)));
  return call_tmp3;
}

