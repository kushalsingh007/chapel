/* ChapelRange.chpl:86 */
 void chpl__init_ChapelRange(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelRange_p) {
    goto _exit_chpl__init_ChapelRange;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelRange";
  printModuleInit(modFormatStr, modStr, INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelRange_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelRange:;
  return;
}

/* ChapelRange.chpl:139 */
 range_int64_t_boundedLow_F _construct_range3(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_boundedLow_F* const meme) {
  range_int64_t_boundedLow_F this7;
  this7 = *(meme);
  (&this7)->_low = _low;
  (&this7)->_high = _high;
  (&this7)->_stride = _stride;
  (&this7)->_alignment = _alignment;
  (&this7)->_aligned = _aligned;
  return this7;
}

/* ChapelRange.chpl:139 */
 range_int64_t_bounded_F _construct_range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_bounded_F* const meme) {
  range_int64_t_bounded_F this7;
  this7 = *(meme);
  (&this7)->_low = _low;
  (&this7)->_high = _high;
  (&this7)->_stride = _stride;
  (&this7)->_alignment = _alignment;
  (&this7)->_aligned = _aligned;
  return this7;
}

/* ChapelRange.chpl:139 */
 range_int64_t_bounded_T _construct_range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_bounded_T* const meme) {
  range_int64_t_bounded_T this7;
  this7 = *(meme);
  (&this7)->_low = _low;
  (&this7)->_high = _high;
  (&this7)->_stride = _stride;
  (&this7)->_alignment = _alignment;
  (&this7)->_aligned = _aligned;
  return this7;
}

/* ChapelRange.chpl:175 */
 range_int64_t_boundedLow_F range3(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned) {
  range_int64_t_boundedLow_F this7;
  range_int64_t_boundedLow_F this8;
  range_int64_t_boundedLow_F wrap_call_tmp;
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  _ref_int64_t call_tmp3 = NULL;
  chpl_bool call_tmp4;
  _ref_chpl_bool call_tmp5 = NULL;
  (&this8)->_low = INT64(0);
  (&this8)->_high = INT64(0);
  (&this8)->_stride = INT64(0);
  (&this8)->_alignment = INT64(0);
  (&this8)->_aligned = UINT8(false);
  (&this8)->_low = INT64(1);
  (&this8)->_high = INT64(0);
  (&this8)->_stride = INT64(1);
  (&this8)->_alignment = INT64(0);
  (&this8)->_aligned = UINT8(false);
  wrap_call_tmp = _construct_range3(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), &this8);
  this7 = wrap_call_tmp;
  call_tmp = &((&this7)->_low);
  *(call_tmp) = _low;
  call_tmp2 = &((&this7)->_high);
  *(call_tmp2) = _high;
  call_tmp3 = &((&this7)->_alignment);
  *(call_tmp3) = _alignment;
  call_tmp4 = (_stride == INT64(1));
  assert_chpl(call_tmp4);
  call_tmp5 = &((&this7)->_aligned);
  *(call_tmp5) = _aligned;
  return this7;
}

/* ChapelRange.chpl:175 */
 range_int64_t_bounded_F range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned) {
  range_int64_t_bounded_F this7;
  range_int64_t_bounded_F this8;
  range_int64_t_bounded_F wrap_call_tmp;
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  _ref_int64_t call_tmp3 = NULL;
  chpl_bool call_tmp4;
  _ref_chpl_bool call_tmp5 = NULL;
  (&this8)->_low = INT64(0);
  (&this8)->_high = INT64(0);
  (&this8)->_stride = INT64(0);
  (&this8)->_alignment = INT64(0);
  (&this8)->_aligned = UINT8(false);
  (&this8)->_low = INT64(1);
  (&this8)->_high = INT64(0);
  (&this8)->_stride = INT64(1);
  (&this8)->_alignment = INT64(0);
  (&this8)->_aligned = UINT8(false);
  wrap_call_tmp = _construct_range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), &this8);
  this7 = wrap_call_tmp;
  call_tmp = &((&this7)->_low);
  *(call_tmp) = _low;
  call_tmp2 = &((&this7)->_high);
  *(call_tmp2) = _high;
  call_tmp3 = &((&this7)->_alignment);
  *(call_tmp3) = _alignment;
  call_tmp4 = (_stride == INT64(1));
  assert_chpl(call_tmp4);
  call_tmp5 = &((&this7)->_aligned);
  *(call_tmp5) = _aligned;
  return this7;
}

/* ChapelRange.chpl:175 */
 range_int64_t_bounded_T range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned) {
  range_int64_t_bounded_T this7;
  range_int64_t_bounded_T this8;
  range_int64_t_bounded_T wrap_call_tmp;
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  _ref_int64_t call_tmp3 = NULL;
  _ref_int64_t call_tmp4 = NULL;
  _ref_chpl_bool call_tmp5 = NULL;
  (&this8)->_low = INT64(0);
  (&this8)->_high = INT64(0);
  (&this8)->_stride = INT64(0);
  (&this8)->_alignment = INT64(0);
  (&this8)->_aligned = UINT8(false);
  (&this8)->_low = INT64(1);
  (&this8)->_high = INT64(0);
  (&this8)->_stride = INT64(1);
  (&this8)->_alignment = INT64(0);
  (&this8)->_aligned = UINT8(false);
  wrap_call_tmp = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), &this8);
  this7 = wrap_call_tmp;
  call_tmp = &((&this7)->_low);
  *(call_tmp) = _low;
  call_tmp2 = &((&this7)->_high);
  *(call_tmp2) = _high;
  call_tmp3 = &((&this7)->_stride);
  *(call_tmp3) = _stride;
  call_tmp4 = &((&this7)->_alignment);
  *(call_tmp4) = _alignment;
  call_tmp5 = &((&this7)->_aligned);
  *(call_tmp5) = _aligned;
  return this7;
}

/* ChapelRange.chpl:210 */
 void chpl_build_bounded_range(int64_t low, int64_t high, _ref_range_int64_t_bounded_F _retArg) {
  range_int64_t_bounded_F wrap_call_tmp;
  wrap_call_tmp = range2(low, high, INT64(1), INT64(0), UINT8(false));
  *(_retArg) = wrap_call_tmp;
  return;
}

/* ChapelRange.chpl:219 */
 void chpl_build_low_bounded_range(int64_t low, _ref_range_int64_t_boundedLow_F _retArg) {
  range_int64_t_boundedLow_F wrap_call_tmp;
  wrap_call_tmp = range3(low, INT64(0), INT64(1), INT64(0), UINT8(false));
  *(_retArg) = wrap_call_tmp;
  return;
}

/* ChapelRange.chpl:322 */
 int64_t length(_ref_range_int64_t_bounded_F this7) {
  int64_t ret;
  int64_t coerce_tmp;
  int64_t coerce_tmp2;
  chpl_bool call_tmp;
  int64_t ret2;
  int64_t ret3;
  int64_t call_tmp2;
  int64_t call_tmp3;
  int64_t call_tmp4;
  chpl_check_nil(this7, INT64(338), INT64(20));
  coerce_tmp = (this7)->_low;
  chpl_check_nil(this7, INT64(338), INT64(20));
  coerce_tmp2 = (this7)->_high;
  call_tmp = (coerce_tmp > coerce_tmp2);
  if (call_tmp) {
    ret = INT64(0);
    goto _end_length;
  }
  chpl_check_nil(this7, INT64(340), INT64(20));
  ret2 = (this7)->_high;
  chpl_check_nil(this7, INT64(340), INT64(20));
  ret3 = (this7)->_low;
  call_tmp2 = (ret2 - ret3);
  call_tmp3 = (call_tmp2 / INT64(1));
  call_tmp4 = (call_tmp3 + INT64(1));
  ret = call_tmp4;
  _end_length:;
  return ret;
}

/* ChapelRange.chpl:400 */
 chpl_bool isAmbiguous(_ref_range_int64_t_bounded_T this7) {
  chpl_bool ret;
  chpl_bool call_tmp;
  chpl_bool T;
  int64_t ret2;
  chpl_bool call_tmp2;
  chpl_bool T2;
  int64_t ret3;
  chpl_bool call_tmp3;
  chpl_check_nil(this7, INT64(401), INT64(20));
  ret = (this7)->_aligned;
  call_tmp = (! ret);
  if (call_tmp) {
    chpl_check_nil(this7, INT64(401), INT64(20));
    ret2 = (this7)->_stride;
    call_tmp2 = (ret2 > INT64(1));
    if (call_tmp2) {
      T2 = UINT8(true);
    } else {
      chpl_check_nil(this7, INT64(401), INT64(20));
      ret3 = (this7)->_stride;
      call_tmp3 = (ret3 < INT64(-1));
      T2 = call_tmp3;
    }
    T = T2;
  } else {
    T = UINT8(false);
  }
  return T;
}

/* ChapelRange.chpl:949 */
 void chpl_by_help(range_int64_t_bounded_F* const r, int64_t step, _ref_range_int64_t_bounded_T _retArg) {
  int64_t ret;
  int64_t ret2;
  int64_t call_tmp;
  chpl_bool const_tmp_x1;
  int64_t const_tmp_x2;
  _tuple_2_chpl_bool_int64_t type_tmp;
  _tuple_2_chpl_bool_int64_t call_tmp2;
  chpl_bool call_tmp_x1;
  int64_t call_tmp_x2;
  chpl_bool call_tmp3;
  int64_t ret3;
  chpl_bool call_tmp_x12;
  int64_t call_tmp_x22;
  chpl_bool call_tmp4;
  int64_t ret4;
  chpl_bool ret5;
  int64_t ret6;
  range_int64_t_bounded_T call_tmp5;
  ret = (r)->_low;
  ret2 = (r)->_high;
  call_tmp = (INT64(1) * step);
  (&type_tmp)->x1 = UINT8(false);
  (&type_tmp)->x2 = INT64(0);
  call_tmp3 = (call_tmp > INT64(0));
  if (call_tmp3) {
    ret3 = (r)->_low;
    call_tmp_x1 = UINT8(true);
    call_tmp_x2 = ret3;
  } else {
    call_tmp4 = (call_tmp < INT64(0));
    if (call_tmp4) {
      ret4 = (r)->_high;
      call_tmp_x12 = UINT8(true);
      call_tmp_x22 = ret4;
    } else {
      ret5 = (r)->_aligned;
      ret6 = (r)->_alignment;
      call_tmp_x12 = ret5;
      call_tmp_x22 = ret6;
    }
    call_tmp_x1 = call_tmp_x12;
    call_tmp_x2 = call_tmp_x22;
  }
  (&call_tmp2)->x1 = call_tmp_x1;
  (&call_tmp2)->x2 = call_tmp_x2;
  type_tmp = call_tmp2;
  const_tmp_x1 = (&type_tmp)->x1;
  const_tmp_x2 = (&type_tmp)->x2;
  call_tmp5 = range(ret, ret2, call_tmp, const_tmp_x2, const_tmp_x1);
  *(_retArg) = call_tmp5;
  return;
}

/* ChapelRange.chpl:1048 */
 void this3(_ref_range_int64_t_bounded_F this7, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg) {
  int64_t call_tmp;
  int64_t call_tmp2;
  int64_t call_tmp3;
  int64_t call_tmp4;
  _tuple_2_star_int64_t type_tmp;
  _tuple_2_star_int64_t call_tmp5;
  int64_t newlo;
  int64_t T;
  chpl_bool call_tmp6;
  int64_t newhi;
  int64_t T2;
  chpl_bool call_tmp7;
  range_int64_t_bounded_F result;
  chpl_bool call_tmp8;
  chpl_bool T3;
  chpl_bool T4;
  chpl_bool coerce_tmp;
  chpl_bool coerce_tmp2;
  chpl_check_nil(this7, INT64(1086), INT64(20));
  call_tmp = (this7)->_low;
  chpl_check_nil(this7, INT64(1087), INT64(20));
  call_tmp2 = (this7)->_high;
  call_tmp3 = (other)->_low;
  call_tmp4 = (other)->_high;
  *(type_tmp + INT64(0)) = INT64(0);
  *(type_tmp + INT64(1)) = INT64(0);
  *(call_tmp5 + INT64(0)) = INT64(1);
  *(call_tmp5 + INT64(1)) = INT64(0);
  *(type_tmp + INT64(0)) = *(call_tmp5 + INT64(0));
  *(type_tmp + INT64(1)) = *(call_tmp5 + INT64(1));
  call_tmp6 = (call_tmp > call_tmp3);
  if (call_tmp6) {
    T = call_tmp;
  } else {
    T = call_tmp3;
  }
  newlo = T;
  call_tmp7 = (call_tmp2 < call_tmp4);
  if (call_tmp7) {
    T2 = call_tmp2;
  } else {
    T2 = call_tmp4;
  }
  newhi = T2;
  call_tmp8 = (! UINT8(false));
  if (call_tmp8) {
    chpl_check_nil(this7, INT64(1190), INT64(20));
    coerce_tmp = (this7)->_aligned;
    if (coerce_tmp) {
      T4 = UINT8(true);
    } else {
      coerce_tmp2 = (other)->_aligned;
      T4 = coerce_tmp2;
    }
    T3 = T4;
  } else {
    T3 = UINT8(false);
  }
  result = range2(newlo, newhi, INT64(1), INT64(0), T3);
  *(_retArg) = result;
  return;
}

/* ChapelRange.chpl:1048 */
 void this4(_ref_range_int64_t_bounded_F this7, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg) {
  int64_t call_tmp;
  int64_t call_tmp2;
  int64_t call_tmp3;
  int64_t call_tmp4;
  _tuple_2_star_int64_t type_tmp;
  _tuple_2_star_int64_t call_tmp5;
  int64_t newlo;
  int64_t T;
  chpl_bool call_tmp6;
  int64_t newhi;
  int64_t T2;
  chpl_bool call_tmp7;
  range_int64_t_bounded_F result;
  chpl_bool call_tmp8;
  chpl_bool T3;
  chpl_bool T4;
  chpl_bool coerce_tmp;
  chpl_bool coerce_tmp2;
  chpl_check_nil(this7, INT64(1086), INT64(20));
  call_tmp = (this7)->_low;
  chpl_check_nil(this7, INT64(1087), INT64(20));
  call_tmp2 = (this7)->_high;
  call_tmp3 = (other)->_low;
  call_tmp4 = (other)->_high;
  *(type_tmp + INT64(0)) = INT64(0);
  *(type_tmp + INT64(1)) = INT64(0);
  *(call_tmp5 + INT64(0)) = INT64(1);
  *(call_tmp5 + INT64(1)) = INT64(0);
  *(type_tmp + INT64(0)) = *(call_tmp5 + INT64(0));
  *(type_tmp + INT64(1)) = *(call_tmp5 + INT64(1));
  call_tmp6 = (call_tmp > call_tmp3);
  if (call_tmp6) {
    T = call_tmp;
  } else {
    T = call_tmp3;
  }
  newlo = T;
  call_tmp7 = (call_tmp2 < call_tmp4);
  if (call_tmp7) {
    T2 = call_tmp2;
  } else {
    T2 = call_tmp4;
  }
  newhi = T2;
  call_tmp8 = (! UINT8(false));
  if (call_tmp8) {
    chpl_check_nil(this7, INT64(1190), INT64(20));
    coerce_tmp = (this7)->_aligned;
    if (coerce_tmp) {
      T4 = UINT8(true);
    } else {
      coerce_tmp2 = (other)->_aligned;
      T4 = coerce_tmp2;
    }
    T3 = T4;
  } else {
    T3 = UINT8(false);
  }
  result = range2(newlo, newhi, INT64(1), INT64(0), T3);
  *(_retArg) = result;
  return;
}

/* ChapelRange.chpl:1241 */
 void chpl_count_help(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg) {
  string local__str_literal_680;
  chpl_bool call_tmp;
  range_int64_t_bounded_F call_tmp2;
  chpl_bool call_tmp3;
  chpl_bool T;
  chpl_bool call_tmp4;
  int64_t call_tmp5;
  int64_t T2;
  chpl_bool call_tmp6;
  int64_t call_tmp7;
  int64_t call_tmp8;
  int64_t call_tmp9;
  int64_t coerce_tmp;
  int64_t T3;
  chpl_bool call_tmp10;
  int64_t call_tmp11;
  int64_t call_tmp12;
  int64_t call_tmp13;
  int64_t coerce_tmp2;
  range_int64_t_bounded_F call_tmp14;
  int64_t coerce_tmp3;
  chpl_bool coerce_tmp4;
  local__str_literal_680 = _str_literal_680;
  call_tmp = (count == INT64(0));
  if (call_tmp) {
    call_tmp2 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false));
    *(_retArg) = call_tmp2;
    goto _end_chpl_count_help;
  }
  call_tmp3 = (! UINT8(false));
  if (call_tmp3) {
    call_tmp4 = (count < INT64(0));
    T = call_tmp4;
  } else {
    T = UINT8(false);
  }
  if (T) {
    halt(&local__str_literal_680, INT64(1262), INT32(20));
  }
  call_tmp5 = (count * INT64(1));
  call_tmp6 = (call_tmp5 > INT64(0));
  if (call_tmp6) {
    call_tmp7 = (r)->_low;
    T2 = call_tmp7;
  } else {
    call_tmp8 = (call_tmp5 + INT64(1));
    coerce_tmp = (r)->_high;
    call_tmp9 = chpl__add(coerce_tmp, call_tmp8);
    T2 = call_tmp9;
  }
  call_tmp10 = (call_tmp5 < INT64(0));
  if (call_tmp10) {
    call_tmp11 = (r)->_high;
    T3 = call_tmp11;
  } else {
    call_tmp12 = (call_tmp5 - INT64(1));
    coerce_tmp2 = (r)->_low;
    call_tmp13 = chpl__add(coerce_tmp2, call_tmp12);
    T3 = call_tmp13;
  }
  coerce_tmp3 = (r)->_alignment;
  coerce_tmp4 = (r)->_aligned;
  call_tmp14 = range2(T2, T3, INT64(1), coerce_tmp3, coerce_tmp4);
  *(_retArg) = call_tmp14;
  _end_chpl_count_help:;
  return;
}

/* ChapelRange.chpl:1313 */
 void chpl___POUND_(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg) {
  range_int64_t_bounded_F call_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_count_help(r, count, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelRange.chpl:1332 */
 chpl_bool chpl_checkIfRangeIterWillOverflow(int64_t low, int64_t high, int64_t stride, int64_t first, int64_t last, chpl_bool shouldHalt) {
  string local__str_literal_694;
  chpl_bool ret;
  chpl_bool call_tmp;
  chpl_bool willOverFlow;
  chpl_bool call_tmp2;
  chpl_bool T;
  chpl_bool call_tmp3;
  int64_t call_tmp4;
  chpl_bool call_tmp5;
  chpl_bool call_tmp6;
  chpl_bool T2;
  chpl_bool call_tmp7;
  int64_t call_tmp8;
  chpl_bool call_tmp9;
  chpl_bool T3;
  local__str_literal_694 = _str_literal_694;
  call_tmp = (low > high);
  if (call_tmp) {
    ret = UINT8(false);
    goto _end_chpl_checkIfRangeIterWillOverflow;
  }
  willOverFlow = UINT8(false);
  call_tmp2 = (last > INT64(0));
  if (call_tmp2) {
    call_tmp3 = (stride > INT64(0));
    T = call_tmp3;
  } else {
    T = UINT8(false);
  }
  if (T) {
    call_tmp4 = (INT64(9223372036854775807) - last);
    call_tmp5 = (stride > call_tmp4);
    if (call_tmp5) {
      willOverFlow = UINT8(true);
    }
  } else {
    call_tmp6 = (last < INT64(0));
    if (call_tmp6) {
      call_tmp7 = (stride < INT64(0));
      T2 = call_tmp7;
    } else {
      T2 = UINT8(false);
    }
    if (T2) {
      call_tmp8 = (-INT64(9223372036854775807) - INT64(1) - last);
      call_tmp9 = (stride < call_tmp8);
      if (call_tmp9) {
        willOverFlow = UINT8(true);
      }
    }
  }
  if (willOverFlow) {
    T3 = shouldHalt;
  } else {
    T3 = UINT8(false);
  }
  if (T3) {
    halt(&local__str_literal_694, INT64(1368), INT32(20));
  }
  ret = willOverFlow;
  _end_chpl_checkIfRangeIterWillOverflow:;
  return ret;
}

/* ChapelRange.chpl:1374 */
 chpl_bool checkIfIterWillOverflow2(_ref_range_int64_t_bounded_T this7, chpl_bool shouldHalt) {
  int64_t ret;
  int64_t ret2;
  int64_t ret3;
  int64_t T;
  int64_t coerce_tmp;
  chpl_bool call_tmp;
  int64_t call_tmp2;
  int64_t coerce_tmp2;
  int64_t coerce_tmp3;
  int64_t coerce_tmp4;
  int64_t coerce_tmp5;
  int64_t call_tmp3;
  int64_t call_tmp4;
  int64_t coerce_tmp6;
  int64_t coerce_tmp7;
  int64_t coerce_tmp8;
  int64_t coerce_tmp9;
  int64_t call_tmp5;
  int64_t T2;
  int64_t coerce_tmp10;
  chpl_bool call_tmp6;
  int64_t call_tmp7;
  int64_t coerce_tmp11;
  int64_t coerce_tmp12;
  int64_t coerce_tmp13;
  int64_t coerce_tmp14;
  int64_t call_tmp8;
  int64_t call_tmp9;
  int64_t coerce_tmp15;
  int64_t coerce_tmp16;
  int64_t coerce_tmp17;
  int64_t coerce_tmp18;
  int64_t call_tmp10;
  chpl_bool call_tmp11;
  chpl_check_nil(this7, INT64(1375), INT64(20));
  ret = (this7)->_low;
  chpl_check_nil(this7, INT64(1375), INT64(20));
  ret2 = (this7)->_high;
  chpl_check_nil(this7, INT64(1376), INT64(20));
  ret3 = (this7)->_stride;
  chpl_check_nil(this7, INT64(1376), INT64(20));
  coerce_tmp = (this7)->_stride;
  call_tmp = (coerce_tmp > INT64(0));
  if (call_tmp) {
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp2 = (this7)->_alignment;
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp3 = (this7)->_low;
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp4 = (this7)->_stride;
    call_tmp2 = chpl__diffMod(coerce_tmp2, coerce_tmp3, coerce_tmp4);
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp5 = (this7)->_low;
    call_tmp3 = (coerce_tmp5 + call_tmp2);
    T = call_tmp3;
  } else {
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp6 = (this7)->_high;
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp7 = (this7)->_alignment;
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp8 = (this7)->_stride;
    call_tmp4 = chpl__diffMod(coerce_tmp6, coerce_tmp7, coerce_tmp8);
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp9 = (this7)->_high;
    call_tmp5 = (coerce_tmp9 - call_tmp4);
    T = call_tmp5;
  }
  chpl_check_nil(this7, INT64(1376), INT64(20));
  coerce_tmp10 = (this7)->_stride;
  call_tmp6 = (coerce_tmp10 > INT64(0));
  if (call_tmp6) {
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp11 = (this7)->_high;
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp12 = (this7)->_alignment;
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp13 = (this7)->_stride;
    call_tmp7 = chpl__diffMod(coerce_tmp11, coerce_tmp12, coerce_tmp13);
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp14 = (this7)->_high;
    call_tmp8 = (coerce_tmp14 - call_tmp7);
    T2 = call_tmp8;
  } else {
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp15 = (this7)->_alignment;
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp16 = (this7)->_low;
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp17 = (this7)->_stride;
    call_tmp9 = chpl__diffMod(coerce_tmp15, coerce_tmp16, coerce_tmp17);
    chpl_check_nil(this7, INT64(1376), INT64(20));
    coerce_tmp18 = (this7)->_low;
    call_tmp10 = (coerce_tmp18 + call_tmp9);
    T2 = call_tmp10;
  }
  call_tmp11 = chpl_checkIfRangeIterWillOverflow(ret, ret2, ret3, T, T2, shouldHalt);
  return call_tmp11;
}

/* ChapelRange.chpl:1374 */
 chpl_bool checkIfIterWillOverflow(_ref_range_int64_t_bounded_F this7, chpl_bool shouldHalt) {
  int64_t ret;
  int64_t ret2;
  int64_t ret3;
  int64_t ret4;
  chpl_bool call_tmp;
  chpl_check_nil(this7, INT64(1375), INT64(20));
  ret = (this7)->_low;
  chpl_check_nil(this7, INT64(1375), INT64(20));
  ret2 = (this7)->_high;
  chpl_check_nil(this7, INT64(1376), INT64(20));
  ret3 = (this7)->_low;
  chpl_check_nil(this7, INT64(1376), INT64(20));
  ret4 = (this7)->_high;
  call_tmp = chpl_checkIfRangeIterWillOverflow(ret, ret2, INT64(1), ret3, ret4, shouldHalt);
  return call_tmp;
}

/* ChapelRange.chpl:1996 */
 int64_t chpl__mod(int64_t dividend, int64_t modulus) {
  int64_t T;
  chpl_bool call_tmp;
  int64_t call_tmp2;
  int64_t tmp;
  int64_t call_tmp3;
  chpl_bool call_tmp4;
  call_tmp = (modulus < INT64(0));
  if (call_tmp) {
    call_tmp2 = (-modulus);
    T = call_tmp2;
  } else {
    T = modulus;
  }
  call_tmp3 = (dividend % T);
  tmp = call_tmp3;
  call_tmp4 = (call_tmp3 < INT64(0));
  if (call_tmp4) {
    tmp += T;
  }
  return tmp;
}

/* ChapelRange.chpl:2023 */
 int64_t chpl__diffMod(int64_t minuend, int64_t subtrahend, int64_t modulus) {
  int64_t T;
  chpl_bool call_tmp;
  int64_t call_tmp2;
  int64_t call_tmp3;
  int64_t call_tmp4;
  int64_t T2;
  chpl_bool call_tmp5;
  int64_t call_tmp6;
  int64_t call_tmp7;
  int64_t call_tmp8;
  call_tmp = (modulus < INT64(0));
  if (call_tmp) {
    call_tmp2 = (-modulus);
    T = call_tmp2;
  } else {
    T = modulus;
  }
  call_tmp3 = chpl__mod(minuend, T);
  call_tmp4 = chpl__mod(subtrahend, T);
  call_tmp5 = (call_tmp3 < call_tmp4);
  if (call_tmp5) {
    call_tmp6 = (call_tmp4 - call_tmp3);
    call_tmp7 = (T - call_tmp6);
    T2 = call_tmp7;
  } else {
    call_tmp8 = (call_tmp3 - call_tmp4);
    T2 = call_tmp8;
  }
  return T2;
}

/* ChapelRange.chpl:2055 */
 int64_t chpl__add(int64_t a, int64_t b) {
  int64_t ret;
  chpl_bool call_tmp;
  chpl_bool T;
  chpl_bool call_tmp2;
  chpl_bool T2;
  int64_t call_tmp3;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  chpl_bool T3;
  chpl_bool call_tmp6;
  chpl_bool T4;
  int64_t call_tmp7;
  chpl_bool call_tmp8;
  int64_t call_tmp9;
  call_tmp = (a > INT64(0));
  if (call_tmp) {
    call_tmp2 = (b > INT64(0));
    T = call_tmp2;
  } else {
    T = UINT8(false);
  }
  if (T) {
    call_tmp3 = (INT64(9223372036854775807) - a);
    call_tmp4 = (b > call_tmp3);
    T2 = call_tmp4;
  } else {
    T2 = UINT8(false);
  }
  if (T2) {
    ret = INT64(9223372036854775807);
    goto _end_chpl__add;
  }
  call_tmp5 = (a < INT64(0));
  if (call_tmp5) {
    call_tmp6 = (b < INT64(0));
    T3 = call_tmp6;
  } else {
    T3 = UINT8(false);
  }
  if (T3) {
    call_tmp7 = (-INT64(9223372036854775807) - INT64(1) - a);
    call_tmp8 = (b < call_tmp7);
    T4 = call_tmp8;
  } else {
    T4 = UINT8(false);
  }
  if (T4) {
    ret = -INT64(9223372036854775807) - INT64(1);
    goto _end_chpl__add;
  }
  call_tmp9 = (a + b);
  ret = call_tmp9;
  _end_chpl__add:;
  return ret;
}

