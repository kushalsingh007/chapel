/* ChapelArray.chpl:134 */
 void chpl__init_ChapelArray(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  atomic_int64 this7;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  if (chpl__init_ChapelArray_p) {
    goto _exit_chpl__init_ChapelArray;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelArray";
  printModuleInit(modFormatStr, modStr, INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelArray_p = UINT8(true);
  {
    chpl__init_ChapelBase(INT64(134), INT32(27));
    chpl__init_ChapelTuple(INT64(134), INT32(27));
    chpl__init_ChapelLocale(INT64(134), INT32(27));
  }
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this7)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this7);
  numPrivateObjects = wrap_call_tmp;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelArray:;
  return;
}

/* ChapelArray.chpl:241 */
 void _newArray(DefaultRectangularArr_locale_1_int64_t_F value, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg) {
  DefaultRectangularArr_locale_1_int64_t_F this7 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp = NULL;
  this7 = nil;
  this7 = value;
  wrap_call_tmp = _construct__array(value, this7);
  *(_retArg) = chpl__autoCopy4(wrap_call_tmp);
  return;
}

/* ChapelArray.chpl:241 */
 void _newArray2(DefaultRectangularArr_localesSignal_1_int64_t_F value, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg) {
  DefaultRectangularArr_localesSignal_1_int64_t_F this7 = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp = NULL;
  this7 = nil;
  this7 = value;
  wrap_call_tmp = _construct__array2(value, this7);
  *(_retArg) = chpl__autoCopy3(wrap_call_tmp);
  return;
}

/* ChapelArray.chpl:248 */
 void _newDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  DefaultRectangularDom_1_int64_t_F this7 = NULL;
  DefaultRectangularDom_1_int64_t_F wrap_call_tmp = NULL;
  this7 = nil;
  this7 = value;
  wrap_call_tmp = _construct__domain(value, this7);
  *(_retArg) = chpl__autoCopy2(wrap_call_tmp);
  return;
}

/* ChapelArray.chpl:255 */
 void _getDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  DefaultRectangularDom_1_int64_t_F this7 = NULL;
  DefaultRectangularDom_1_int64_t_F wrap_call_tmp = NULL;
  this7 = nil;
  this7 = value;
  wrap_call_tmp = _construct__domain(value, this7);
  *(_retArg) = chpl__autoCopy2(wrap_call_tmp);
  return;
}

/* ChapelArray.chpl:262 */
 void _newDistribution(DefaultDist value, _ref_DefaultDist _retArg) {
  DefaultDist call_tmp = NULL;
  chpl_check_nil(value, INT64(266), INT64(27));
  call_tmp = _distribution(value);
  *(_retArg) = chpl__autoCopy(call_tmp);
  return;
}

/* ChapelArray.chpl:269 */
 void _getDistribution(DefaultDist value, _ref_DefaultDist _retArg) {
  DefaultDist call_tmp = NULL;
  chpl_check_nil(value, INT64(273), INT64(27));
  call_tmp = _distribution(value);
  *(_retArg) = chpl__autoCopy(call_tmp);
  return;
}

/* ChapelArray.chpl:287 */
 void chpl__convertRuntimeTypeToValue(DefaultDist d, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp2 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  chpl_check_nil(d, INT64(290), INT64(27));
  call_tmp = newRectangularDom(d);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newDomain(call_tmp, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:287 */
 chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(DefaultDist d) {
  chpl___RuntimeTypeInfo _return_tmp_;
  (&_return_tmp_)->d = d;
  return _return_tmp_;
}

/* ChapelArray.chpl:315 */
 chpl___RuntimeTypeInfo chpl__convertValueToRuntimeType(DefaultRectangularDom_1_int64_t_F dom) {
  DefaultDist call_tmp = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  chpl___RuntimeTypeInfo call_tmp2;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil(dom, INT64(317), INT64(27));
  dist(dom, ret_to_arg_ref_tmp_);
  call_tmp2 = chpl__buildDomainRuntimeType(call_tmp);
  chpl__autoDestroy(call_tmp);
  return call_tmp2;
}

/* ChapelArray.chpl:341 */
 void chpl__convertRuntimeTypeToValue2(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg) {
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil(dom, INT64(342), INT64(27));
  buildArray2(dom, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:341 */
 chpl___RuntimeTypeInfo3 chpl__buildArrayRuntimeType(DefaultRectangularDom_1_int64_t_F dom) {
  chpl___RuntimeTypeInfo3 _return_tmp_;
  (&_return_tmp_)->dom = dom;
  return _return_tmp_;
}

/* ChapelArray.chpl:341 */
 void chpl__convertRuntimeTypeToValue3(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg) {
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil(dom, INT64(342), INT64(27));
  buildArray(dom, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:341 */
 chpl___RuntimeTypeInfo2 chpl__buildArrayRuntimeType2(DefaultRectangularDom_1_int64_t_F dom) {
  chpl___RuntimeTypeInfo2 _return_tmp_;
  (&_return_tmp_)->dom = dom;
  return _return_tmp_;
}

/* ChapelArray.chpl:462 */
 void chpl_incRefCountsForDomainsInArrayEltTypes(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:462 */
 void chpl_incRefCountsForDomainsInArrayEltTypes2(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:483 */
 void chpl_decRefCountsForDomainsInArrayEltTypes2(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:483 */
 void chpl_decRefCountsForDomainsInArrayEltTypes(void) {
  compilerAssert();
  return;
}

/* ChapelArray.chpl:507 */
 void chpl__buildDomainExpr(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  _tuple_1_star_range_int64_t_bounded_F ranges;
  DefaultRectangularDom_1_int64_t_F d = NULL;
  DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
  chpl___RuntimeTypeInfo call_tmp;
  DefaultDist _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  *(ranges + INT64(0)) = *(_e0_ranges);
  call_tmp = chpl__buildDomainRuntimeType(defaultDist);
  _runtime_type_tmp_ = (&call_tmp)->d;
  ret_to_arg_ref_tmp_ = &type_tmp;
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_);
  d = type_tmp;
  chpl_check_nil(type_tmp, INT64(515), INT64(27));
  setIndices(type_tmp, &ranges);
  *(_retArg) = d;
  return;
}

/* ChapelArray.chpl:544 */
 void chpl__ensureDomainExpr(DefaultRectangularDom_1_int64_t_F x, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  *(_retArg) = chpl__autoCopy2(x);
  return;
}

/* ChapelArray.chpl:548 */
 void chpl__ensureDomainExpr2(range_int64_t_bounded_F* const _e0_x, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl__buildDomainExpr(_e0_x, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:701 */
 void chpl__buildDistValue(DefaultDist x, _ref_DefaultDist _retArg) {
  DefaultDist call_tmp = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _newDistribution(x, ret_to_arg_ref_tmp_);
  *(_retArg) = chpl__initCopy(call_tmp);
  chpl__autoDestroy(call_tmp);
  return;
}

/* ChapelArray.chpl:715 */
 DefaultDist _construct__distribution(DefaultDist _value, DefaultDist meme) {
  DefaultDist this7 = NULL;
  this7 = meme;
  this7 = _value;
  return this7;
}

/* ChapelArray.chpl:721 */
 DefaultDist _distribution(DefaultDist _value) {
  DefaultDist this7 = NULL;
  DefaultDist this8 = NULL;
  DefaultDist wrap_call_tmp = NULL;
  this8 = nil;
  this8 = _value;
  wrap_call_tmp = _construct__distribution(_value, this8);
  return wrap_call_tmp;
}

/* ChapelArray.chpl:734 */
 void chpl___TILDE__distribution(DefaultDist this7) {
  DefaultDist ret = NULL;
  int64_t call_tmp;
  BaseDist call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultDist ret2 = NULL;
  BaseDist call_tmp4 = NULL;
  DefaultDist ret3 = NULL;
  BaseDist _parent_destructor_tmp_ = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp5 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp6 = NULL;
  c_void_ptr call_tmp7;
  ret = this7;
  call_tmp2 = ((BaseDist)(ret));
  chpl_check_nil(call_tmp2, INT64(738), INT64(27));
  call_tmp = destroyDist(call_tmp2);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    ret2 = this7;
    call_tmp4 = ((BaseDist)(ret2));
    chpl_check_nil(call_tmp4, INT64(740), INT64(27));
    dsiDestroyDistClass(call_tmp4);
    ret3 = this7;
    _parent_destructor_tmp_ = ((BaseDist)(ret3));
    chpl_check_nil(_parent_destructor_tmp_, INT64(741), INT64(27));
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_domsLock);
    chpl_check_nil(_field_destructor_tmp_, INT64(741), INT64(27));
    call_tmp5 = &((_field_destructor_tmp_)->_v);
    atomic_destroy_flag(call_tmp5);
    chpl_check_nil(_parent_destructor_tmp_, INT64(741), INT64(27));
    _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_distCnt);
    chpl_check_nil(_field_destructor_tmp_2, INT64(741), INT64(27));
    _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
    chpl_check_nil(_field_destructor_tmp_3, INT64(741), INT64(27));
    call_tmp6 = &((_field_destructor_tmp_3)->_v);
    atomic_destroy_int_least64_t(call_tmp6);
    call_tmp7 = ((void*)(ret3));
    chpl_here_free(call_tmp7);
  }
  return;
}

/* ChapelArray.chpl:748 */
 void clone2(DefaultDist this7, _ref_DefaultDist _retArg) {
  DefaultDist ret = NULL;
  DefaultDist call_tmp = NULL;
  DefaultDist call_tmp2 = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  ret = this7;
  chpl_check_nil(ret, INT64(749), INT64(27));
  call_tmp = dsiClone(ret);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newDistribution(call_tmp, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:752 */
 DefaultRectangularDom_1_int64_t_F newRectangularDom(DefaultDist this7) {
  DefaultDist ret = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  ret = this7;
  chpl_check_nil(ret, INT64(753), INT64(27));
  call_tmp = dsiNewRectangularDom(ret);
  return call_tmp;
}

/* ChapelArray.chpl:850 */
 DefaultRectangularDom_1_int64_t_F _construct__domain(DefaultRectangularDom_1_int64_t_F _value, DefaultRectangularDom_1_int64_t_F meme) {
  DefaultRectangularDom_1_int64_t_F this7 = NULL;
  this7 = meme;
  this7 = _value;
  return this7;
}

/* ChapelArray.chpl:864 */
 void chpl___TILDE__domain(DefaultRectangularDom_1_int64_t_F this7) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  BaseDom call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  BaseRectangularDom _parent_destructor_tmp_ = NULL;
  BaseDom _parent_destructor_tmp_2 = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp4 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp5 = NULL;
  c_void_ptr call_tmp6;
  ret = this7;
  call_tmp2 = ((BaseDom)(ret));
  chpl_check_nil(call_tmp2, INT64(868), INT64(27));
  call_tmp = destroyDom(call_tmp2);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    ret2 = this7;
    _parent_destructor_tmp_ = ((BaseRectangularDom)(ret2));
    _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
    chpl_check_nil(_parent_destructor_tmp_2, INT64(870), INT64(27));
    _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->_arrsLock);
    chpl_check_nil(_field_destructor_tmp_, INT64(870), INT64(27));
    call_tmp4 = &((_field_destructor_tmp_)->_v);
    atomic_destroy_flag(call_tmp4);
    chpl_check_nil(_parent_destructor_tmp_2, INT64(870), INT64(27));
    _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->_domCnt);
    chpl_check_nil(_field_destructor_tmp_2, INT64(870), INT64(27));
    _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
    chpl_check_nil(_field_destructor_tmp_3, INT64(870), INT64(27));
    call_tmp5 = &((_field_destructor_tmp_3)->_v);
    atomic_destroy_int_least64_t(call_tmp5);
    call_tmp6 = ((void*)(ret2));
    chpl_here_free(call_tmp6);
  }
  return;
}

/* ChapelArray.chpl:877 */
 void dist(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultDist _retArg) {
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultDist call_tmp2 = NULL;
  DefaultDist coerce_tmp = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  ret = this7;
  call_tmp = ret;
  chpl_check_nil(call_tmp, INT64(877), INT64(27));
  coerce_tmp = (call_tmp)->dist;
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _getDistribution(coerce_tmp, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:935 */
 void this2(DefaultRectangularDom_1_int64_t_F this7, range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  _tuple_1_star_range_int64_t_bounded_F r;
  range_int64_t_bounded_F wrap_call_tmp;
  _ref_range_int64_t_bounded_F call_tmp = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  range_int64_t_bounded_F call_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F call_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp4 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  wrap_call_tmp = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false));
  *(r + INT64(0)) = wrap_call_tmp;
  call_tmp = (r + INT64(0));
  ret = this7;
  ret_to_arg_ref_tmp_ = &call_tmp2;
  chpl_check_nil(ret, INT64(942), INT64(27));
  dsiDim(ret, ret_to_arg_ref_tmp_);
  ret_to_arg_ref_tmp_2 = &call_tmp3;
  _ref_tmp_ = &call_tmp2;
  chpl_check_nil(_ref_tmp_, INT64(942), INT64(27));
  this4(_ref_tmp_, _e0_ranges, ret_to_arg_ref_tmp_2);
  *(call_tmp) = call_tmp3;
  ret2 = this7;
  chpl_check_nil(ret2, INT64(944), INT64(27));
  call_tmp4 = dsiBuildRectangularDom(ret2, &r);
  ret_to_arg_ref_tmp_3 = &call_tmp5;
  _newDomain(call_tmp4, ret_to_arg_ref_tmp_3);
  *(_retArg) = call_tmp5;
  return;
}

/* ChapelArray.chpl:1005 */
 void buildArray2(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg) {
  DefaultRectangularArr_locale_1_int64_t_F x = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F T = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this7;
  chpl_check_nil(ret, INT64(1006), INT64(27));
  call_tmp = dsiBuildArray2(ret);
  x = call_tmp;
  T = &x;
  help(this7, T);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray(x, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:1005 */
 void buildArray(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg) {
  DefaultRectangularArr_localesSignal_1_int64_t_F x = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F T = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp2 = NULL;
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this7;
  chpl_check_nil(ret, INT64(1006), INT64(27));
  call_tmp = dsiBuildArray(ret);
  x = call_tmp;
  T = &x;
  help2(this7, T);
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _newArray2(x, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp2;
  return;
}

/* ChapelArray.chpl:1008 */
 void help(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_locale_1_int64_t_F x) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  DefaultRectangularArr_locale_1_int64_t_F T = NULL;
  chpl_bool T2;
  _ref_atomicflag call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_flag call_tmp3 = NULL;
  chpl_bool call_tmp4;
  _ref_atomicflag call_tmp5 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp6 = NULL;
  chpl_bool call_tmp7;
  _ref_list_BaseArr call_tmp8 = NULL;
  BaseArr call_tmp9 = NULL;
  _ref_atomicflag call_tmp10 = NULL;
  memory_order default_argorder3;
  _ref_atomic_flag call_tmp11 = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  BaseDom coerce_tmp2 = NULL;
  BaseDom call_tmp12 = NULL;
  _ref_atomic_refcnt call_tmp13 = NULL;
  _ref_atomic_int64 call_tmp14 = NULL;
  memory_order default_argorder4;
  _ref_atomic_int_least64_t call_tmp15 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = this7;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  T = *(x);
  chpl_check_nil(coerce_tmp, INT64(1009), INT64(27));
  call_tmp2 = &((coerce_tmp)->_arrsLock);
  default_argorder = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp2, INT64(1009), INT64(27));
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  T2 = call_tmp4;
  while (T2) {
    chpl_task_yield();
    chpl_check_nil(coerce_tmp, INT64(1009), INT64(27));
    call_tmp5 = &((coerce_tmp)->_arrsLock);
    default_argorder2 = local_memory_order_seq_cst;
    chpl_check_nil(call_tmp5, INT64(1009), INT64(27));
    call_tmp6 = &((call_tmp5)->_v);
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    T2 = call_tmp7;
  }
  chpl_check_nil(coerce_tmp, INT64(1009), INT64(27));
  call_tmp8 = &((coerce_tmp)->_arrs);
  call_tmp9 = ((BaseArr)(T));
  chpl_check_nil(call_tmp8, INT64(1009), INT64(27));
  append_chpl(call_tmp8, call_tmp9);
  chpl_check_nil(coerce_tmp, INT64(1009), INT64(27));
  call_tmp10 = &((coerce_tmp)->_arrsLock);
  default_argorder3 = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp10, INT64(1009), INT64(27));
  call_tmp11 = &((call_tmp10)->_v);
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  ret2 = this7;
  call_tmp12 = ((BaseDom)(ret2));
  coerce_tmp2 = call_tmp12;
  compilerAssert();
  chpl_check_nil(coerce_tmp2, INT64(1011), INT64(27));
  call_tmp13 = &((coerce_tmp2)->_domCnt);
  chpl_check_nil(call_tmp13, INT64(1011), INT64(27));
  call_tmp14 = &((call_tmp13)->_cnt);
  default_argorder4 = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp14, INT64(1011), INT64(27));
  call_tmp15 = &((call_tmp14)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  return;
}

/* ChapelArray.chpl:1008 */
 void help2(DefaultRectangularDom_1_int64_t_F this7, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F x) {
  memory_order local_memory_order_seq_cst;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F T = NULL;
  chpl_bool T2;
  _ref_atomicflag call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_flag call_tmp3 = NULL;
  chpl_bool call_tmp4;
  _ref_atomicflag call_tmp5 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp6 = NULL;
  chpl_bool call_tmp7;
  _ref_list_BaseArr call_tmp8 = NULL;
  BaseArr call_tmp9 = NULL;
  _ref_atomicflag call_tmp10 = NULL;
  memory_order default_argorder3;
  _ref_atomic_flag call_tmp11 = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  BaseDom coerce_tmp2 = NULL;
  BaseDom call_tmp12 = NULL;
  _ref_atomic_refcnt call_tmp13 = NULL;
  _ref_atomic_int64 call_tmp14 = NULL;
  memory_order default_argorder4;
  _ref_atomic_int_least64_t call_tmp15 = NULL;
  local_memory_order_seq_cst = memory_order_seq_cst;
  ret = this7;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  T = *(x);
  chpl_check_nil(coerce_tmp, INT64(1009), INT64(27));
  call_tmp2 = &((coerce_tmp)->_arrsLock);
  default_argorder = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp2, INT64(1009), INT64(27));
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
  T2 = call_tmp4;
  while (T2) {
    chpl_task_yield();
    chpl_check_nil(coerce_tmp, INT64(1009), INT64(27));
    call_tmp5 = &((coerce_tmp)->_arrsLock);
    default_argorder2 = local_memory_order_seq_cst;
    chpl_check_nil(call_tmp5, INT64(1009), INT64(27));
    call_tmp6 = &((call_tmp5)->_v);
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
    T2 = call_tmp7;
  }
  chpl_check_nil(coerce_tmp, INT64(1009), INT64(27));
  call_tmp8 = &((coerce_tmp)->_arrs);
  call_tmp9 = ((BaseArr)(T));
  chpl_check_nil(call_tmp8, INT64(1009), INT64(27));
  append_chpl(call_tmp8, call_tmp9);
  chpl_check_nil(coerce_tmp, INT64(1009), INT64(27));
  call_tmp10 = &((coerce_tmp)->_arrsLock);
  default_argorder3 = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp10, INT64(1009), INT64(27));
  call_tmp11 = &((call_tmp10)->_v);
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
  ret2 = this7;
  call_tmp12 = ((BaseDom)(ret2));
  coerce_tmp2 = call_tmp12;
  compilerAssert();
  chpl_check_nil(coerce_tmp2, INT64(1011), INT64(27));
  call_tmp13 = &((coerce_tmp2)->_domCnt);
  chpl_check_nil(call_tmp13, INT64(1011), INT64(27));
  call_tmp14 = &((call_tmp13)->_cnt);
  default_argorder4 = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp14, INT64(1011), INT64(27));
  call_tmp15 = &((call_tmp14)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
  return;
}

/* ChapelArray.chpl:1074 */
 int64_t numIndices(DefaultRectangularDom_1_int64_t_F this7) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  ret = this7;
  chpl_check_nil(ret, INT64(1074), INT64(27));
  call_tmp = dsiNumIndices(ret);
  return call_tmp;
}

/* ChapelArray.chpl:1370 */
 void setIndices(DefaultRectangularDom_1_int64_t_F this7, _tuple_1_star_range_int64_t_bounded_F* const x) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  ret = this7;
  chpl_check_nil(ret, INT64(1371), INT64(27));
  dsiSetIndices(ret, x);
  return;
}

/* ChapelArray.chpl:1378 */
 void getIndices(DefaultRectangularDom_1_int64_t_F this7, _ref__tuple_1_star_range_int64_t_bounded_F _retArg) {
  range_int64_t_bounded_F ret_x1;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  _tuple_1_star_range_int64_t_bounded_F call_tmp;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  ret = this7;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil(ret, INT64(1379), INT64(27));
  dsiGetIndices(ret, ret_to_arg_ref_tmp_);
  ret_x1 = *(call_tmp + INT64(0));
  *(*(_retArg) + INT64(0)) = ret_x1;
  return;
}

/* ChapelArray.chpl:1808 */
 DefaultRectangularArr_locale_1_int64_t_F _construct__array(DefaultRectangularArr_locale_1_int64_t_F _value, DefaultRectangularArr_locale_1_int64_t_F meme) {
  DefaultRectangularArr_locale_1_int64_t_F this7 = NULL;
  this7 = meme;
  this7 = _value;
  chpl_check_nil(this7, INT64(1808), INT64(27));
  initialize2(this7);
  return this7;
}

/* ChapelArray.chpl:1808 */
 DefaultRectangularArr_localesSignal_1_int64_t_F _construct__array2(DefaultRectangularArr_localesSignal_1_int64_t_F _value, DefaultRectangularArr_localesSignal_1_int64_t_F meme) {
  DefaultRectangularArr_localesSignal_1_int64_t_F this7 = NULL;
  this7 = meme;
  this7 = _value;
  chpl_check_nil(this7, INT64(1808), INT64(27));
  initialize(this7);
  return this7;
}

/* ChapelArray.chpl:1814 */
 void initialize2(DefaultRectangularArr_locale_1_int64_t_F this7) {
  chpl_incRefCountsForDomainsInArrayEltTypes();
  return;
}

/* ChapelArray.chpl:1814 */
 void initialize(DefaultRectangularArr_localesSignal_1_int64_t_F this7) {
  chpl_incRefCountsForDomainsInArrayEltTypes2();
  return;
}

/* ChapelArray.chpl:1834 */
 void chpl___TILDE__array2(DefaultRectangularArr_locale_1_int64_t_F this7) {
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  BaseArr call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultRectangularArr_locale_1_int64_t_F ret2 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  c_void_ptr call_tmp5;
  ret = this7;
  call_tmp2 = ((BaseArr)(ret));
  chpl_check_nil(call_tmp2, INT64(1838), INT64(27));
  call_tmp = destroyArr(call_tmp2);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    chpl_decRefCountsForDomainsInArrayEltTypes2();
    ret2 = this7;
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
    chpl_check_nil(_parent_destructor_tmp_, INT64(1841), INT64(27));
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
    chpl_check_nil(_field_destructor_tmp_, INT64(1841), INT64(27));
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
    chpl_check_nil(_field_destructor_tmp_2, INT64(1841), INT64(27));
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
    atomic_destroy_int_least64_t(call_tmp4);
    call_tmp5 = ((void*)(ret2));
    chpl_here_free(call_tmp5);
  }
  return;
}

/* ChapelArray.chpl:1834 */
 void chpl___TILDE__array(DefaultRectangularArr_localesSignal_1_int64_t_F this7) {
  DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
  int64_t call_tmp;
  BaseArr call_tmp2 = NULL;
  chpl_bool call_tmp3;
  DefaultRectangularArr_localesSignal_1_int64_t_F ret2 = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  c_void_ptr call_tmp5;
  ret = this7;
  call_tmp2 = ((BaseArr)(ret));
  chpl_check_nil(call_tmp2, INT64(1838), INT64(27));
  call_tmp = destroyArr(call_tmp2);
  call_tmp3 = (call_tmp == INT64(0));
  if (call_tmp3) {
    chpl_decRefCountsForDomainsInArrayEltTypes();
    ret2 = this7;
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
    chpl_check_nil(_parent_destructor_tmp_, INT64(1841), INT64(27));
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
    chpl_check_nil(_field_destructor_tmp_, INT64(1841), INT64(27));
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
    chpl_check_nil(_field_destructor_tmp_2, INT64(1841), INT64(27));
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
    atomic_destroy_int_least64_t(call_tmp4);
    call_tmp5 = ((void*)(ret2));
    chpl_here_free(call_tmp5);
  }
  return;
}

/* ChapelArray.chpl:1852 */
 void _dom(DefaultRectangularArr_locale_1_int64_t_F this7, _ref_DefaultRectangularDom_1_int64_t_F _retArg) {
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp2 = NULL;
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this7;
  call_tmp = ret;
  chpl_check_nil(call_tmp, INT64(1852), INT64(27));
  coerce_tmp = (call_tmp)->dom;
  ret_to_arg_ref_tmp_ = &call_tmp2;
  _getDomain(coerce_tmp, ret_to_arg_ref_tmp_);
  *(_retArg) = chpl__initCopy2(call_tmp2);
  chpl__autoDestroy2(call_tmp2);
  return;
}

/* ChapelArray.chpl:2068 */
 void newAlias(DefaultRectangularArr_locale_1_int64_t_F this7, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg) {
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  ret = this7;
  ret_to_arg_ref_tmp_ = &call_tmp;
  _newArray(ret, ret_to_arg_ref_tmp_);
  *(_retArg) = call_tmp;
  return;
}

/* ChapelArray.chpl:2918 */
 void chpl___ASSIGN_(DefaultRectangularDom_1_int64_t_F a, DefaultRectangularDom_1_int64_t_F b) {
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  BaseDom coerce_tmp = NULL;
  BaseDom call_tmp = NULL;
  list_BaseArr_chpl coerce_tmp2;
  list_BaseArr_chpl _ic__F0_this;
  listNode_BaseArr_chpl tmp = NULL;
  listNode_BaseArr_chpl coerce_tmp3 = NULL;
  chpl_bool T;
  object call_tmp2 = NULL;
  chpl_bool call_tmp3;
  BaseArr _yieldedIndex = NULL;
  chpl_bool _dynamic_dispatch_tmp_;
  DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_ = NULL;
  chpl_bool _dynamic_dispatch_tmp_2;
  DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_2 = NULL;
  chpl_bool _dynamic_dispatch_tmp_3;
  DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_3 = NULL;
  chpl_bool _dynamic_dispatch_tmp_4;
  DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_4 = NULL;
  listNode_BaseArr_chpl coerce_tmp4 = NULL;
  object call_tmp4 = NULL;
  chpl_bool call_tmp5;
  _tuple_1_star_range_int64_t_bounded_F call_tmp6;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
  BaseDom coerce_tmp5 = NULL;
  BaseDom call_tmp7 = NULL;
  list_BaseArr_chpl coerce_tmp6;
  list_BaseArr_chpl _ic__F0_this2;
  listNode_BaseArr_chpl tmp2 = NULL;
  listNode_BaseArr_chpl coerce_tmp7 = NULL;
  chpl_bool T2;
  object call_tmp8 = NULL;
  chpl_bool call_tmp9;
  BaseArr _yieldedIndex2 = NULL;
  listNode_BaseArr_chpl coerce_tmp8 = NULL;
  object call_tmp10 = NULL;
  chpl_bool call_tmp11;
  ret = a;
  call_tmp = ((BaseDom)(ret));
  coerce_tmp = call_tmp;
  chpl_check_nil(coerce_tmp, INT64(2928), INT64(27));
  coerce_tmp2 = (coerce_tmp)->_arrs;
  _ic__F0_this = coerce_tmp2;
  coerce_tmp3 = (&_ic__F0_this)->first_chpl;
  tmp = coerce_tmp3;
  call_tmp2 = ((object)(coerce_tmp3));
  call_tmp3 = (call_tmp2 != nil);
  T = call_tmp3;
  while (T) {
    chpl_check_nil(tmp, INT64(2928), INT64(27));
    _yieldedIndex = (tmp)->data_chpl;
    chpl_check_nil(_yieldedIndex, INT64(2929), INT64(27));
    _dynamic_dispatch_tmp_ = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
    if (_dynamic_dispatch_tmp_) {
      _cast_tmp_ = ((DefaultRectangularArr_locale_1_int64_t_F)(_yieldedIndex));
      chpl_check_nil(_cast_tmp_, INT64(2929), INT64(27));
      dsiReallocate2(_cast_tmp_, b);
    } else {
      chpl_check_nil(_yieldedIndex, INT64(2929), INT64(27));
      _dynamic_dispatch_tmp_2 = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
      if (_dynamic_dispatch_tmp_2) {
        _cast_tmp_2 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(_yieldedIndex));
        chpl_check_nil(_cast_tmp_2, INT64(2929), INT64(27));
        dsiReallocate3(_cast_tmp_2, b);
      } else {
        chpl_check_nil(_yieldedIndex, INT64(2929), INT64(27));
        _dynamic_dispatch_tmp_3 = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
        if (_dynamic_dispatch_tmp_3) {
          _cast_tmp_3 = ((DefaultRectangularArr_locale_1_int64_t_F)(_yieldedIndex));
          chpl_check_nil(_cast_tmp_3, INT64(2929), INT64(27));
          dsiReallocate2(_cast_tmp_3, b);
        } else {
          chpl_check_nil(_yieldedIndex, INT64(2929), INT64(27));
          _dynamic_dispatch_tmp_4 = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
          if (_dynamic_dispatch_tmp_4) {
            _cast_tmp_4 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(_yieldedIndex));
            chpl_check_nil(_cast_tmp_4, INT64(2929), INT64(27));
            dsiReallocate3(_cast_tmp_4, b);
          } else {
            chpl_check_nil(_yieldedIndex, INT64(2929), INT64(27));
            dsiReallocate(_yieldedIndex, b);
          }
        }
      }
    }
    chpl_check_nil(tmp, INT64(2928), INT64(27));
    coerce_tmp4 = (tmp)->next_chpl;
    tmp = coerce_tmp4;
    call_tmp4 = ((object)(coerce_tmp4));
    call_tmp5 = (call_tmp4 != nil);
    T = call_tmp5;
  }
  ret_to_arg_ref_tmp_ = &call_tmp6;
  chpl_check_nil(b, INT64(2931), INT64(27));
  getIndices(b, ret_to_arg_ref_tmp_);
  chpl_check_nil(a, INT64(2931), INT64(27));
  setIndices(a, &call_tmp6);
  ret2 = a;
  call_tmp7 = ((BaseDom)(ret2));
  coerce_tmp5 = call_tmp7;
  chpl_check_nil(coerce_tmp5, INT64(2932), INT64(27));
  coerce_tmp6 = (coerce_tmp5)->_arrs;
  _ic__F0_this2 = coerce_tmp6;
  coerce_tmp7 = (&_ic__F0_this2)->first_chpl;
  tmp2 = coerce_tmp7;
  call_tmp8 = ((object)(coerce_tmp7));
  call_tmp9 = (call_tmp8 != nil);
  T2 = call_tmp9;
  while (T2) {
    chpl_check_nil(tmp2, INT64(2932), INT64(27));
    _yieldedIndex2 = (tmp2)->data_chpl;
    chpl_check_nil(_yieldedIndex2, INT64(2933), INT64(27));
    dsiPostReallocate(_yieldedIndex2);
    chpl_check_nil(tmp2, INT64(2932), INT64(27));
    coerce_tmp8 = (tmp2)->next_chpl;
    tmp2 = coerce_tmp8;
    call_tmp10 = ((object)(coerce_tmp8));
    call_tmp11 = (call_tmp10 != nil);
    T2 = call_tmp11;
  }
  return;
}

/* ChapelArray.chpl:3344 */
 DefaultDist chpl__initCopy(DefaultDist a) {
  DefaultDist call_tmp = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &call_tmp;
  chpl_check_nil(a, INT64(3345), INT64(27));
  clone2(a, ret_to_arg_ref_tmp_);
  return call_tmp;
}

/* ChapelArray.chpl:3350 */
 DefaultRectangularDom_1_int64_t_F chpl__initCopy2(DefaultRectangularDom_1_int64_t_F a) {
  DefaultRectangularDom_1_int64_t_F b = NULL;
  DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
  chpl___RuntimeTypeInfo call_tmp;
  DefaultDist _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  _tuple_1_star_range_int64_t_bounded_F call_tmp2;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  call_tmp = chpl__convertValueToRuntimeType(a);
  _runtime_type_tmp_ = (&call_tmp)->d;
  ret_to_arg_ref_tmp_ = &type_tmp;
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_);
  b = type_tmp;
  ret_to_arg_ref_tmp_2 = &call_tmp2;
  chpl_check_nil(a, INT64(3353), INT64(27));
  getIndices(a, ret_to_arg_ref_tmp_2);
  chpl_check_nil(type_tmp, INT64(3353), INT64(27));
  setIndices(type_tmp, &call_tmp2);
  return b;
}

