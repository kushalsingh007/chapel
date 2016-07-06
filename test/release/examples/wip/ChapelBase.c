/* ChapelBase.chpl:23 */
 void chpl__init_ChapelBase(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl___EndCount_atomic_int64_int64_t this7 = NULL;
  int64_t call_tmp;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this8;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  c_void_ptr call_tmp2;
  chpl___EndCount_atomic_int64_int64_t this9 = NULL;
  int64_t call_tmp3;
  c_void_ptr cast_tmp2;
  atomic_int64 _init_class_tmp_2;
  atomic_int64 this10;
  atomic_int_least64_t ret2;
  atomic_int_least64_t type_tmp2;
  _ref_atomic_int_least64_t _ref_tmp_2 = NULL;
  atomic_int64 wrap_call_tmp2;
  c_void_ptr call_tmp4;
  if (chpl__init_ChapelBase_p) {
    goto _exit_chpl__init_ChapelBase;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelBase";
  printModuleInit(modFormatStr, modStr, INT64(10));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelBase_p = UINT8(true);
  {
    chpl__init_ChapelStringLiterals(INT64(23), INT32(2));
  }
  call_tmp = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(2));
  this7 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
  ((object)(this7))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  chpl_check_nil(this7, INT64(767), INT64(2));
  (this7)->i = _init_class_tmp_;
  chpl_check_nil(this7, INT64(767), INT64(2));
  (this7)->taskCnt = INT64(0);
  chpl_check_nil(this7, INT64(767), INT64(2));
  (this7)->taskList = NULL;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this8)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this8);
  chpl_check_nil(this7, INT64(767), INT64(2));
  (this7)->i = wrap_call_tmp;
  chpl_check_nil(this7, INT64(767), INT64(2));
  (this7)->taskCnt = INT64(0);
  call_tmp2 = ((c_void_ptr)(nil));
  chpl_check_nil(this7, INT64(767), INT64(2));
  (this7)->taskList = call_tmp2;
  _construct__EndCount(&wrap_call_tmp, INT64(0), call_tmp2, this7);
  call_tmp3 = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
  cast_tmp2 = chpl_here_alloc(call_tmp3, INT16(2));
  this9 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp2));
  ((object)(this9))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  chpl_check_nil(this9, INT64(767), INT64(2));
  (this9)->i = _init_class_tmp_2;
  chpl_check_nil(this9, INT64(767), INT64(2));
  (this9)->taskCnt = INT64(0);
  chpl_check_nil(this9, INT64(767), INT64(2));
  (this9)->taskList = NULL;
  ret2 = type_tmp2;
  _ref_tmp_2 = &ret2;
  atomic_init_int_least64_t(_ref_tmp_2, INT64(0));
  (&this10)->_v = ret2;
  wrap_call_tmp2 = _construct_atomic_int64(ret2, &this10);
  chpl_check_nil(this9, INT64(767), INT64(2));
  (this9)->i = wrap_call_tmp2;
  chpl_check_nil(this9, INT64(767), INT64(2));
  (this9)->taskCnt = INT64(0);
  call_tmp4 = ((c_void_ptr)(nil));
  chpl_check_nil(this9, INT64(767), INT64(2));
  (this9)->taskList = call_tmp4;
  _construct__EndCount(&wrap_call_tmp2, INT64(0), call_tmp4, this9);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelBase:;
  return;
}

/* ChapelBase.chpl:63 */
 void compilerAssert(void) {
  return;
}

/* ChapelBase.chpl:583 */
 void init_elts2(_ddata_locale x, int64_t s) {
  int64_t call_tmp;
  int64_t _ic__F1_high;
  int64_t i;
  locale call_tmp2 = NULL;
  call_tmp = (s - INT64(1));
  _ic__F1_high = call_tmp;
  chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp, INT64(1), INT64(0), call_tmp, UINT8(true));
  for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
    call_tmp2 = ((locale)(nil));
    *(x + i) = call_tmp2;
  }
  return;
}

/* ChapelBase.chpl:583 */
 void init_elts(_ddata_localesSignal x, int64_t s) {
  int64_t call_tmp;
  int64_t _ic__F1_high;
  int64_t i;
  localesSignal call_tmp2 = NULL;
  call_tmp = (s - INT64(1));
  _ic__F1_high = call_tmp;
  chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp, INT64(1), INT64(0), call_tmp, UINT8(true));
  for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
    call_tmp2 = ((localesSignal)(nil));
    *(x + i) = call_tmp2;
  }
  return;
}

/* ChapelBase.chpl:737 */
 chpl___EndCount_atomic_int64_int64_t _construct__EndCount(atomic_int64* const i, int64_t taskCnt, c_void_ptr taskList, chpl___EndCount_atomic_int64_int64_t meme) {
  chpl___EndCount_atomic_int64_int64_t this7 = NULL;
  object T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(737), INT64(2));
  T = &((this7)->super);
  _construct_object(T);
  chpl_check_nil(this7, INT64(740), INT64(2));
  (this7)->i = *(i);
  chpl_check_nil(this7, INT64(741), INT64(2));
  (this7)->taskCnt = taskCnt;
  chpl_check_nil(this7, INT64(742), INT64(2));
  (this7)->taskList = taskList;
  return this7;
}

/* ChapelBase.chpl:737 */
 void chpl__auto_destroy__EndCount(chpl___EndCount_atomic_int64_int64_t this7) {
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  chpl_check_nil(this7, INT64(740), INT64(2));
  _field_destructor_tmp_ = &((this7)->i);
  chpl_check_nil(_field_destructor_tmp_, INT64(740), INT64(2));
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* ChapelBase.chpl:781 */
 void _upEndCount(chpl___EndCount_atomic_int64_int64_t e) {
  memory_order local_memory_order_relaxed;
  int32_t local_c_sublocid_any;
  memory_order local_memory_order_release;
  _ref_atomic_int64 call_tmp = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _ref_int64_t call_tmp3 = NULL;
  locale call_tmp4 = NULL;
  chpl_localeID_t _autoCopy_tmp_;
  locale call_tmp5 = NULL;
  _ref_atomic_int64 call_tmp6 = NULL;
  _ref_atomic_int_least64_t call_tmp7 = NULL;
  local_memory_order_relaxed = memory_order_relaxed;
  local_c_sublocid_any = c_sublocid_any;
  local_memory_order_release = memory_order_release;
  chpl_rmem_consist_fence(local_memory_order_release, INT64(789), INT32(2));
  chpl_check_nil(e, INT64(791), INT64(2));
  call_tmp = &((e)->i);
  chpl_check_nil(call_tmp, INT64(791), INT64(2));
  call_tmp2 = &((call_tmp)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp2, INT64(1), local_memory_order_release);
  chpl_check_nil(e, INT64(792), INT64(2));
  call_tmp3 = &((e)->taskCnt);
  *(call_tmp3) += INT64(1);
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp5 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp4 = call_tmp5;
  chpl_check_nil(call_tmp4, INT64(796), INT64(2));
  call_tmp6 = &((call_tmp4)->runningTaskCounter);
  chpl_check_nil(call_tmp6, INT64(796), INT64(2));
  call_tmp7 = &((call_tmp6)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp7, INT64(1), local_memory_order_relaxed);
  return;
}

/* ChapelBase.chpl:804 */
 void _downEndCount(chpl___EndCount_atomic_int64_int64_t e) {
  memory_order local_memory_order_release;
  _ref_atomic_int64 call_tmp = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  local_memory_order_release = memory_order_release;
  chpl_check_nil(e, INT64(805), INT64(2));
  call_tmp = &((e)->i);
  chpl_check_nil(call_tmp, INT64(805), INT64(2));
  call_tmp2 = &((call_tmp)->_v);
  atomic_fetch_sub_explicit_int_least64_t(call_tmp2, INT64(1), local_memory_order_release);
  return;
}

/* ChapelBase.chpl:811 */
 void _waitEndCount(chpl___EndCount_atomic_int64_int64_t e) {
  memory_order local_memory_order_acquire;
  memory_order local_memory_order_relaxed;
  int32_t local_c_sublocid_any;
  _ref_c_void_ptr call_tmp = NULL;
  locale call_tmp2 = NULL;
  chpl_localeID_t _autoCopy_tmp_;
  locale call_tmp3 = NULL;
  _ref_atomic_int64 call_tmp4 = NULL;
  _ref_atomic_int_least64_t call_tmp5 = NULL;
  _ref_atomic_int64 call_tmp6 = NULL;
  chpl_bool T;
  _ref_atomic_int_least64_t call_tmp7 = NULL;
  int64_t call_tmp8;
  chpl_bool call_tmp9;
  _ref_atomic_int_least64_t call_tmp10 = NULL;
  int64_t call_tmp11;
  chpl_bool call_tmp12;
  int64_t call_tmp13;
  locale call_tmp14 = NULL;
  chpl_localeID_t _autoCopy_tmp_2;
  locale call_tmp15 = NULL;
  int64_t call_tmp16;
  _ref_atomic_int64 call_tmp17 = NULL;
  _ref_atomic_int_least64_t call_tmp18 = NULL;
  local_memory_order_acquire = memory_order_acquire;
  local_memory_order_relaxed = memory_order_relaxed;
  local_c_sublocid_any = c_sublocid_any;
  chpl_check_nil(e, INT64(813), INT64(2));
  call_tmp = &((e)->taskList);
  chpl_taskListExecute(call_tmp, INT64(813), INT32(2));
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp3 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp2 = call_tmp3;
  chpl_check_nil(call_tmp2, INT64(818), INT64(2));
  call_tmp4 = &((call_tmp2)->runningTaskCounter);
  chpl_check_nil(call_tmp4, INT64(818), INT64(2));
  call_tmp5 = &((call_tmp4)->_v);
  atomic_fetch_sub_explicit_int_least64_t(call_tmp5, INT64(1), local_memory_order_relaxed);
  chpl_check_nil(e, INT64(821), INT64(2));
  call_tmp6 = &((e)->i);
  chpl_check_nil(call_tmp6, INT64(821), INT64(2));
  call_tmp7 = &((call_tmp6)->_v);
  call_tmp8 = atomic_load_explicit_int_least64_t(call_tmp7, local_memory_order_relaxed);
  call_tmp9 = (call_tmp8 != INT64(0));
  T = call_tmp9;
  while (T) {
    chpl_task_yield();
    chpl_check_nil(call_tmp6, INT64(821), INT64(2));
    call_tmp10 = &((call_tmp6)->_v);
    call_tmp11 = atomic_load_explicit_int_least64_t(call_tmp10, local_memory_order_relaxed);
    call_tmp12 = (call_tmp11 != INT64(0));
    T = call_tmp12;
  }
  atomic_thread_fence(local_memory_order_acquire);
  chpl_check_nil(e, INT64(824), INT64(2));
  call_tmp13 = (e)->taskCnt;
  _autoCopy_tmp_2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp15 = chpl_localeID_to_locale(&_autoCopy_tmp_2);
  call_tmp14 = call_tmp15;
  call_tmp16 = (call_tmp13 - INT64(1));
  chpl_check_nil(call_tmp14, INT64(826), INT64(2));
  call_tmp17 = &((call_tmp14)->runningTaskCounter);
  chpl_check_nil(call_tmp17, INT64(826), INT64(2));
  call_tmp18 = &((call_tmp17)->_v);
  atomic_fetch_sub_explicit_int_least64_t(call_tmp18, call_tmp16, local_memory_order_relaxed);
  return;
}

/* ChapelBase.chpl:843 */
 void _waitEndCount2(chpl___EndCount_atomic_int64_int64_t _endCount) {
  _waitEndCount(_endCount);
  return;
}

/* ChapelBase.chpl:849 */
 int64_t _command_line_cast13(c_string x) {
  string local__str_literal_306;
  string local__str_literal_339;
  string call_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t ret;
  string localX;
  string call_tmp2;
  _ref_string _ref_tmp_ = NULL;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  string call_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  int32_t coerce_tmp;
  chpl_bool call_tmp4;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  c_string call_tmp5;
  int64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  _ref_string _ref_tmp_4 = NULL;
  local__str_literal_306 = _str_literal_306;
  local__str_literal_339 = _str_literal_339;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  _ref_tmp_ = &call_tmp;
  ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
  chpl_check_nil(_ref_tmp_, INT64(849), INT64(2));
  strip(_ref_tmp_, &local__str_literal_339, UINT8(true), UINT8(true), ret_to_arg_ref_tmp_2);
  call_tmp2 = _autoCopy_tmp_2;
  ret_to_arg_ref_tmp_3 = &call_tmp3;
  string2(&_autoCopy_tmp_2, UINT8(false), ret_to_arg_ref_tmp_3);
  localX = call_tmp3;
  coerce_tmp = (&localX)->locale_id;
  call_tmp4 = (coerce_tmp != chpl_nodeID);
  if (call_tmp4) {
    halt(&local__str_literal_306, INT64(849), INT32(2));
  }
  coerce_tmp2 = (&localX)->buff;
  call_tmp5 = ((c_string)(coerce_tmp2));
  call_tmp6 = c_string_to_int64_t(call_tmp5, INT64(849), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &call_tmp2;
  chpl___TILDE_string(_ref_tmp_2);
  _ref_tmp_3 = &localX;
  chpl___TILDE_string(_ref_tmp_3);
  goto _end__cast;
  _end__cast:;
  _ref_tmp_4 = &call_tmp;
  chpl___TILDE_string(_ref_tmp_4);
  return ret;
}

/* ChapelBase.chpl:849 */
 chpl_bool _command_line_cast7(c_string x) {
  string call_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp2;
  _ref_string _ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  call_tmp2 = _cast2(&_autoCopy_tmp_);
  _ref_tmp_ = &call_tmp;
  chpl___TILDE_string(_ref_tmp_);
  return call_tmp2;
}

/* ChapelBase.chpl:849 */
 int64_t _command_line_cast6(c_string x) {
  string local__str_literal_306;
  string local__str_literal_339;
  string call_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t ret;
  string localX;
  string call_tmp2;
  _ref_string _ref_tmp_ = NULL;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  string call_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  int32_t coerce_tmp;
  chpl_bool call_tmp4;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  c_string call_tmp5;
  int64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  _ref_string _ref_tmp_4 = NULL;
  local__str_literal_306 = _str_literal_306;
  local__str_literal_339 = _str_literal_339;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  _ref_tmp_ = &call_tmp;
  ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
  chpl_check_nil(_ref_tmp_, INT64(849), INT64(2));
  strip(_ref_tmp_, &local__str_literal_339, UINT8(true), UINT8(true), ret_to_arg_ref_tmp_2);
  call_tmp2 = _autoCopy_tmp_2;
  ret_to_arg_ref_tmp_3 = &call_tmp3;
  string2(&_autoCopy_tmp_2, UINT8(false), ret_to_arg_ref_tmp_3);
  localX = call_tmp3;
  coerce_tmp = (&localX)->locale_id;
  call_tmp4 = (coerce_tmp != chpl_nodeID);
  if (call_tmp4) {
    halt(&local__str_literal_306, INT64(849), INT32(2));
  }
  coerce_tmp2 = (&localX)->buff;
  call_tmp5 = ((c_string)(coerce_tmp2));
  call_tmp6 = c_string_to_int64_t(call_tmp5, INT64(849), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &call_tmp2;
  chpl___TILDE_string(_ref_tmp_2);
  _ref_tmp_3 = &localX;
  chpl___TILDE_string(_ref_tmp_3);
  goto _end__cast;
  _end__cast:;
  _ref_tmp_4 = &call_tmp;
  chpl___TILDE_string(_ref_tmp_4);
  return ret;
}

/* ChapelBase.chpl:849 */
 int64_t _command_line_cast4(c_string x) {
  string local__str_literal_306;
  string local__str_literal_339;
  string call_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t ret;
  string localX;
  string call_tmp2;
  _ref_string _ref_tmp_ = NULL;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  string call_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  int32_t coerce_tmp;
  chpl_bool call_tmp4;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  c_string call_tmp5;
  int64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  _ref_string _ref_tmp_4 = NULL;
  local__str_literal_306 = _str_literal_306;
  local__str_literal_339 = _str_literal_339;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  _ref_tmp_ = &call_tmp;
  ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
  chpl_check_nil(_ref_tmp_, INT64(849), INT64(2));
  strip(_ref_tmp_, &local__str_literal_339, UINT8(true), UINT8(true), ret_to_arg_ref_tmp_2);
  call_tmp2 = _autoCopy_tmp_2;
  ret_to_arg_ref_tmp_3 = &call_tmp3;
  string2(&_autoCopy_tmp_2, UINT8(false), ret_to_arg_ref_tmp_3);
  localX = call_tmp3;
  coerce_tmp = (&localX)->locale_id;
  call_tmp4 = (coerce_tmp != chpl_nodeID);
  if (call_tmp4) {
    halt(&local__str_literal_306, INT64(849), INT32(2));
  }
  coerce_tmp2 = (&localX)->buff;
  call_tmp5 = ((c_string)(coerce_tmp2));
  call_tmp6 = c_string_to_int64_t(call_tmp5, INT64(849), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &call_tmp2;
  chpl___TILDE_string(_ref_tmp_2);
  _ref_tmp_3 = &localX;
  chpl___TILDE_string(_ref_tmp_3);
  goto _end__cast;
  _end__cast:;
  _ref_tmp_4 = &call_tmp;
  chpl___TILDE_string(_ref_tmp_4);
  return ret;
}

/* ChapelBase.chpl:849 */
 chpl_bool _command_line_cast3(c_string x) {
  string call_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp2;
  _ref_string _ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  call_tmp2 = _cast2(&_autoCopy_tmp_);
  _ref_tmp_ = &call_tmp;
  chpl___TILDE_string(_ref_tmp_);
  return call_tmp2;
}

/* ChapelBase.chpl:849 */
 chpl_bool _command_line_cast2(c_string x) {
  string call_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp2;
  _ref_string _ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  call_tmp2 = _cast2(&_autoCopy_tmp_);
  _ref_tmp_ = &call_tmp;
  chpl___TILDE_string(_ref_tmp_);
  return call_tmp2;
}

/* ChapelBase.chpl:849 */
 chpl_bool _command_line_cast5(c_string x) {
  string call_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp2;
  _ref_string _ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  call_tmp2 = _cast2(&_autoCopy_tmp_);
  _ref_tmp_ = &call_tmp;
  chpl___TILDE_string(_ref_tmp_);
  return call_tmp2;
}

/* ChapelBase.chpl:849 */
 chpl_bool _command_line_cast8(c_string x) {
  string call_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp2;
  _ref_string _ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  call_tmp2 = _cast2(&_autoCopy_tmp_);
  _ref_tmp_ = &call_tmp;
  chpl___TILDE_string(_ref_tmp_);
  return call_tmp2;
}

/* ChapelBase.chpl:849 */
 uint64_t _command_line_cast(c_string x) {
  string local__str_literal_306;
  string local__str_literal_339;
  string call_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  uint64_t ret;
  string localX;
  string call_tmp2;
  _ref_string _ref_tmp_ = NULL;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  string call_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  int32_t coerce_tmp;
  chpl_bool call_tmp4;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  c_string call_tmp5;
  uint64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  _ref_string _ref_tmp_4 = NULL;
  local__str_literal_306 = _str_literal_306;
  local__str_literal_339 = _str_literal_339;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  _ref_tmp_ = &call_tmp;
  ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
  chpl_check_nil(_ref_tmp_, INT64(849), INT64(2));
  strip(_ref_tmp_, &local__str_literal_339, UINT8(true), UINT8(true), ret_to_arg_ref_tmp_2);
  call_tmp2 = _autoCopy_tmp_2;
  ret_to_arg_ref_tmp_3 = &call_tmp3;
  string2(&_autoCopy_tmp_2, UINT8(false), ret_to_arg_ref_tmp_3);
  localX = call_tmp3;
  coerce_tmp = (&localX)->locale_id;
  call_tmp4 = (coerce_tmp != chpl_nodeID);
  if (call_tmp4) {
    halt(&local__str_literal_306, INT64(849), INT32(2));
  }
  coerce_tmp2 = (&localX)->buff;
  call_tmp5 = ((c_string)(coerce_tmp2));
  call_tmp6 = c_string_to_uint64_t(call_tmp5, INT64(849), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &call_tmp2;
  chpl___TILDE_string(_ref_tmp_2);
  _ref_tmp_3 = &localX;
  chpl___TILDE_string(_ref_tmp_3);
  goto _end__cast;
  _end__cast:;
  _ref_tmp_4 = &call_tmp;
  chpl___TILDE_string(_ref_tmp_4);
  return ret;
}

/* ChapelBase.chpl:849 */
 uint64_t _command_line_cast9(c_string x) {
  string local__str_literal_306;
  string local__str_literal_339;
  string call_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  uint64_t ret;
  string localX;
  string call_tmp2;
  _ref_string _ref_tmp_ = NULL;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  string call_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  int32_t coerce_tmp;
  chpl_bool call_tmp4;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  c_string call_tmp5;
  uint64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  _ref_string _ref_tmp_4 = NULL;
  local__str_literal_306 = _str_literal_306;
  local__str_literal_339 = _str_literal_339;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  _ref_tmp_ = &call_tmp;
  ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
  chpl_check_nil(_ref_tmp_, INT64(849), INT64(2));
  strip(_ref_tmp_, &local__str_literal_339, UINT8(true), UINT8(true), ret_to_arg_ref_tmp_2);
  call_tmp2 = _autoCopy_tmp_2;
  ret_to_arg_ref_tmp_3 = &call_tmp3;
  string2(&_autoCopy_tmp_2, UINT8(false), ret_to_arg_ref_tmp_3);
  localX = call_tmp3;
  coerce_tmp = (&localX)->locale_id;
  call_tmp4 = (coerce_tmp != chpl_nodeID);
  if (call_tmp4) {
    halt(&local__str_literal_306, INT64(849), INT32(2));
  }
  coerce_tmp2 = (&localX)->buff;
  call_tmp5 = ((c_string)(coerce_tmp2));
  call_tmp6 = c_string_to_uint64_t(call_tmp5, INT64(849), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &call_tmp2;
  chpl___TILDE_string(_ref_tmp_2);
  _ref_tmp_3 = &localX;
  chpl___TILDE_string(_ref_tmp_3);
  goto _end__cast;
  _end__cast:;
  _ref_tmp_4 = &call_tmp;
  chpl___TILDE_string(_ref_tmp_4);
  return ret;
}

/* ChapelBase.chpl:849 */
 void _command_line_cast10(c_string x, _ref_string _retArg) {
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  *(_retArg) = _autoCopy_tmp_;
  return;
}

/* ChapelBase.chpl:849 */
 void _command_line_cast14(c_string x, _ref_string _retArg) {
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  *(_retArg) = _autoCopy_tmp_;
  return;
}

/* ChapelBase.chpl:849 */
 void _command_line_cast12(c_string x, _ref_string _retArg) {
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  *(_retArg) = _autoCopy_tmp_;
  return;
}

/* ChapelBase.chpl:849 */
 chpl_bool _command_line_cast11(c_string x) {
  string call_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp2;
  _ref_string _ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp = _autoCopy_tmp_;
  call_tmp2 = _cast2(&_autoCopy_tmp_);
  _ref_tmp_ = &call_tmp;
  chpl___TILDE_string(_ref_tmp_);
  return call_tmp2;
}

/* ChapelBase.chpl:996 */
 DefaultDist chpl__autoCopy(DefaultDist x) {
  memory_order local_memory_order_seq_cst;
  DefaultDist ret = NULL;
  BaseDist coerce_tmp = NULL;
  BaseDist call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseDist)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  chpl_check_nil(coerce_tmp, INT64(997), INT64(2));
  call_tmp2 = &((coerce_tmp)->_distCnt);
  chpl_check_nil(call_tmp2, INT64(997), INT64(2));
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp3, INT64(997), INT64(2));
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1004 */
 DefaultRectangularDom_1_int64_t_F chpl__autoCopy2(DefaultRectangularDom_1_int64_t_F x) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  chpl_check_nil(coerce_tmp, INT64(1005), INT64(2));
  call_tmp2 = &((coerce_tmp)->_domCnt);
  chpl_check_nil(call_tmp2, INT64(1005), INT64(2));
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp3, INT64(1005), INT64(2));
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1012 */
 DefaultRectangularArr_locale_1_int64_t_F chpl__autoCopy4(DefaultRectangularArr_locale_1_int64_t_F x) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  BaseArr coerce_tmp = NULL;
  BaseArr call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseArr)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  chpl_check_nil(coerce_tmp, INT64(1013), INT64(2));
  call_tmp2 = &((coerce_tmp)->_arrCnt);
  chpl_check_nil(call_tmp2, INT64(1013), INT64(2));
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp3, INT64(1013), INT64(2));
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1012 */
 DefaultRectangularArr_localesSignal_1_int64_t_F chpl__autoCopy3(DefaultRectangularArr_localesSignal_1_int64_t_F x) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
  BaseArr coerce_tmp = NULL;
  BaseArr call_tmp = NULL;
  _ref_atomic_refcnt call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = x;
  call_tmp = ((BaseArr)(ret));
  coerce_tmp = call_tmp;
  compilerAssert();
  chpl_check_nil(coerce_tmp, INT64(1013), INT64(2));
  call_tmp2 = &((coerce_tmp)->_arrCnt);
  chpl_check_nil(call_tmp2, INT64(1013), INT64(2));
  call_tmp3 = &((call_tmp2)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp3, INT64(1013), INT64(2));
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
  return x;
}

/* ChapelBase.chpl:1057 */
 void chpl__autoDestroy(DefaultDist x) {
  chpl___TILDE__distribution(x);
  return;
}

/* ChapelBase.chpl:1062 */
 void chpl__autoDestroy2(DefaultRectangularDom_1_int64_t_F x) {
  chpl___TILDE__domain(x);
  return;
}

/* ChapelBase.chpl:1067 */
 void chpl__autoDestroy3(DefaultRectangularArr_locale_1_int64_t_F x) {
  chpl___TILDE__array2(x);
  return;
}

/* ChapelBase.chpl:1067 */
 void chpl__autoDestroy4(DefaultRectangularArr_localesSignal_1_int64_t_F x) {
  chpl___TILDE__array(x);
  return;
}

