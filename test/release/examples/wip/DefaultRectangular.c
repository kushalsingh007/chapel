/* DefaultRectangular.chpl:22 */
 void chpl__init_DefaultRectangular(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  string local__str_literal_908;
  string local__str_literal_906;
  int64_t const_tmp;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  c_string call_tmp3;
  chpl_bool const_tmp2;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  c_string call_tmp6;
  int64_t const_tmp3;
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  c_string call_tmp9;
  chpl_bool call_tmp10;
  chpl_bool call_tmp11;
  DefaultDist this7 = NULL;
  int64_t call_tmp12;
  c_void_ptr cast_tmp;
  atomic_refcnt this8;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this9;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
  list_BaseDom_chpl this10;
  listNode_BaseDom_chpl call_tmp13 = NULL;
  listNode_BaseDom_chpl call_tmp14 = NULL;
  list_BaseDom_chpl wrap_call_tmp3;
  _ref_list_BaseDom ret_to_arg_ref_tmp_2 = NULL;
  atomicflag this11;
  atomic_flag ret2;
  atomic_flag type_tmp2;
  _ref_atomic_flag _ref_tmp_2 = NULL;
  atomicflag wrap_call_tmp4;
  DefaultDist wrap_call_tmp5 = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_3 = NULL;
  if (chpl__init_DefaultRectangular_p) {
    goto _exit_chpl__init_DefaultRectangular;
  }
  modFormatStr = "%*s\n";
  modStr = "DefaultRectangular";
  printModuleInit(modFormatStr, modStr, INT64(18));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_DefaultRectangular_p = UINT8(true);
  {
    chpl__init_DSIUtil(INT64(22), INT32(25));
    chpl__init_ChapelArray(INT64(22), INT32(25));
  }
  local__str_literal_908 = _str_literal_908;
  local__str_literal_906 = _str_literal_906;
  call_tmp = chpl_config_has_value("dataParTasksPerLocale", "Built-in");
  call_tmp2 = (! call_tmp);
  if (call_tmp2) {
    const_tmp = INT64(0);
  } else {
    call_tmp3 = chpl_config_get_value("dataParTasksPerLocale", "Built-in");
    const_tmp = _command_line_cast13(call_tmp3);
  }
  dataParTasksPerLocale = const_tmp;
  call_tmp4 = chpl_config_has_value("dataParIgnoreRunningTasks", "Built-in");
  call_tmp5 = (! call_tmp4);
  if (call_tmp5) {
    const_tmp2 = UINT8(false);
  } else {
    call_tmp6 = chpl_config_get_value("dataParIgnoreRunningTasks", "Built-in");
    const_tmp2 = _command_line_cast7(call_tmp6);
  }
  dataParIgnoreRunningTasks = const_tmp2;
  call_tmp7 = chpl_config_has_value("dataParMinGranularity", "Built-in");
  call_tmp8 = (! call_tmp7);
  if (call_tmp8) {
    const_tmp3 = INT64(1);
  } else {
    call_tmp9 = chpl_config_get_value("dataParMinGranularity", "Built-in");
    const_tmp3 = _command_line_cast6(call_tmp9);
  }
  dataParMinGranularity = const_tmp3;
  call_tmp10 = (dataParTasksPerLocale < INT64(0));
  if (call_tmp10) {
    halt(&local__str_literal_906, INT64(29), INT32(25));
  }
  call_tmp11 = (dataParMinGranularity <= INT64(0));
  if (call_tmp11) {
    halt(&local__str_literal_908, INT64(30), INT32(25));
  }
  call_tmp12 = sizeof(chpl_DefaultDist_object);
  cast_tmp = chpl_here_alloc(call_tmp12, INT16(12));
  this7 = ((DefaultDist)(cast_tmp));
  ((object)(this7))->chpl__cid = chpl__cid_DefaultDist;
  (&this8)->_cnt = _init_class_tmp_;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this9)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this9);
  (&this8)->_cnt = wrap_call_tmp;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
  _construct_atomic_refcnt(&wrap_call_tmp, &this8, ret_to_arg_ref_tmp_);
  (&this10)->first_chpl = nil;
  (&this10)->last_chpl = nil;
  (&this10)->length_chpl = INT64(0);
  call_tmp13 = ((listNode_BaseDom_chpl)(nil));
  (&this10)->first_chpl = call_tmp13;
  call_tmp14 = ((listNode_BaseDom_chpl)(nil));
  (&this10)->last_chpl = call_tmp14;
  (&this10)->length_chpl = INT64(0);
  ret_to_arg_ref_tmp_2 = &wrap_call_tmp3;
  _construct_list_chpl(call_tmp13, call_tmp14, INT64(0), &this10, ret_to_arg_ref_tmp_2);
  ret2 = type_tmp2;
  _ref_tmp_2 = &ret2;
  atomic_init_flag(_ref_tmp_2, UINT8(false));
  (&this11)->_v = ret2;
  wrap_call_tmp4 = _construct_atomicflag(ret2, &this11);
  wrap_call_tmp5 = _construct_DefaultDist(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, this7);
  ret_to_arg_ref_tmp_3 = &defaultDist;
  chpl__buildDistValue(wrap_call_tmp5, ret_to_arg_ref_tmp_3);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_DefaultRectangular:;
  return;
}

/* DefaultRectangular.chpl:43 */
 DefaultDist _construct_DefaultDist(atomic_refcnt* const _distCnt, list_BaseDom_chpl* const _doms, atomicflag* const _domsLock, DefaultDist meme) {
  DefaultDist this7 = NULL;
  BaseDist T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(43), INT64(25));
  T = &((this7)->super);
  _construct_BaseDist(_distCnt, _doms, _domsLock, T);
  return meme;
}

/* DefaultRectangular.chpl:43 */
 void chpl__auto_destroy_DefaultDist(DefaultDist this7) {
  BaseDist _parent_destructor_tmp_ = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _parent_destructor_tmp_ = ((BaseDist)(this7));
  chpl_check_nil(_parent_destructor_tmp_, INT64(43), INT64(25));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_domsLock);
  chpl_check_nil(_field_destructor_tmp_, INT64(43), INT64(25));
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  chpl_check_nil(_parent_destructor_tmp_, INT64(43), INT64(25));
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_distCnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(43), INT64(25));
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  chpl_check_nil(_field_destructor_tmp_3, INT64(43), INT64(25));
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp2);
  return;
}

/* DefaultRectangular.chpl:44 */
 DefaultRectangularDom_1_int64_t_F dsiNewRectangularDom(DefaultDist this7) {
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  call_tmp = DefaultRectangularDom(this7);
  return call_tmp;
}

/* DefaultRectangular.chpl:60 */
 DefaultDist dsiClone(DefaultDist this7) {
  return this7;
}

/* DefaultRectangular.chpl:76 */
 void chpl_defaultDistInitPrivate(void) {
  DefaultDist ret = NULL;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  DefaultDist const_tmp = NULL;
  DefaultDist nd = NULL;
  DefaultDist this7 = NULL;
  int64_t call_tmp3;
  c_void_ptr cast_tmp;
  atomic_refcnt this8;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this9;
  atomic_int_least64_t ret2;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
  list_BaseDom_chpl this10;
  listNode_BaseDom_chpl call_tmp4 = NULL;
  listNode_BaseDom_chpl call_tmp5 = NULL;
  list_BaseDom_chpl wrap_call_tmp3;
  _ref_list_BaseDom ret_to_arg_ref_tmp_2 = NULL;
  atomicflag this11;
  atomic_flag ret3;
  atomic_flag type_tmp2;
  _ref_atomic_flag _ref_tmp_2 = NULL;
  atomicflag wrap_call_tmp4;
  DefaultDist wrap_call_tmp5 = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_3 = NULL;
  DefaultDist call_tmp6 = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_4 = NULL;
  ret = defaultDist;
  call_tmp = ((object)(ret));
  call_tmp2 = (call_tmp == nil);
  if (call_tmp2) {
    call_tmp3 = sizeof(chpl_DefaultDist_object);
    cast_tmp = chpl_here_alloc(call_tmp3, INT16(12));
    this7 = ((DefaultDist)(cast_tmp));
    ((object)(this7))->chpl__cid = chpl__cid_DefaultDist;
    (&this8)->_cnt = _init_class_tmp_;
    ret2 = type_tmp;
    _ref_tmp_ = &ret2;
    atomic_init_int_least64_t(_ref_tmp_, INT64(0));
    (&this9)->_v = ret2;
    wrap_call_tmp = _construct_atomic_int64(ret2, &this9);
    (&this8)->_cnt = wrap_call_tmp;
    ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
    _construct_atomic_refcnt(&wrap_call_tmp, &this8, ret_to_arg_ref_tmp_);
    (&this10)->first_chpl = nil;
    (&this10)->last_chpl = nil;
    (&this10)->length_chpl = INT64(0);
    call_tmp4 = ((listNode_BaseDom_chpl)(nil));
    (&this10)->first_chpl = call_tmp4;
    call_tmp5 = ((listNode_BaseDom_chpl)(nil));
    (&this10)->last_chpl = call_tmp5;
    (&this10)->length_chpl = INT64(0);
    ret_to_arg_ref_tmp_2 = &wrap_call_tmp3;
    _construct_list_chpl(call_tmp4, call_tmp5, INT64(0), &this10, ret_to_arg_ref_tmp_2);
    ret3 = type_tmp2;
    _ref_tmp_2 = &ret3;
    atomic_init_flag(_ref_tmp_2, UINT8(false));
    (&this11)->_v = ret3;
    wrap_call_tmp4 = _construct_atomicflag(ret3, &this11);
    wrap_call_tmp5 = _construct_DefaultDist(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, this7);
    ret_to_arg_ref_tmp_3 = &const_tmp;
    chpl__buildDistValue(wrap_call_tmp5, ret_to_arg_ref_tmp_3);
    nd = const_tmp;
    ret_to_arg_ref_tmp_4 = &call_tmp6;
    chpl_check_nil(const_tmp, INT64(85), INT64(25));
    clone2(const_tmp, ret_to_arg_ref_tmp_4);
    defaultDist = call_tmp6;
    chpl__autoDestroy(nd);
  }
  return;
}

/* DefaultRectangular.chpl:89 */
 void chpl__auto_destroy_DefaultRectangularDom(DefaultRectangularDom_1_int64_t_F this7) {
  BaseRectangularDom _parent_destructor_tmp_ = NULL;
  BaseDom _parent_destructor_tmp_2 = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _parent_destructor_tmp_ = ((BaseRectangularDom)(this7));
  _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
  chpl_check_nil(_parent_destructor_tmp_2, INT64(89), INT64(25));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->_arrsLock);
  chpl_check_nil(_field_destructor_tmp_, INT64(89), INT64(25));
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  chpl_check_nil(_parent_destructor_tmp_2, INT64(89), INT64(25));
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->_domCnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(89), INT64(25));
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  chpl_check_nil(_field_destructor_tmp_3, INT64(89), INT64(25));
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp2);
  return;
}

/* DefaultRectangular.chpl:89 */
 DefaultRectangularDom_1_int64_t_F _construct_DefaultRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, _tuple_1_star_range_int64_t_bounded_F* const ranges, DefaultRectangularDom_1_int64_t_F meme) {
  DefaultRectangularDom_1_int64_t_F this7 = NULL;
  BaseRectangularDom T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(89), INT64(25));
  T = &((this7)->super);
  _construct_BaseRectangularDom(_domCnt, _arrs, _arrsLock, T);
  chpl_check_nil(this7, INT64(93), INT64(25));
  (this7)->dist = dist2;
  chpl_check_nil(this7, INT64(94), INT64(25));
  *((this7)->ranges + INT64(0)) = *(*(ranges) + INT64(0));
  return this7;
}

/* DefaultRectangular.chpl:97 */
 chpl_bool dsiLinksDistribution2(DefaultRectangularDom_1_int64_t_F this7) {
  return UINT8(false);
}

/* DefaultRectangular.chpl:99 */
 DefaultRectangularDom_1_int64_t_F DefaultRectangularDom(DefaultDist dist2) {
  DefaultRectangularDom_1_int64_t_F this7 = NULL;
  DefaultRectangularDom_1_int64_t_F this8 = NULL;
  int64_t call_tmp;
  c_void_ptr cast_tmp;
  _tuple_1_star_range_int64_t_bounded_F _init_class_tmp_;
  range_int64_t_bounded_F _init_class_tmp_2;
  atomic_refcnt this9;
  atomic_int64 _init_class_tmp_3;
  atomic_int64 this10;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
  list_BaseArr_chpl this11;
  listNode_BaseArr_chpl call_tmp2 = NULL;
  listNode_BaseArr_chpl call_tmp3 = NULL;
  list_BaseArr_chpl wrap_call_tmp3;
  _ref_list_BaseArr ret_to_arg_ref_tmp_2 = NULL;
  atomicflag this12;
  atomic_flag ret2;
  atomic_flag type_tmp2;
  _ref_atomic_flag _ref_tmp_2 = NULL;
  atomicflag wrap_call_tmp4;
  DefaultDist call_tmp4 = NULL;
  range_int64_t_bounded_F wrap_call_tmp5;
  _tuple_1_star_range_int64_t_bounded_F this13;
  DefaultRectangularDom_1_int64_t_F wrap_call_tmp6 = NULL;
  _ref_DefaultDist call_tmp5 = NULL;
  call_tmp = sizeof(chpl_DefaultRectangularDom_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(13));
  this8 = ((DefaultRectangularDom_1_int64_t_F)(cast_tmp));
  ((object)(this8))->chpl__cid = chpl__cid_DefaultRectangularDom_1_int64_t_F;
  chpl_check_nil(this8, INT64(99), INT64(25));
  (this8)->dist = nil;
  (&_init_class_tmp_2)->_low = INT64(0);
  (&_init_class_tmp_2)->_high = INT64(0);
  (&_init_class_tmp_2)->_stride = INT64(0);
  (&_init_class_tmp_2)->_alignment = INT64(0);
  (&_init_class_tmp_2)->_aligned = UINT8(false);
  *(_init_class_tmp_ + INT64(0)) = _init_class_tmp_2;
  chpl_check_nil(this8, INT64(99), INT64(25));
  *((this8)->ranges + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  (&this9)->_cnt = _init_class_tmp_3;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this10)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this10);
  (&this9)->_cnt = wrap_call_tmp;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
  _construct_atomic_refcnt(&wrap_call_tmp, &this9, ret_to_arg_ref_tmp_);
  (&this11)->first_chpl = nil;
  (&this11)->last_chpl = nil;
  (&this11)->length_chpl = INT64(0);
  call_tmp2 = ((listNode_BaseArr_chpl)(nil));
  (&this11)->first_chpl = call_tmp2;
  call_tmp3 = ((listNode_BaseArr_chpl)(nil));
  (&this11)->last_chpl = call_tmp3;
  (&this11)->length_chpl = INT64(0);
  ret_to_arg_ref_tmp_2 = &wrap_call_tmp3;
  _construct_list_chpl2(call_tmp2, call_tmp3, INT64(0), &this11, ret_to_arg_ref_tmp_2);
  ret2 = type_tmp2;
  _ref_tmp_2 = &ret2;
  atomic_init_flag(_ref_tmp_2, UINT8(false));
  (&this12)->_v = ret2;
  wrap_call_tmp4 = _construct_atomicflag(ret2, &this12);
  call_tmp4 = ((DefaultDist)(nil));
  chpl_check_nil(this8, INT64(99), INT64(25));
  (this8)->dist = call_tmp4;
  wrap_call_tmp5 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false));
  *(this13 + INT64(0)) = wrap_call_tmp5;
  chpl_check_nil(this8, INT64(99), INT64(25));
  *((this8)->ranges + INT64(0)) = *(this13 + INT64(0));
  wrap_call_tmp6 = _construct_DefaultRectangularDom(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, call_tmp4, &this13, this8);
  this7 = wrap_call_tmp6;
  chpl_check_nil(this7, INT64(100), INT64(25));
  call_tmp5 = &((this7)->dist);
  *(call_tmp5) = dist2;
  return this7;
}

/* DefaultRectangular.chpl:114 */
 void dsiGetIndices(DefaultRectangularDom_1_int64_t_F this7, _ref__tuple_1_star_range_int64_t_bounded_F _retArg) {
  _tuple_1_star_range_int64_t_bounded_F ret;
  chpl_check_nil(this7, INT64(114), INT64(25));
  *(ret + INT64(0)) = *((this7)->ranges + INT64(0));
  *(*(_retArg) + INT64(0)) = *(ret + INT64(0));
  return;
}

/* DefaultRectangular.chpl:116 */
 void dsiSetIndices(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_range_int64_t_bounded_F* const x) {
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp = NULL;
  chpl_check_nil(this7, INT64(117), INT64(25));
  call_tmp = &((this7)->ranges);
  *(*(call_tmp) + INT64(0)) = *(*(x) + INT64(0));
  return;
}

/* DefaultRectangular.chpl:448 */
 chpl_bool dsiMember(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_int64_t* const ind) {
  chpl_bool ret;
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  int64_t coerce_tmp;
  chpl_bool ret2;
  int64_t coerce_tmp2;
  chpl_bool call_tmp2;
  int64_t coerce_tmp3;
  chpl_bool call_tmp3;
  chpl_bool call_tmp4;
  chpl_check_nil(this7, INT64(450), INT64(25));
  _this_tmp_ = &((this7)->ranges);
  call_tmp = (*(_this_tmp_) + INT64(0));
  coerce_tmp = *(*(ind) + INT64(0));
  chpl_check_nil(call_tmp, INT64(450), INT64(25));
  coerce_tmp2 = (call_tmp)->_high;
  call_tmp2 = (coerce_tmp > coerce_tmp2);
  if (call_tmp2) {
    ret2 = UINT8(false);
    goto _end_member;
  }
  chpl_check_nil(call_tmp, INT64(450), INT64(25));
  coerce_tmp3 = (call_tmp)->_low;
  call_tmp3 = (coerce_tmp < coerce_tmp3);
  if (call_tmp3) {
    ret2 = UINT8(false);
    goto _end_member;
  }
  ret2 = UINT8(true);
  _end_member:;
  call_tmp4 = (! ret2);
  if (call_tmp4) {
    ret = UINT8(false);
    goto _end_dsiMember;
  }
  ret = UINT8(true);
  _end_dsiMember:;
  return ret;
}

/* DefaultRectangular.chpl:476 */
 void dsiDim(DefaultRectangularDom_1_int64_t_F this7, _ref_range_int64_t_bounded_F _retArg) {
  range_int64_t_bounded_F ret;
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  chpl_check_nil(this7, INT64(477), INT64(25));
  _this_tmp_ = &((this7)->ranges);
  ret = *(*(_this_tmp_) + INT64(0));
  *(_retArg) = ret;
  return;
}

/* DefaultRectangular.chpl:479 */
 int64_t dsiNumIndices(DefaultRectangularDom_1_int64_t_F this7) {
  int64_t sum;
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  int64_t call_tmp2;
  sum = INT64(1);
  chpl_check_nil(this7, INT64(482), INT64(25));
  _this_tmp_ = &((this7)->ranges);
  call_tmp = (*(_this_tmp_) + INT64(0));
  chpl_check_nil(call_tmp, INT64(482), INT64(25));
  call_tmp2 = length(call_tmp);
  sum *= call_tmp2;
  return sum;
}

/* DefaultRectangular.chpl:487 */
 int64_t dsiLow(DefaultRectangularDom_1_int64_t_F this7) {
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  int64_t ret;
  chpl_check_nil(this7, INT64(489), INT64(25));
  _this_tmp_ = &((this7)->ranges);
  call_tmp = (*(_this_tmp_) + INT64(0));
  chpl_check_nil(call_tmp, INT64(489), INT64(25));
  ret = (call_tmp)->_low;
  return ret;
}

/* DefaultRectangular.chpl:575 */
 DefaultRectangularArr_locale_1_int64_t_F dsiBuildArray2(DefaultRectangularDom_1_int64_t_F this7) {
  DefaultRectangularArr_locale_1_int64_t_F this8 = NULL;
  int64_t call_tmp;
  c_void_ptr cast_tmp;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  range_int64_t_bounded_F _init_class_tmp_4;
  atomic_refcnt this9;
  atomic_int64 _init_class_tmp_5;
  atomic_int64 this10;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
  BaseArr call_tmp2 = NULL;
  _tuple_1_star_int64_t this11;
  _tuple_1_star_int64_t this12;
  _tuple_1_star_int64_t this13;
  _ddata_locale call_tmp3 = NULL;
  _ddata_locale call_tmp4 = NULL;
  range_int64_t_bounded_F wrap_call_tmp3;
  DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp4 = NULL;
  call_tmp = sizeof(chpl_DefaultRectangularArr_locale_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(16));
  this8 = ((DefaultRectangularArr_locale_1_int64_t_F)(cast_tmp));
  ((object)(this8))->chpl__cid = chpl__cid_DefaultRectangularArr_locale_1_int64_t_F;
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  *((this8)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  *((this8)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  *((this8)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->origin = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->factoredOffs = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->data = nil;
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->shiftedData = nil;
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->noinit_data = UINT8(false);
  (&_init_class_tmp_4)->_low = INT64(0);
  (&_init_class_tmp_4)->_high = INT64(0);
  (&_init_class_tmp_4)->_stride = INT64(0);
  (&_init_class_tmp_4)->_alignment = INT64(0);
  (&_init_class_tmp_4)->_aligned = UINT8(false);
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->dataAllocRange = _init_class_tmp_4;
  (&this9)->_cnt = _init_class_tmp_5;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this10)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this10);
  (&this9)->_cnt = wrap_call_tmp;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
  _construct_atomic_refcnt(&wrap_call_tmp, &this9, ret_to_arg_ref_tmp_);
  call_tmp2 = ((BaseArr)(nil));
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->dom = this7;
  *(this11 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  *((this8)->off + INT64(0)) = *(this11 + INT64(0));
  *(this12 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  *((this8)->blk + INT64(0)) = *(this12 + INT64(0));
  *(this13 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  *((this8)->str + INT64(0)) = *(this13 + INT64(0));
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->origin = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata_locale)(nil));
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->data = call_tmp3;
  call_tmp4 = ((_ddata_locale)(nil));
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->shiftedData = call_tmp4;
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->noinit_data = UINT8(false);
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false));
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->dataAllocRange = wrap_call_tmp3;
  wrap_call_tmp4 = _construct_DefaultRectangularArr2(&wrap_call_tmp2, call_tmp2, this7, &this11, &this12, &this13, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this8);
  return wrap_call_tmp4;
}

/* DefaultRectangular.chpl:575 */
 DefaultRectangularArr_localesSignal_1_int64_t_F dsiBuildArray(DefaultRectangularDom_1_int64_t_F this7) {
  DefaultRectangularArr_localesSignal_1_int64_t_F this8 = NULL;
  int64_t call_tmp;
  c_void_ptr cast_tmp;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  range_int64_t_bounded_F _init_class_tmp_4;
  atomic_refcnt this9;
  atomic_int64 _init_class_tmp_5;
  atomic_int64 this10;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
  BaseArr call_tmp2 = NULL;
  _tuple_1_star_int64_t this11;
  _tuple_1_star_int64_t this12;
  _tuple_1_star_int64_t this13;
  _ddata_localesSignal call_tmp3 = NULL;
  _ddata_localesSignal call_tmp4 = NULL;
  range_int64_t_bounded_F wrap_call_tmp3;
  DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp4 = NULL;
  call_tmp = sizeof(chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(21));
  this8 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(cast_tmp));
  ((object)(this8))->chpl__cid = chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F;
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  *((this8)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  *((this8)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  *((this8)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->origin = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->factoredOffs = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->data = nil;
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->shiftedData = nil;
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->noinit_data = UINT8(false);
  (&_init_class_tmp_4)->_low = INT64(0);
  (&_init_class_tmp_4)->_high = INT64(0);
  (&_init_class_tmp_4)->_stride = INT64(0);
  (&_init_class_tmp_4)->_alignment = INT64(0);
  (&_init_class_tmp_4)->_aligned = UINT8(false);
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->dataAllocRange = _init_class_tmp_4;
  (&this9)->_cnt = _init_class_tmp_5;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this10)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this10);
  (&this9)->_cnt = wrap_call_tmp;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
  _construct_atomic_refcnt(&wrap_call_tmp, &this9, ret_to_arg_ref_tmp_);
  call_tmp2 = ((BaseArr)(nil));
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->dom = this7;
  *(this11 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  *((this8)->off + INT64(0)) = *(this11 + INT64(0));
  *(this12 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  *((this8)->blk + INT64(0)) = *(this12 + INT64(0));
  *(this13 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  *((this8)->str + INT64(0)) = *(this13 + INT64(0));
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->origin = INT64(0);
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata_localesSignal)(nil));
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->data = call_tmp3;
  call_tmp4 = ((_ddata_localesSignal)(nil));
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->shiftedData = call_tmp4;
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->noinit_data = UINT8(false);
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false));
  chpl_check_nil(this8, INT64(576), INT64(25));
  (this8)->dataAllocRange = wrap_call_tmp3;
  wrap_call_tmp4 = _construct_DefaultRectangularArr(&wrap_call_tmp2, call_tmp2, this7, &this11, &this12, &this13, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this8);
  return wrap_call_tmp4;
}

/* DefaultRectangular.chpl:580 */
 DefaultRectangularDom_1_int64_t_F dsiBuildRectangularDom(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_range_int64_t_bounded_F* const ranges) {
  DefaultRectangularDom_1_int64_t_F dom = NULL;
  DefaultDist coerce_tmp = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  _ref_range_int64_t_bounded_F call_tmp2 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_ = NULL;
  range_int64_t_bounded_F coerce_tmp2;
  chpl_check_nil(this7, INT64(584), INT64(25));
  coerce_tmp = (this7)->dist;
  dom = DefaultRectangularDom(coerce_tmp);
  _ic__F1_high = INT64(1);
  chpl_checkIfRangeIterWillOverflow(INT64(1), INT64(1), INT64(1), INT64(1), INT64(1), UINT8(true));
  for (i = INT64(1); ((i <= _ic__F1_high)); i += INT64(1)) {
    chpl_check_nil(dom, INT64(586), INT64(25));
    _this_tmp_ = &((dom)->ranges);
    chpl_check_nil(_this_tmp_, INT64(586), INT64(25));
    call_tmp = this5(_this_tmp_, i);
    _ref_tmp_ = ranges;
    chpl_check_nil(_ref_tmp_, INT64(586), INT64(25));
    call_tmp2 = this5(_ref_tmp_, i);
    coerce_tmp2 = *(call_tmp2);
    *(call_tmp) = coerce_tmp2;
  }
  return dom;
}

/* DefaultRectangular.chpl:625 */
 DefaultRectangularArr_locale_1_int64_t_F _construct_DefaultRectangularArr2(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_locale data, _ddata_locale shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_locale_1_int64_t_F meme) {
  DefaultRectangularArr_locale_1_int64_t_F this7 = NULL;
  BaseArr T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(625), INT64(25));
  T = &((this7)->super);
  _construct_BaseArr(_arrCnt, _arrAlias, T);
  chpl_check_nil(this7, INT64(631), INT64(25));
  (this7)->dom = dom;
  chpl_check_nil(this7, INT64(633), INT64(25));
  *((this7)->off + INT64(0)) = *(*(off) + INT64(0));
  chpl_check_nil(this7, INT64(634), INT64(25));
  *((this7)->blk + INT64(0)) = *(*(blk) + INT64(0));
  chpl_check_nil(this7, INT64(635), INT64(25));
  *((this7)->str + INT64(0)) = *(*(str) + INT64(0));
  chpl_check_nil(this7, INT64(636), INT64(25));
  (this7)->origin = origin;
  chpl_check_nil(this7, INT64(637), INT64(25));
  (this7)->factoredOffs = factoredOffs;
  chpl_check_nil(this7, INT64(639), INT64(25));
  (this7)->data = data;
  chpl_check_nil(this7, INT64(641), INT64(25));
  (this7)->shiftedData = shiftedData;
  chpl_check_nil(this7, INT64(642), INT64(25));
  (this7)->noinit_data = noinit_data;
  chpl_check_nil(this7, INT64(649), INT64(25));
  (this7)->dataAllocRange = *(dataAllocRange);
  chpl_check_nil(this7, INT64(625), INT64(25));
  initialize4(this7);
  return this7;
}

/* DefaultRectangular.chpl:625 */
 DefaultRectangularArr_localesSignal_1_int64_t_F _construct_DefaultRectangularArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_localesSignal data, _ddata_localesSignal shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_localesSignal_1_int64_t_F meme) {
  DefaultRectangularArr_localesSignal_1_int64_t_F this7 = NULL;
  BaseArr T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(625), INT64(25));
  T = &((this7)->super);
  _construct_BaseArr(_arrCnt, _arrAlias, T);
  chpl_check_nil(this7, INT64(631), INT64(25));
  (this7)->dom = dom;
  chpl_check_nil(this7, INT64(633), INT64(25));
  *((this7)->off + INT64(0)) = *(*(off) + INT64(0));
  chpl_check_nil(this7, INT64(634), INT64(25));
  *((this7)->blk + INT64(0)) = *(*(blk) + INT64(0));
  chpl_check_nil(this7, INT64(635), INT64(25));
  *((this7)->str + INT64(0)) = *(*(str) + INT64(0));
  chpl_check_nil(this7, INT64(636), INT64(25));
  (this7)->origin = origin;
  chpl_check_nil(this7, INT64(637), INT64(25));
  (this7)->factoredOffs = factoredOffs;
  chpl_check_nil(this7, INT64(639), INT64(25));
  (this7)->data = data;
  chpl_check_nil(this7, INT64(641), INT64(25));
  (this7)->shiftedData = shiftedData;
  chpl_check_nil(this7, INT64(642), INT64(25));
  (this7)->noinit_data = noinit_data;
  chpl_check_nil(this7, INT64(649), INT64(25));
  (this7)->dataAllocRange = *(dataAllocRange);
  chpl_check_nil(this7, INT64(625), INT64(25));
  initialize3(this7);
  return this7;
}

/* DefaultRectangular.chpl:625 */
 void chpl__auto_destroy_DefaultRectangularArr2(DefaultRectangularArr_locale_1_int64_t_F this7) {
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _parent_destructor_tmp_ = ((BaseArr)(this7));
  chpl_check_nil(_parent_destructor_tmp_, INT64(625), INT64(25));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  chpl_check_nil(_field_destructor_tmp_, INT64(625), INT64(25));
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(625), INT64(25));
  call_tmp = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* DefaultRectangular.chpl:625 */
 void chpl__auto_destroy_DefaultRectangularArr(DefaultRectangularArr_localesSignal_1_int64_t_F this7) {
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _parent_destructor_tmp_ = ((BaseArr)(this7));
  chpl_check_nil(_parent_destructor_tmp_, INT64(625), INT64(25));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  chpl_check_nil(_field_destructor_tmp_, INT64(625), INT64(25));
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(625), INT64(25));
  call_tmp = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* DefaultRectangular.chpl:664 */
 DefaultRectangularDom_1_int64_t_F dsiGetBaseDom3(DefaultRectangularArr_locale_1_int64_t_F this7) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  chpl_check_nil(this7, INT64(664), INT64(25));
  ret = (this7)->dom;
  return ret;
}

/* DefaultRectangular.chpl:664 */
 DefaultRectangularDom_1_int64_t_F dsiGetBaseDom2(DefaultRectangularArr_localesSignal_1_int64_t_F this7) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  chpl_check_nil(this7, INT64(664), INT64(25));
  ret = (this7)->dom;
  return ret;
}

/* DefaultRectangular.chpl:666 */
 void dsiDestroyData2(DefaultRectangularArr_locale_1_int64_t_F this7) {
  int64_t call_tmp;
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
  chpl_bool call_tmp2;
  _ddata_locale dv = NULL;
  _ddata_locale coerce_tmp2 = NULL;
  chpl_check_nil(this7, INT64(667), INT64(25));
  coerce_tmp = (this7)->dom;
  chpl_check_nil(coerce_tmp, INT64(667), INT64(25));
  call_tmp = dsiNumIndices(coerce_tmp);
  call_tmp2 = (call_tmp > INT64(0));
  if (call_tmp2) {
    chpl_check_nil(this7, INT64(669), INT64(25));
    dv = (this7)->data;
  }
  chpl_check_nil(this7, INT64(682), INT64(25));
  coerce_tmp2 = (this7)->data;
  chpl_array_free(coerce_tmp2, INT64(682), INT32(25));
  return;
}

/* DefaultRectangular.chpl:666 */
 void dsiDestroyData3(DefaultRectangularArr_localesSignal_1_int64_t_F this7) {
  int64_t call_tmp;
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
  chpl_bool call_tmp2;
  _ddata_localesSignal dv = NULL;
  _ddata_localesSignal coerce_tmp2 = NULL;
  chpl_check_nil(this7, INT64(667), INT64(25));
  coerce_tmp = (this7)->dom;
  chpl_check_nil(coerce_tmp, INT64(667), INT64(25));
  call_tmp = dsiNumIndices(coerce_tmp);
  call_tmp2 = (call_tmp > INT64(0));
  if (call_tmp2) {
    chpl_check_nil(this7, INT64(669), INT64(25));
    dv = (this7)->data;
  }
  chpl_check_nil(this7, INT64(682), INT64(25));
  coerce_tmp2 = (this7)->data;
  chpl_array_free(coerce_tmp2, INT64(682), INT32(25));
  return;
}

/* DefaultRectangular.chpl:777 */
 void computeFactoredOffs2(DefaultRectangularArr_locale_1_int64_t_F this7) {
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
  int64_t coerce_tmp;
  int64_t coerce_tmp2;
  int64_t call_tmp3;
  int64_t coerce_tmp3;
  int64_t call_tmp4;
  chpl_check_nil(this7, INT64(778), INT64(25));
  call_tmp = &((this7)->factoredOffs);
  *(call_tmp) = INT64(0);
  chpl_check_nil(this7, INT64(780), INT64(25));
  call_tmp2 = &((this7)->factoredOffs);
  chpl_check_nil(this7, INT64(780), INT64(25));
  _this_tmp_ = &((this7)->blk);
  chpl_check_nil(this7, INT64(780), INT64(25));
  _this_tmp_2 = &((this7)->off);
  coerce_tmp = *(*(_this_tmp_) + INT64(0));
  coerce_tmp2 = *(*(_this_tmp_2) + INT64(0));
  call_tmp3 = (coerce_tmp * coerce_tmp2);
  chpl_check_nil(this7, INT64(780), INT64(25));
  coerce_tmp3 = (this7)->factoredOffs;
  call_tmp4 = (coerce_tmp3 + call_tmp3);
  *(call_tmp2) = call_tmp4;
  return;
}

/* DefaultRectangular.chpl:777 */
 void computeFactoredOffs(DefaultRectangularArr_localesSignal_1_int64_t_F this7) {
  _ref_int64_t call_tmp = NULL;
  _ref_int64_t call_tmp2 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
  int64_t coerce_tmp;
  int64_t coerce_tmp2;
  int64_t call_tmp3;
  int64_t coerce_tmp3;
  int64_t call_tmp4;
  chpl_check_nil(this7, INT64(778), INT64(25));
  call_tmp = &((this7)->factoredOffs);
  *(call_tmp) = INT64(0);
  chpl_check_nil(this7, INT64(780), INT64(25));
  call_tmp2 = &((this7)->factoredOffs);
  chpl_check_nil(this7, INT64(780), INT64(25));
  _this_tmp_ = &((this7)->blk);
  chpl_check_nil(this7, INT64(780), INT64(25));
  _this_tmp_2 = &((this7)->off);
  coerce_tmp = *(*(_this_tmp_) + INT64(0));
  coerce_tmp2 = *(*(_this_tmp_2) + INT64(0));
  call_tmp3 = (coerce_tmp * coerce_tmp2);
  chpl_check_nil(this7, INT64(780), INT64(25));
  coerce_tmp3 = (this7)->factoredOffs;
  call_tmp4 = (coerce_tmp3 + call_tmp3);
  *(call_tmp2) = call_tmp4;
  return;
}

/* DefaultRectangular.chpl:805 */
 void initialize4(DefaultRectangularArr_locale_1_int64_t_F this7) {
  chpl_bool coerce_tmp;
  chpl_bool call_tmp;
  _ref_int64_t call_tmp2 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
  range_int64_t_bounded_F call_tmp3;
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  int64_t ret;
  _ref_int64_t call_tmp4 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
  range_int64_t_bounded_F call_tmp5;
  DefaultRectangularDom_1_int64_t_F coerce_tmp3 = NULL;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_int64_t call_tmp6 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_4 = NULL;
  range_int64_t_bounded_F call_tmp7;
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  int64_t call_tmp8;
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t coerce_tmp5;
  int64_t call_tmp9;
  _ref__ddata_locale call_tmp10 = NULL;
  locale _formal_type_tmp_ = NULL;
  _ddata_locale call_tmp11 = NULL;
  int64_t call_tmp12;
  DefaultRectangularDom_1_int64_t_F coerce_tmp6 = NULL;
  chpl_bool call_tmp13;
  _ref__ddata_locale call_tmp14 = NULL;
  int64_t coerce_tmp7;
  int64_t coerce_tmp8;
  int64_t call_tmp15;
  _ddata_locale coerce_tmp9 = NULL;
  _ddata_locale call_tmp16 = NULL;
  _ref_range_int64_t_bounded_F call_tmp17 = NULL;
  range_int64_t_bounded_F call_tmp18;
  DefaultRectangularDom_1_int64_t_F coerce_tmp10 = NULL;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_4 = NULL;
  chpl_check_nil(this7, INT64(806), INT64(25));
  coerce_tmp = (this7)->noinit_data;
  call_tmp = (coerce_tmp == UINT8(true));
  if (call_tmp) {
    goto _end_initialize;
  }
  chpl_check_nil(this7, INT64(808), INT64(25));
  _this_tmp_ = &((this7)->off);
  call_tmp2 = (*(_this_tmp_) + INT64(0));
  chpl_check_nil(this7, INT64(808), INT64(25));
  coerce_tmp2 = (this7)->dom;
  ret_to_arg_ref_tmp_ = &call_tmp3;
  chpl_check_nil(coerce_tmp2, INT64(808), INT64(25));
  dsiDim(coerce_tmp2, ret_to_arg_ref_tmp_);
  ret = (&call_tmp3)->_low;
  *(call_tmp2) = ret;
  chpl_check_nil(this7, INT64(809), INT64(25));
  _this_tmp_2 = &((this7)->str);
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
  chpl_check_nil(this7, INT64(809), INT64(25));
  coerce_tmp3 = (this7)->dom;
  ret_to_arg_ref_tmp_2 = &call_tmp5;
  chpl_check_nil(coerce_tmp3, INT64(809), INT64(25));
  dsiDim(coerce_tmp3, ret_to_arg_ref_tmp_2);
  *(call_tmp4) = INT64(1);
  chpl_check_nil(this7, INT64(811), INT64(25));
  _this_tmp_3 = &((this7)->blk);
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
  *(call_tmp6) = INT64(1);
  chpl_check_nil(this7, INT64(814), INT64(25));
  computeFactoredOffs2(this7);
  chpl_check_nil(this7, INT64(815), INT64(25));
  _this_tmp_4 = &((this7)->blk);
  chpl_check_nil(this7, INT64(815), INT64(25));
  coerce_tmp4 = (this7)->dom;
  ret_to_arg_ref_tmp_3 = &call_tmp7;
  chpl_check_nil(coerce_tmp4, INT64(815), INT64(25));
  dsiDim(coerce_tmp4, ret_to_arg_ref_tmp_3);
  _ref_tmp_ = &call_tmp7;
  chpl_check_nil(_ref_tmp_, INT64(815), INT64(25));
  call_tmp8 = length(_ref_tmp_);
  coerce_tmp5 = *(*(_this_tmp_4) + INT64(0));
  call_tmp9 = (coerce_tmp5 * call_tmp8);
  chpl_check_nil(this7, INT64(816), INT64(25));
  call_tmp10 = &((this7)->data);
  call_tmp11 = ((_ddata_locale)(nil));
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(locale), INT64(816), INT32(25));
  init_elts2(call_tmp11, call_tmp9);
  *(call_tmp10) = call_tmp11;
  chpl_check_nil(this7, INT64(817), INT64(25));
  coerce_tmp6 = (this7)->dom;
  chpl_check_nil(coerce_tmp6, INT64(817), INT64(25));
  call_tmp12 = dsiNumIndices(coerce_tmp6);
  call_tmp13 = (call_tmp12 > INT64(0));
  if (call_tmp13) {
    chpl_check_nil(this7, INT64(817), INT64(25));
    call_tmp14 = &((this7)->shiftedData);
    chpl_check_nil(this7, INT64(817), INT64(25));
    coerce_tmp7 = (this7)->origin;
    chpl_check_nil(this7, INT64(817), INT64(25));
    coerce_tmp8 = (this7)->factoredOffs;
    call_tmp15 = (coerce_tmp7 - coerce_tmp8);
    chpl_check_nil(this7, INT64(817), INT64(25));
    coerce_tmp9 = (this7)->data;
    call_tmp16 = ((_ddata_locale)(nil));
    call_tmp16 = (coerce_tmp9 + call_tmp15);
    *(call_tmp14) = call_tmp16;
  }
  chpl_check_nil(this7, INT64(819), INT64(25));
  call_tmp17 = &((this7)->dataAllocRange);
  chpl_check_nil(this7, INT64(819), INT64(25));
  coerce_tmp10 = (this7)->dom;
  ret_to_arg_ref_tmp_4 = &call_tmp18;
  chpl_check_nil(coerce_tmp10, INT64(819), INT64(25));
  dsiDim(coerce_tmp10, ret_to_arg_ref_tmp_4);
  *(call_tmp17) = call_tmp18;
  _end_initialize:;
  return;
}

/* DefaultRectangular.chpl:805 */
 void initialize3(DefaultRectangularArr_localesSignal_1_int64_t_F this7) {
  chpl_bool coerce_tmp;
  chpl_bool call_tmp;
  _ref_int64_t call_tmp2 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
  range_int64_t_bounded_F call_tmp3;
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  int64_t ret;
  _ref_int64_t call_tmp4 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
  range_int64_t_bounded_F call_tmp5;
  DefaultRectangularDom_1_int64_t_F coerce_tmp3 = NULL;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_int64_t call_tmp6 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
  _ref__tuple_1_star_int64_t _this_tmp_4 = NULL;
  range_int64_t_bounded_F call_tmp7;
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  int64_t call_tmp8;
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t coerce_tmp5;
  int64_t call_tmp9;
  _ref__ddata_localesSignal call_tmp10 = NULL;
  localesSignal _formal_type_tmp_ = NULL;
  _ddata_localesSignal call_tmp11 = NULL;
  int64_t call_tmp12;
  DefaultRectangularDom_1_int64_t_F coerce_tmp6 = NULL;
  chpl_bool call_tmp13;
  _ref__ddata_localesSignal call_tmp14 = NULL;
  int64_t coerce_tmp7;
  int64_t coerce_tmp8;
  int64_t call_tmp15;
  _ddata_localesSignal coerce_tmp9 = NULL;
  _ddata_localesSignal call_tmp16 = NULL;
  _ref_range_int64_t_bounded_F call_tmp17 = NULL;
  range_int64_t_bounded_F call_tmp18;
  DefaultRectangularDom_1_int64_t_F coerce_tmp10 = NULL;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_4 = NULL;
  chpl_check_nil(this7, INT64(806), INT64(25));
  coerce_tmp = (this7)->noinit_data;
  call_tmp = (coerce_tmp == UINT8(true));
  if (call_tmp) {
    goto _end_initialize;
  }
  chpl_check_nil(this7, INT64(808), INT64(25));
  _this_tmp_ = &((this7)->off);
  call_tmp2 = (*(_this_tmp_) + INT64(0));
  chpl_check_nil(this7, INT64(808), INT64(25));
  coerce_tmp2 = (this7)->dom;
  ret_to_arg_ref_tmp_ = &call_tmp3;
  chpl_check_nil(coerce_tmp2, INT64(808), INT64(25));
  dsiDim(coerce_tmp2, ret_to_arg_ref_tmp_);
  ret = (&call_tmp3)->_low;
  *(call_tmp2) = ret;
  chpl_check_nil(this7, INT64(809), INT64(25));
  _this_tmp_2 = &((this7)->str);
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
  chpl_check_nil(this7, INT64(809), INT64(25));
  coerce_tmp3 = (this7)->dom;
  ret_to_arg_ref_tmp_2 = &call_tmp5;
  chpl_check_nil(coerce_tmp3, INT64(809), INT64(25));
  dsiDim(coerce_tmp3, ret_to_arg_ref_tmp_2);
  *(call_tmp4) = INT64(1);
  chpl_check_nil(this7, INT64(811), INT64(25));
  _this_tmp_3 = &((this7)->blk);
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
  *(call_tmp6) = INT64(1);
  chpl_check_nil(this7, INT64(814), INT64(25));
  computeFactoredOffs(this7);
  chpl_check_nil(this7, INT64(815), INT64(25));
  _this_tmp_4 = &((this7)->blk);
  chpl_check_nil(this7, INT64(815), INT64(25));
  coerce_tmp4 = (this7)->dom;
  ret_to_arg_ref_tmp_3 = &call_tmp7;
  chpl_check_nil(coerce_tmp4, INT64(815), INT64(25));
  dsiDim(coerce_tmp4, ret_to_arg_ref_tmp_3);
  _ref_tmp_ = &call_tmp7;
  chpl_check_nil(_ref_tmp_, INT64(815), INT64(25));
  call_tmp8 = length(_ref_tmp_);
  coerce_tmp5 = *(*(_this_tmp_4) + INT64(0));
  call_tmp9 = (coerce_tmp5 * call_tmp8);
  chpl_check_nil(this7, INT64(816), INT64(25));
  call_tmp10 = &((this7)->data);
  call_tmp11 = ((_ddata_localesSignal)(nil));
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(localesSignal), INT64(816), INT32(25));
  init_elts(call_tmp11, call_tmp9);
  *(call_tmp10) = call_tmp11;
  chpl_check_nil(this7, INT64(817), INT64(25));
  coerce_tmp6 = (this7)->dom;
  chpl_check_nil(coerce_tmp6, INT64(817), INT64(25));
  call_tmp12 = dsiNumIndices(coerce_tmp6);
  call_tmp13 = (call_tmp12 > INT64(0));
  if (call_tmp13) {
    chpl_check_nil(this7, INT64(817), INT64(25));
    call_tmp14 = &((this7)->shiftedData);
    chpl_check_nil(this7, INT64(817), INT64(25));
    coerce_tmp7 = (this7)->origin;
    chpl_check_nil(this7, INT64(817), INT64(25));
    coerce_tmp8 = (this7)->factoredOffs;
    call_tmp15 = (coerce_tmp7 - coerce_tmp8);
    chpl_check_nil(this7, INT64(817), INT64(25));
    coerce_tmp9 = (this7)->data;
    call_tmp16 = ((_ddata_localesSignal)(nil));
    call_tmp16 = (coerce_tmp9 + call_tmp15);
    *(call_tmp14) = call_tmp16;
  }
  chpl_check_nil(this7, INT64(819), INT64(25));
  call_tmp17 = &((this7)->dataAllocRange);
  chpl_check_nil(this7, INT64(819), INT64(25));
  coerce_tmp10 = (this7)->dom;
  ret_to_arg_ref_tmp_4 = &call_tmp18;
  chpl_check_nil(coerce_tmp10, INT64(819), INT64(25));
  dsiDim(coerce_tmp10, ret_to_arg_ref_tmp_4);
  *(call_tmp17) = call_tmp18;
  _end_initialize:;
  return;
}

/* DefaultRectangular.chpl:1037 */
 void dsiReallocate2(DefaultRectangularArr_locale_1_int64_t_F this7, DefaultRectangularDom_1_int64_t_F d) {
  string local__str_literal_987;
  DefaultRectangularArr_locale_1_int64_t_F copy = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultRectangularArr_locale_1_int64_t_F this8 = NULL;
  int64_t call_tmp;
  c_void_ptr cast_tmp;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  range_int64_t_bounded_F _init_class_tmp_4;
  atomic_refcnt this9;
  atomic_int64 _init_class_tmp_5;
  atomic_int64 this10;
  atomic_int_least64_t ret2;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
  BaseArr call_tmp2 = NULL;
  _tuple_1_star_int64_t this11;
  _tuple_1_star_int64_t this12;
  _tuple_1_star_int64_t this13;
  _ddata_locale call_tmp3 = NULL;
  _ddata_locale call_tmp4 = NULL;
  range_int64_t_bounded_F wrap_call_tmp3;
  DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp4 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp5 = NULL;
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp6 = NULL;
  range_int64_t_bounded_F coerce_tmp2;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_3 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F this14 = NULL;
  range_int64_t_bounded_F coerce_tmp3;
  range_int64_t_bounded_F _ic__F0_this;
  _ref_range_int64_t_bounded_F this15 = NULL;
  int64_t i;
  int64_t ret4;
  int64_t end;
  int64_t ret5;
  _tuple_1_star_int64_t ind;
  _tuple_1_star_int64_t this16;
  chpl_bool call_tmp7;
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
  chpl_bool call_tmp8;
  string call_tmp9;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
  string call_tmp10;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
  _ref_string _ref_tmp_2 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  int64_t sum;
  _ref__tuple_1_star_int64_t call_tmp11 = NULL;
  int64_t coerce_tmp5;
  int64_t coerce_tmp6;
  int64_t call_tmp12;
  _ddata_locale coerce_tmp7 = NULL;
  _ref_locale call_tmp13 = NULL;
  _tuple_1_star_int64_t ind2;
  _tuple_1_star_int64_t this17;
  locale ret6 = NULL;
  chpl_bool call_tmp14;
  DefaultRectangularDom_1_int64_t_F coerce_tmp8 = NULL;
  chpl_bool call_tmp15;
  string call_tmp16;
  string _autoCopy_tmp_3;
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
  string call_tmp17;
  string _autoCopy_tmp_4;
  _ref_string ret_to_arg_ref_tmp_7 = NULL;
  _ref_string _ref_tmp_4 = NULL;
  _ref_string _ref_tmp_5 = NULL;
  int64_t sum2;
  _ref__tuple_1_star_int64_t call_tmp18 = NULL;
  int64_t coerce_tmp9;
  int64_t coerce_tmp10;
  int64_t call_tmp19;
  _ddata_locale coerce_tmp11 = NULL;
  _ref_locale call_tmp20 = NULL;
  _ref__tuple_1_star_int64_t call_tmp21 = NULL;
  _tuple_1_star_int64_t coerce_tmp12;
  _ref__tuple_1_star_int64_t call_tmp22 = NULL;
  _tuple_1_star_int64_t coerce_tmp13;
  _ref__tuple_1_star_int64_t call_tmp23 = NULL;
  _tuple_1_star_int64_t coerce_tmp14;
  _ref_int64_t call_tmp24 = NULL;
  int64_t coerce_tmp15;
  _ref_int64_t call_tmp25 = NULL;
  int64_t coerce_tmp16;
  _ref__ddata_locale call_tmp26 = NULL;
  _ddata_locale coerce_tmp17 = NULL;
  int64_t call_tmp27;
  chpl_bool call_tmp28;
  _ref__ddata_locale call_tmp29 = NULL;
  _ddata_locale coerce_tmp18 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp30 = NULL;
  c_void_ptr call_tmp31;
  local__str_literal_987 = _str_literal_987;
  ret = d;
  call_tmp = sizeof(chpl_DefaultRectangularArr_locale_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(16));
  this8 = ((DefaultRectangularArr_locale_1_int64_t_F)(cast_tmp));
  ((object)(this8))->chpl__cid = chpl__cid_DefaultRectangularArr_locale_1_int64_t_F;
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  *((this8)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  *((this8)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  *((this8)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->origin = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->factoredOffs = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->data = nil;
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->shiftedData = nil;
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->noinit_data = UINT8(false);
  (&_init_class_tmp_4)->_low = INT64(0);
  (&_init_class_tmp_4)->_high = INT64(0);
  (&_init_class_tmp_4)->_stride = INT64(0);
  (&_init_class_tmp_4)->_alignment = INT64(0);
  (&_init_class_tmp_4)->_aligned = UINT8(false);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->dataAllocRange = _init_class_tmp_4;
  (&this9)->_cnt = _init_class_tmp_5;
  ret2 = type_tmp;
  _ref_tmp_ = &ret2;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this10)->_v = ret2;
  wrap_call_tmp = _construct_atomic_int64(ret2, &this10);
  (&this9)->_cnt = wrap_call_tmp;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
  _construct_atomic_refcnt(&wrap_call_tmp, &this9, ret_to_arg_ref_tmp_);
  call_tmp2 = ((BaseArr)(nil));
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->dom = ret;
  *(this11 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  *((this8)->off + INT64(0)) = *(this11 + INT64(0));
  *(this12 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  *((this8)->blk + INT64(0)) = *(this12 + INT64(0));
  *(this13 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  *((this8)->str + INT64(0)) = *(this13 + INT64(0));
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->origin = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata_locale)(nil));
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->data = call_tmp3;
  call_tmp4 = ((_ddata_locale)(nil));
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->shiftedData = call_tmp4;
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->noinit_data = UINT8(false);
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false));
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->dataAllocRange = wrap_call_tmp3;
  wrap_call_tmp4 = _construct_DefaultRectangularArr2(&wrap_call_tmp2, call_tmp2, ret, &this11, &this12, &this13, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this8);
  copy = wrap_call_tmp4;
  chpl_check_nil(this7, INT64(1044), INT64(25));
  coerce_tmp = (this7)->dom;
  chpl_check_nil(coerce_tmp, INT64(1044), INT64(25));
  call_tmp5 = &((coerce_tmp)->ranges);
  coerce_tmp2 = *(*(call_tmp5) + INT64(0));
  ret_to_arg_ref_tmp_2 = &call_tmp6;
  chpl_check_nil(d, INT64(1044), INT64(25));
  this2(d, &coerce_tmp2, ret_to_arg_ref_tmp_2);
  ret3 = call_tmp6;
  ret_to_arg_ref_tmp_3 = &default_argoffset;
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_3);
  this14 = ret3;
  chpl_check_nil(this14, INT64(1044), INT64(25));
  _this_tmp_ = &((this14)->ranges);
  coerce_tmp3 = *(*(_this_tmp_) + INT64(0));
  _ic__F0_this = coerce_tmp3;
  this15 = &_ic__F0_this;
  chpl_check_nil(this15, INT64(1044), INT64(25));
  checkIfIterWillOverflow(this15, UINT8(true));
  ret4 = (&_ic__F0_this)->_low;
  ret5 = (&_ic__F0_this)->_high;
  end = ret5;
  chpl_check_nil(this7, INT64(1045), INT64(25));
  call_tmp18 = &((this7)->blk);
  chpl_check_nil(this7, INT64(1045), INT64(25));
  coerce_tmp11 = (this7)->shiftedData;
  chpl_check_nil(copy, INT64(1045), INT64(25));
  call_tmp11 = &((copy)->blk);
  chpl_check_nil(copy, INT64(1045), INT64(25));
  coerce_tmp7 = (copy)->shiftedData;
  for (i = ret4; ((i <= end)); i += INT64(1)) {
    *(this16 + INT64(0)) = i;
    *(ind + INT64(0)) = *(this16 + INT64(0));
    chpl_check_nil(copy, INT64(1045), INT64(25));
    coerce_tmp4 = (copy)->dom;
    chpl_check_nil(coerce_tmp4, INT64(1045), INT64(25));
    call_tmp7 = dsiMember(coerce_tmp4, &this16);
    call_tmp8 = (! call_tmp7);
    if (call_tmp8) {
      ret_to_arg_ref_tmp_4 = &_autoCopy_tmp_;
      _stringify_index(&this16, ret_to_arg_ref_tmp_4);
      call_tmp9 = _autoCopy_tmp_;
      ret_to_arg_ref_tmp_5 = &_autoCopy_tmp_2;
      chpl___PLUS_(&local__str_literal_987, &_autoCopy_tmp_, ret_to_arg_ref_tmp_5);
      call_tmp10 = _autoCopy_tmp_2;
      halt(&_autoCopy_tmp_2, INT64(1045), INT32(25));
      _ref_tmp_2 = &call_tmp9;
      chpl___TILDE_string(_ref_tmp_2);
      _ref_tmp_3 = &call_tmp10;
      chpl___TILDE_string(_ref_tmp_3);
    }
    sum = INT64(0);
    coerce_tmp5 = *(ind + INT64(0));
    coerce_tmp6 = *(*(call_tmp11) + INT64(0));
    call_tmp12 = (coerce_tmp5 * coerce_tmp6);
    sum += call_tmp12;
    call_tmp13 = (coerce_tmp7 + sum);
    *(this17 + INT64(0)) = i;
    *(ind2 + INT64(0)) = *(this17 + INT64(0));
    chpl_check_nil(this7, INT64(1045), INT64(25));
    coerce_tmp8 = (this7)->dom;
    chpl_check_nil(coerce_tmp8, INT64(1045), INT64(25));
    call_tmp14 = dsiMember(coerce_tmp8, &this17);
    call_tmp15 = (! call_tmp14);
    if (call_tmp15) {
      ret_to_arg_ref_tmp_6 = &_autoCopy_tmp_3;
      _stringify_index(&this17, ret_to_arg_ref_tmp_6);
      call_tmp16 = _autoCopy_tmp_3;
      ret_to_arg_ref_tmp_7 = &_autoCopy_tmp_4;
      chpl___PLUS_(&local__str_literal_987, &_autoCopy_tmp_3, ret_to_arg_ref_tmp_7);
      call_tmp17 = _autoCopy_tmp_4;
      halt(&_autoCopy_tmp_4, INT64(1045), INT32(25));
      _ref_tmp_4 = &call_tmp16;
      chpl___TILDE_string(_ref_tmp_4);
      _ref_tmp_5 = &call_tmp17;
      chpl___TILDE_string(_ref_tmp_5);
    }
    sum2 = INT64(0);
    coerce_tmp9 = *(ind2 + INT64(0));
    coerce_tmp10 = *(*(call_tmp18) + INT64(0));
    call_tmp19 = (coerce_tmp9 * coerce_tmp10);
    sum2 += call_tmp19;
    call_tmp20 = (coerce_tmp11 + sum2);
    ret6 = *(call_tmp20);
    *(call_tmp13) = ret6;
  }
  chpl__autoDestroy2(call_tmp6);
  chpl_check_nil(this7, INT64(1046), INT64(25));
  call_tmp21 = &((this7)->off);
  chpl_check_nil(copy, INT64(1046), INT64(25));
  *(coerce_tmp12 + INT64(0)) = *((copy)->off + INT64(0));
  *(*(call_tmp21) + INT64(0)) = *(coerce_tmp12 + INT64(0));
  chpl_check_nil(this7, INT64(1047), INT64(25));
  call_tmp22 = &((this7)->blk);
  chpl_check_nil(copy, INT64(1047), INT64(25));
  *(coerce_tmp13 + INT64(0)) = *((copy)->blk + INT64(0));
  *(*(call_tmp22) + INT64(0)) = *(coerce_tmp13 + INT64(0));
  chpl_check_nil(this7, INT64(1048), INT64(25));
  call_tmp23 = &((this7)->str);
  chpl_check_nil(copy, INT64(1048), INT64(25));
  *(coerce_tmp14 + INT64(0)) = *((copy)->str + INT64(0));
  *(*(call_tmp23) + INT64(0)) = *(coerce_tmp14 + INT64(0));
  chpl_check_nil(this7, INT64(1049), INT64(25));
  call_tmp24 = &((this7)->origin);
  chpl_check_nil(copy, INT64(1049), INT64(25));
  coerce_tmp15 = (copy)->origin;
  *(call_tmp24) = coerce_tmp15;
  chpl_check_nil(this7, INT64(1050), INT64(25));
  call_tmp25 = &((this7)->factoredOffs);
  chpl_check_nil(copy, INT64(1050), INT64(25));
  coerce_tmp16 = (copy)->factoredOffs;
  *(call_tmp25) = coerce_tmp16;
  chpl_check_nil(this7, INT64(1051), INT64(25));
  dsiDestroyData2(this7);
  chpl_check_nil(this7, INT64(1052), INT64(25));
  call_tmp26 = &((this7)->data);
  chpl_check_nil(copy, INT64(1052), INT64(25));
  coerce_tmp17 = (copy)->data;
  *(call_tmp26) = coerce_tmp17;
  chpl_check_nil(d, INT64(1062), INT64(25));
  call_tmp27 = numIndices(d);
  call_tmp28 = (call_tmp27 > INT64(0));
  if (call_tmp28) {
    chpl_check_nil(this7, INT64(1063), INT64(25));
    call_tmp29 = &((this7)->shiftedData);
    chpl_check_nil(copy, INT64(1063), INT64(25));
    coerce_tmp18 = (copy)->shiftedData;
    *(call_tmp29) = coerce_tmp18;
  }
  _parent_destructor_tmp_ = ((BaseArr)(copy));
  chpl_check_nil(_parent_destructor_tmp_, INT64(1065), INT64(25));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  chpl_check_nil(_field_destructor_tmp_, INT64(1065), INT64(25));
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(1065), INT64(25));
  call_tmp30 = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp30);
  call_tmp31 = ((void*)(copy));
  chpl_here_free(call_tmp31);
  return;
}

/* DefaultRectangular.chpl:1037 */
 void dsiReallocate3(DefaultRectangularArr_localesSignal_1_int64_t_F this7, DefaultRectangularDom_1_int64_t_F d) {
  string local__str_literal_987;
  DefaultRectangularArr_localesSignal_1_int64_t_F copy = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F this8 = NULL;
  int64_t call_tmp;
  c_void_ptr cast_tmp;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  range_int64_t_bounded_F _init_class_tmp_4;
  atomic_refcnt this9;
  atomic_int64 _init_class_tmp_5;
  atomic_int64 this10;
  atomic_int_least64_t ret2;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
  BaseArr call_tmp2 = NULL;
  _tuple_1_star_int64_t this11;
  _tuple_1_star_int64_t this12;
  _tuple_1_star_int64_t this13;
  _ddata_localesSignal call_tmp3 = NULL;
  _ddata_localesSignal call_tmp4 = NULL;
  range_int64_t_bounded_F wrap_call_tmp3;
  DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp4 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp5 = NULL;
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp6 = NULL;
  range_int64_t_bounded_F coerce_tmp2;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_3 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F this14 = NULL;
  range_int64_t_bounded_F coerce_tmp3;
  range_int64_t_bounded_F _ic__F0_this;
  _ref_range_int64_t_bounded_F this15 = NULL;
  int64_t i;
  int64_t ret4;
  int64_t end;
  int64_t ret5;
  _tuple_1_star_int64_t ind;
  _tuple_1_star_int64_t this16;
  chpl_bool call_tmp7;
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
  chpl_bool call_tmp8;
  string call_tmp9;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
  string call_tmp10;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
  _ref_string _ref_tmp_2 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  int64_t sum;
  _ref__tuple_1_star_int64_t call_tmp11 = NULL;
  int64_t coerce_tmp5;
  int64_t coerce_tmp6;
  int64_t call_tmp12;
  _ddata_localesSignal coerce_tmp7 = NULL;
  _ref_localesSignal call_tmp13 = NULL;
  _tuple_1_star_int64_t ind2;
  _tuple_1_star_int64_t this17;
  localesSignal ret6 = NULL;
  chpl_bool call_tmp14;
  DefaultRectangularDom_1_int64_t_F coerce_tmp8 = NULL;
  chpl_bool call_tmp15;
  string call_tmp16;
  string _autoCopy_tmp_3;
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
  string call_tmp17;
  string _autoCopy_tmp_4;
  _ref_string ret_to_arg_ref_tmp_7 = NULL;
  _ref_string _ref_tmp_4 = NULL;
  _ref_string _ref_tmp_5 = NULL;
  int64_t sum2;
  _ref__tuple_1_star_int64_t call_tmp18 = NULL;
  int64_t coerce_tmp9;
  int64_t coerce_tmp10;
  int64_t call_tmp19;
  _ddata_localesSignal coerce_tmp11 = NULL;
  _ref_localesSignal call_tmp20 = NULL;
  _ref__tuple_1_star_int64_t call_tmp21 = NULL;
  _tuple_1_star_int64_t coerce_tmp12;
  _ref__tuple_1_star_int64_t call_tmp22 = NULL;
  _tuple_1_star_int64_t coerce_tmp13;
  _ref__tuple_1_star_int64_t call_tmp23 = NULL;
  _tuple_1_star_int64_t coerce_tmp14;
  _ref_int64_t call_tmp24 = NULL;
  int64_t coerce_tmp15;
  _ref_int64_t call_tmp25 = NULL;
  int64_t coerce_tmp16;
  _ref__ddata_localesSignal call_tmp26 = NULL;
  _ddata_localesSignal coerce_tmp17 = NULL;
  int64_t call_tmp27;
  chpl_bool call_tmp28;
  _ref__ddata_localesSignal call_tmp29 = NULL;
  _ddata_localesSignal coerce_tmp18 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp30 = NULL;
  c_void_ptr call_tmp31;
  local__str_literal_987 = _str_literal_987;
  ret = d;
  call_tmp = sizeof(chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(21));
  this8 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(cast_tmp));
  ((object)(this8))->chpl__cid = chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F;
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->dom = nil;
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  *((this8)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  *((this8)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  *((this8)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->origin = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->factoredOffs = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->data = nil;
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->shiftedData = nil;
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->noinit_data = UINT8(false);
  (&_init_class_tmp_4)->_low = INT64(0);
  (&_init_class_tmp_4)->_high = INT64(0);
  (&_init_class_tmp_4)->_stride = INT64(0);
  (&_init_class_tmp_4)->_alignment = INT64(0);
  (&_init_class_tmp_4)->_aligned = UINT8(false);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->dataAllocRange = _init_class_tmp_4;
  (&this9)->_cnt = _init_class_tmp_5;
  ret2 = type_tmp;
  _ref_tmp_ = &ret2;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this10)->_v = ret2;
  wrap_call_tmp = _construct_atomic_int64(ret2, &this10);
  (&this9)->_cnt = wrap_call_tmp;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
  _construct_atomic_refcnt(&wrap_call_tmp, &this9, ret_to_arg_ref_tmp_);
  call_tmp2 = ((BaseArr)(nil));
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->dom = ret;
  *(this11 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  *((this8)->off + INT64(0)) = *(this11 + INT64(0));
  *(this12 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  *((this8)->blk + INT64(0)) = *(this12 + INT64(0));
  *(this13 + INT64(0)) = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  *((this8)->str + INT64(0)) = *(this13 + INT64(0));
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->origin = INT64(0);
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->factoredOffs = INT64(0);
  call_tmp3 = ((_ddata_localesSignal)(nil));
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->data = call_tmp3;
  call_tmp4 = ((_ddata_localesSignal)(nil));
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->shiftedData = call_tmp4;
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->noinit_data = UINT8(false);
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false));
  chpl_check_nil(this8, INT64(1040), INT64(25));
  (this8)->dataAllocRange = wrap_call_tmp3;
  wrap_call_tmp4 = _construct_DefaultRectangularArr(&wrap_call_tmp2, call_tmp2, ret, &this11, &this12, &this13, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this8);
  copy = wrap_call_tmp4;
  chpl_check_nil(this7, INT64(1044), INT64(25));
  coerce_tmp = (this7)->dom;
  chpl_check_nil(coerce_tmp, INT64(1044), INT64(25));
  call_tmp5 = &((coerce_tmp)->ranges);
  coerce_tmp2 = *(*(call_tmp5) + INT64(0));
  ret_to_arg_ref_tmp_2 = &call_tmp6;
  chpl_check_nil(d, INT64(1044), INT64(25));
  this2(d, &coerce_tmp2, ret_to_arg_ref_tmp_2);
  ret3 = call_tmp6;
  ret_to_arg_ref_tmp_3 = &default_argoffset;
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_3);
  this14 = ret3;
  chpl_check_nil(this14, INT64(1044), INT64(25));
  _this_tmp_ = &((this14)->ranges);
  coerce_tmp3 = *(*(_this_tmp_) + INT64(0));
  _ic__F0_this = coerce_tmp3;
  this15 = &_ic__F0_this;
  chpl_check_nil(this15, INT64(1044), INT64(25));
  checkIfIterWillOverflow(this15, UINT8(true));
  ret4 = (&_ic__F0_this)->_low;
  ret5 = (&_ic__F0_this)->_high;
  end = ret5;
  chpl_check_nil(this7, INT64(1045), INT64(25));
  call_tmp18 = &((this7)->blk);
  chpl_check_nil(this7, INT64(1045), INT64(25));
  coerce_tmp11 = (this7)->shiftedData;
  chpl_check_nil(copy, INT64(1045), INT64(25));
  call_tmp11 = &((copy)->blk);
  chpl_check_nil(copy, INT64(1045), INT64(25));
  coerce_tmp7 = (copy)->shiftedData;
  for (i = ret4; ((i <= end)); i += INT64(1)) {
    *(this16 + INT64(0)) = i;
    *(ind + INT64(0)) = *(this16 + INT64(0));
    chpl_check_nil(copy, INT64(1045), INT64(25));
    coerce_tmp4 = (copy)->dom;
    chpl_check_nil(coerce_tmp4, INT64(1045), INT64(25));
    call_tmp7 = dsiMember(coerce_tmp4, &this16);
    call_tmp8 = (! call_tmp7);
    if (call_tmp8) {
      ret_to_arg_ref_tmp_4 = &_autoCopy_tmp_;
      _stringify_index(&this16, ret_to_arg_ref_tmp_4);
      call_tmp9 = _autoCopy_tmp_;
      ret_to_arg_ref_tmp_5 = &_autoCopy_tmp_2;
      chpl___PLUS_(&local__str_literal_987, &_autoCopy_tmp_, ret_to_arg_ref_tmp_5);
      call_tmp10 = _autoCopy_tmp_2;
      halt(&_autoCopy_tmp_2, INT64(1045), INT32(25));
      _ref_tmp_2 = &call_tmp9;
      chpl___TILDE_string(_ref_tmp_2);
      _ref_tmp_3 = &call_tmp10;
      chpl___TILDE_string(_ref_tmp_3);
    }
    sum = INT64(0);
    coerce_tmp5 = *(ind + INT64(0));
    coerce_tmp6 = *(*(call_tmp11) + INT64(0));
    call_tmp12 = (coerce_tmp5 * coerce_tmp6);
    sum += call_tmp12;
    call_tmp13 = (coerce_tmp7 + sum);
    *(this17 + INT64(0)) = i;
    *(ind2 + INT64(0)) = *(this17 + INT64(0));
    chpl_check_nil(this7, INT64(1045), INT64(25));
    coerce_tmp8 = (this7)->dom;
    chpl_check_nil(coerce_tmp8, INT64(1045), INT64(25));
    call_tmp14 = dsiMember(coerce_tmp8, &this17);
    call_tmp15 = (! call_tmp14);
    if (call_tmp15) {
      ret_to_arg_ref_tmp_6 = &_autoCopy_tmp_3;
      _stringify_index(&this17, ret_to_arg_ref_tmp_6);
      call_tmp16 = _autoCopy_tmp_3;
      ret_to_arg_ref_tmp_7 = &_autoCopy_tmp_4;
      chpl___PLUS_(&local__str_literal_987, &_autoCopy_tmp_3, ret_to_arg_ref_tmp_7);
      call_tmp17 = _autoCopy_tmp_4;
      halt(&_autoCopy_tmp_4, INT64(1045), INT32(25));
      _ref_tmp_4 = &call_tmp16;
      chpl___TILDE_string(_ref_tmp_4);
      _ref_tmp_5 = &call_tmp17;
      chpl___TILDE_string(_ref_tmp_5);
    }
    sum2 = INT64(0);
    coerce_tmp9 = *(ind2 + INT64(0));
    coerce_tmp10 = *(*(call_tmp18) + INT64(0));
    call_tmp19 = (coerce_tmp9 * coerce_tmp10);
    sum2 += call_tmp19;
    call_tmp20 = (coerce_tmp11 + sum2);
    ret6 = *(call_tmp20);
    *(call_tmp13) = ret6;
  }
  chpl__autoDestroy2(call_tmp6);
  chpl_check_nil(this7, INT64(1046), INT64(25));
  call_tmp21 = &((this7)->off);
  chpl_check_nil(copy, INT64(1046), INT64(25));
  *(coerce_tmp12 + INT64(0)) = *((copy)->off + INT64(0));
  *(*(call_tmp21) + INT64(0)) = *(coerce_tmp12 + INT64(0));
  chpl_check_nil(this7, INT64(1047), INT64(25));
  call_tmp22 = &((this7)->blk);
  chpl_check_nil(copy, INT64(1047), INT64(25));
  *(coerce_tmp13 + INT64(0)) = *((copy)->blk + INT64(0));
  *(*(call_tmp22) + INT64(0)) = *(coerce_tmp13 + INT64(0));
  chpl_check_nil(this7, INT64(1048), INT64(25));
  call_tmp23 = &((this7)->str);
  chpl_check_nil(copy, INT64(1048), INT64(25));
  *(coerce_tmp14 + INT64(0)) = *((copy)->str + INT64(0));
  *(*(call_tmp23) + INT64(0)) = *(coerce_tmp14 + INT64(0));
  chpl_check_nil(this7, INT64(1049), INT64(25));
  call_tmp24 = &((this7)->origin);
  chpl_check_nil(copy, INT64(1049), INT64(25));
  coerce_tmp15 = (copy)->origin;
  *(call_tmp24) = coerce_tmp15;
  chpl_check_nil(this7, INT64(1050), INT64(25));
  call_tmp25 = &((this7)->factoredOffs);
  chpl_check_nil(copy, INT64(1050), INT64(25));
  coerce_tmp16 = (copy)->factoredOffs;
  *(call_tmp25) = coerce_tmp16;
  chpl_check_nil(this7, INT64(1051), INT64(25));
  dsiDestroyData3(this7);
  chpl_check_nil(this7, INT64(1052), INT64(25));
  call_tmp26 = &((this7)->data);
  chpl_check_nil(copy, INT64(1052), INT64(25));
  coerce_tmp17 = (copy)->data;
  *(call_tmp26) = coerce_tmp17;
  chpl_check_nil(d, INT64(1062), INT64(25));
  call_tmp27 = numIndices(d);
  call_tmp28 = (call_tmp27 > INT64(0));
  if (call_tmp28) {
    chpl_check_nil(this7, INT64(1063), INT64(25));
    call_tmp29 = &((this7)->shiftedData);
    chpl_check_nil(copy, INT64(1063), INT64(25));
    coerce_tmp18 = (copy)->shiftedData;
    *(call_tmp29) = coerce_tmp18;
  }
  _parent_destructor_tmp_ = ((BaseArr)(copy));
  chpl_check_nil(_parent_destructor_tmp_, INT64(1065), INT64(25));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
  chpl_check_nil(_field_destructor_tmp_, INT64(1065), INT64(25));
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(1065), INT64(25));
  call_tmp30 = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp30);
  call_tmp31 = ((void*)(copy));
  chpl_here_free(call_tmp31);
  return;
}

