/* LocaleModel.chpl:29 */
 void chpl__init_LocaleModel(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
  chpl___RuntimeTypeInfo call_tmp;
  chpl___RuntimeTypeInfo wrap_call_tmp;
  DefaultDist _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F call_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp3 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F type_tmp2 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp4 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  chpl___RuntimeTypeInfo3 call_tmp5;
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
  if (chpl__init_LocaleModel_p) {
    goto _exit_chpl__init_LocaleModel;
  }
  modFormatStr = "%*s\n";
  modStr = "LocaleModel";
  printModuleInit(modFormatStr, modStr, INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocaleModel_p = UINT8(true);
  {
    chpl__init_ChapelLocale(INT64(29), INT32(23));
    chpl__init_DefaultRectangular(INT64(29), INT32(23));
    chpl__init_ChapelNumLocales(INT64(29), INT32(23));
    chpl__init_Sys(INT64(29), INT32(23));
  }
  doneCreatingLocales = UINT8(false);
  wrap_call_tmp = chpl__buildDomainRuntimeType(defaultDist);
  call_tmp = wrap_call_tmp;
  _runtime_type_tmp_ = (&call_tmp)->d;
  ret_to_arg_ref_tmp_ = &type_tmp;
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_);
  ret_to_arg_ref_tmp_2 = &call_tmp2;
  chpl_build_bounded_range(INT64(1), INT64(0), ret_to_arg_ref_tmp_2);
  ret_to_arg_ref_tmp_3 = &call_tmp3;
  chpl__buildDomainExpr(&call_tmp2, ret_to_arg_ref_tmp_3);
  chpl___ASSIGN_(type_tmp, call_tmp3);
  chpl_emptyLocaleSpace = type_tmp;
  ret_to_arg_ref_tmp_4 = &call_tmp4;
  chpl__ensureDomainExpr(chpl_emptyLocaleSpace, ret_to_arg_ref_tmp_4);
  call_tmp5 = chpl__buildArrayRuntimeType(call_tmp4);
  _runtime_type_tmp_2 = (&call_tmp5)->dom;
  ret_to_arg_ref_tmp_5 = &type_tmp2;
  chpl__convertRuntimeTypeToValue2(_runtime_type_tmp_2, ret_to_arg_ref_tmp_5);
  chpl_emptyLocales = type_tmp2;
  chpl__autoDestroy2(call_tmp4);
  chpl__autoDestroy2(call_tmp3);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleModel:;
  return;
}

/* LocaleModel.chpl:75 */
 void chpl_buildLocaleID(int32_t node, int32_t subloc, _ref_chpl_localeID_t _retArg, int64_t _ln, int32_t _fn) {
  chpl_localeID_t _autoCopy_tmp_;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(node, subloc);
  *(_retArg) = _autoCopy_tmp_;
  return;
}

/* LocaleModel.chpl:79 */
 int32_t chpl_nodeFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, int32_t _fn) {
  int32_t call_tmp;
  call_tmp = chpl_rt_nodeFromLocaleID(*(loc));
  return call_tmp;
}

/* LocaleModel.chpl:83 */
 int32_t chpl_sublocFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, int32_t _fn) {
  int32_t call_tmp;
  call_tmp = chpl_rt_sublocFromLocaleID(*(loc));
  return call_tmp;
}

/* LocaleModel.chpl:92 */
 LocaleModel _construct_LocaleModel(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, int64_t _node_id, string* const local_name, LocaleModel meme) {
  LocaleModel this7 = NULL;
  AbstractLocaleModel T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(92), INT64(23));
  T = &((this7)->super);
  _construct_AbstractLocaleModel(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, T);
  chpl_check_nil(this7, INT64(93), INT64(23));
  (this7)->_node_id = _node_id;
  chpl_check_nil(this7, INT64(94), INT64(23));
  (this7)->local_name = *(local_name);
  return this7;
}

/* LocaleModel.chpl:92 */
 void chpl__auto_destroy_LocaleModel(LocaleModel this7) {
  _ref_string _field_destructor_tmp_ = NULL;
  AbstractLocaleModel _parent_destructor_tmp_ = NULL;
  locale _parent_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  chpl_check_nil(this7, INT64(94), INT64(23));
  _field_destructor_tmp_ = &((this7)->local_name);
  chpl___TILDE_string(_field_destructor_tmp_);
  _parent_destructor_tmp_ = ((AbstractLocaleModel)(this7));
  _parent_destructor_tmp_2 = ((locale)(_parent_destructor_tmp_));
  chpl_check_nil(_parent_destructor_tmp_2, INT64(92), INT64(23));
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->runningTaskCounter);
  chpl_check_nil(_field_destructor_tmp_2, INT64(92), INT64(23));
  call_tmp = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* LocaleModel.chpl:107 */
 LocaleModel LocaleModel2(locale parent_loc) {
  string local__str_literal_859;
  LocaleModel this7 = NULL;
  LocaleModel this8 = NULL;
  int64_t call_tmp;
  c_void_ptr cast_tmp;
  string _init_class_tmp_;
  locale call_tmp2 = NULL;
  atomic_int64 this9;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  string this10;
  c_ptr_uint8_t call_tmp3 = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp2;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  LocaleModel wrap_call_tmp3 = NULL;
  chpl_bool call_tmp4;
  locale coerce_tmp = NULL;
  locale call_tmp5 = NULL;
  _ref_locale call_tmp6 = NULL;
  local__str_literal_859 = _str_literal_859;
  call_tmp = sizeof(chpl_LocaleModel_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(25));
  this8 = ((LocaleModel)(cast_tmp));
  ((object)(this8))->chpl__cid = chpl__cid_LocaleModel;
  chpl_check_nil(this8, INT64(107), INT64(23));
  (this8)->_node_id = INT64(0);
  (&_init_class_tmp_)->len = INT64(0);
  (&_init_class_tmp_)->_size = INT64(0);
  (&_init_class_tmp_)->buff = nil;
  (&_init_class_tmp_)->owned = UINT8(false);
  (&_init_class_tmp_)->locale_id = INT32(0);
  chpl_check_nil(this8, INT64(107), INT64(23));
  (this8)->local_name = _init_class_tmp_;
  call_tmp2 = ((locale)(nil));
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this9)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this9);
  chpl_check_nil(this8, INT64(107), INT64(23));
  (this8)->_node_id = INT64(0);
  (&this10)->len = INT64(0);
  (&this10)->_size = INT64(0);
  (&this10)->buff = nil;
  (&this10)->owned = UINT8(false);
  (&this10)->locale_id = INT32(0);
  (&this10)->len = INT64(0);
  (&this10)->_size = INT64(0);
  call_tmp3 = ((c_ptr_uint8_t)(nil));
  (&this10)->buff = call_tmp3;
  (&this10)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this10)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
  _construct_string(INT64(0), INT64(0), call_tmp3, UINT8(true), default_arglocale_id, &this10, ret_to_arg_ref_tmp_);
  chpl_check_nil(this8, INT64(107), INT64(23));
  (this8)->local_name = wrap_call_tmp2;
  wrap_call_tmp3 = _construct_LocaleModel(call_tmp2, INT64(0), INT64(0), INT64(0), INT64(0), INT64(0), UINT64(0), &wrap_call_tmp, INT64(0), &wrap_call_tmp2, this8);
  this7 = wrap_call_tmp3;
  call_tmp4 = doneCreatingLocales;
  if (call_tmp4) {
    halt(&local__str_literal_859, INT64(109), INT32(23));
  }
  call_tmp5 = ((locale)(wrap_call_tmp3));
  coerce_tmp = call_tmp5;
  chpl_check_nil(coerce_tmp, INT64(111), INT64(23));
  call_tmp6 = &((coerce_tmp)->parent);
  *(call_tmp6) = parent_loc;
  chpl_check_nil(wrap_call_tmp3, INT64(112), INT64(23));
  setup(wrap_call_tmp3);
  return this7;
}

/* LocaleModel.chpl:115 */
 int64_t chpl_id2(LocaleModel this7) {
  int64_t ret;
  chpl_check_nil(this7, INT64(115), INT64(23));
  ret = (this7)->_node_id;
  return ret;
}

/* LocaleModel.chpl:138 */
 locale getChild2(LocaleModel this7, int64_t idx) {
  string local__str_literal_863;
  locale ret = NULL;
  local__str_literal_863 = _str_literal_863;
  halt(&local__str_literal_863, INT64(140), INT32(23));
  ret = nil;
  return ret;
}

/* LocaleModel.chpl:156 */
 void setup(LocaleModel this7) {
  _ref_int64_t call_tmp = NULL;
  int64_t call_tmp2;
  c_string comm;
  c_string spawnfn;
  _ref_c_string T = NULL;
  _ref_c_string T2 = NULL;
  int32_t call_tmp3;
  int32_t call_tmp4;
  chpl_bool call_tmp5;
  chpl_bool T3;
  int64_t call_tmp6;
  chpl_bool call_tmp7;
  chpl_bool T4;
  int32_t call_tmp8;
  int32_t call_tmp9;
  chpl_bool call_tmp10;
  chpl_bool T5;
  int64_t call_tmp11;
  chpl_bool call_tmp12;
  _ref_string call_tmp13 = NULL;
  c_string call_tmp14;
  c_string_copy call_tmp15;
  string call_tmp16;
  int64_t coerce_tmp;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string call_tmp17;
  string coerce_tmp2;
  c_string call_tmp18;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string _ref_tmp_2 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  _ref_string call_tmp19 = NULL;
  c_string call_tmp20;
  string call_tmp21;
  string _autoCopy_tmp_3;
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
  _ref_string _ref_tmp_4 = NULL;
  locale coerce_tmp3 = NULL;
  locale call_tmp22 = NULL;
  _ref_uint64_t call_tmp23 = NULL;
  uint64_t call_tmp24;
  locale coerce_tmp4 = NULL;
  locale call_tmp25 = NULL;
  _ref_int64_t call_tmp26 = NULL;
  int32_t call_tmp27;
  int64_t call_tmp28;
  locale coerce_tmp5 = NULL;
  locale call_tmp29 = NULL;
  _ref_int64_t call_tmp30 = NULL;
  int32_t call_tmp31;
  int64_t call_tmp32;
  locale coerce_tmp6 = NULL;
  locale call_tmp33 = NULL;
  _ref_int64_t call_tmp34 = NULL;
  int32_t call_tmp35;
  int64_t call_tmp36;
  locale coerce_tmp7 = NULL;
  locale call_tmp37 = NULL;
  _ref_int64_t call_tmp38 = NULL;
  int32_t call_tmp39;
  int64_t call_tmp40;
  locale coerce_tmp8 = NULL;
  locale call_tmp41 = NULL;
  _ref_int64_t call_tmp42 = NULL;
  uint32_t call_tmp43;
  int64_t call_tmp44;
  chpl_check_nil(this7, INT64(157), INT64(23));
  call_tmp = &((this7)->_node_id);
  call_tmp2 = ((int64_t)(chpl_nodeID));
  *(call_tmp) = call_tmp2;
  comm = "";
  spawnfn = "";
  T = &spawnfn;
  T2 = &comm;
  call_tmp3 = sys_getenv("CHPL_COMM", T2);
  call_tmp4 = ((int32_t)(INT64(0)));
  call_tmp5 = (call_tmp3 == call_tmp4);
  if (call_tmp5) {
    call_tmp6 = string_compare(comm, "gasnet");
    call_tmp7 = (call_tmp6 == INT64(0));
    T3 = call_tmp7;
  } else {
    T3 = UINT8(false);
  }
  if (T3) {
    call_tmp8 = sys_getenv("GASNET_SPAWNFN", T);
    call_tmp9 = ((int32_t)(INT64(0)));
    call_tmp10 = (call_tmp8 == call_tmp9);
    T4 = call_tmp10;
  } else {
    T4 = UINT8(false);
  }
  if (T4) {
    call_tmp11 = string_compare(spawnfn, "L");
    call_tmp12 = (call_tmp11 == INT64(0));
    T5 = call_tmp12;
  } else {
    T5 = UINT8(false);
  }
  if (T5) {
    chpl_check_nil(this7, INT64(169), INT64(23));
    call_tmp13 = &((this7)->local_name);
    call_tmp14 = chpl_nodeName();
    call_tmp15 = string_concat(call_tmp14, "-", INT64(169), INT32(23));
    chpl_check_nil(this7, INT64(169), INT64(23));
    coerce_tmp = (this7)->_node_id;
    ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
    _cast3(coerce_tmp, ret_to_arg_ref_tmp_);
    call_tmp16 = _autoCopy_tmp_;
    call_tmp18 = ((c_string)(call_tmp15));
    ret_to_arg_ref_tmp_2 = &coerce_tmp2;
    _cast(call_tmp18, ret_to_arg_ref_tmp_2);
    ret_to_arg_ref_tmp_3 = &_autoCopy_tmp_2;
    chpl___PLUS_(&coerce_tmp2, &_autoCopy_tmp_, ret_to_arg_ref_tmp_3);
    call_tmp17 = _autoCopy_tmp_2;
    chpl___ASSIGN_2(call_tmp13, &_autoCopy_tmp_2);
    _ref_tmp_ = &call_tmp16;
    chpl___TILDE_string(_ref_tmp_);
    _ref_tmp_2 = &call_tmp17;
    chpl___TILDE_string(_ref_tmp_2);
    _ref_tmp_3 = &coerce_tmp2;
    chpl___TILDE_string(_ref_tmp_3);
  } else {
    chpl_check_nil(this7, INT64(170), INT64(23));
    call_tmp19 = &((this7)->local_name);
    call_tmp20 = chpl_nodeName();
    ret_to_arg_ref_tmp_4 = &_autoCopy_tmp_3;
    _cast(call_tmp20, ret_to_arg_ref_tmp_4);
    call_tmp21 = _autoCopy_tmp_3;
    chpl___ASSIGN_2(call_tmp19, &_autoCopy_tmp_3);
    _ref_tmp_4 = &call_tmp21;
    chpl___TILDE_string(_ref_tmp_4);
  }
  call_tmp22 = ((locale)(this7));
  coerce_tmp3 = call_tmp22;
  chpl_check_nil(coerce_tmp3, INT64(173), INT64(23));
  call_tmp23 = &((coerce_tmp3)->callStackSize);
  call_tmp24 = chpl_task_getCallStackSize();
  *(call_tmp23) = call_tmp24;
  call_tmp25 = ((locale)(this7));
  coerce_tmp4 = call_tmp25;
  chpl_check_nil(coerce_tmp4, INT64(176), INT64(23));
  call_tmp26 = &((coerce_tmp4)->nPUsPhysAcc);
  call_tmp27 = chpl_getNumPhysicalCpus(UINT8(true));
  call_tmp28 = ((int64_t)(call_tmp27));
  *(call_tmp26) = call_tmp28;
  call_tmp29 = ((locale)(this7));
  coerce_tmp5 = call_tmp29;
  chpl_check_nil(coerce_tmp5, INT64(177), INT64(23));
  call_tmp30 = &((coerce_tmp5)->nPUsPhysAll);
  call_tmp31 = chpl_getNumPhysicalCpus(UINT8(false));
  call_tmp32 = ((int64_t)(call_tmp31));
  *(call_tmp30) = call_tmp32;
  call_tmp33 = ((locale)(this7));
  coerce_tmp6 = call_tmp33;
  chpl_check_nil(coerce_tmp6, INT64(180), INT64(23));
  call_tmp34 = &((coerce_tmp6)->nPUsLogAcc);
  call_tmp35 = chpl_getNumLogicalCpus(UINT8(true));
  call_tmp36 = ((int64_t)(call_tmp35));
  *(call_tmp34) = call_tmp36;
  call_tmp37 = ((locale)(this7));
  coerce_tmp7 = call_tmp37;
  chpl_check_nil(coerce_tmp7, INT64(181), INT64(23));
  call_tmp38 = &((coerce_tmp7)->nPUsLogAll);
  call_tmp39 = chpl_getNumLogicalCpus(UINT8(false));
  call_tmp40 = ((int64_t)(call_tmp39));
  *(call_tmp38) = call_tmp40;
  call_tmp41 = ((locale)(this7));
  coerce_tmp8 = call_tmp41;
  chpl_check_nil(coerce_tmp8, INT64(184), INT64(23));
  call_tmp42 = &((coerce_tmp8)->maxTaskPar);
  call_tmp43 = chpl_task_getMaxPar();
  call_tmp44 = ((int64_t)(call_tmp43));
  *(call_tmp42) = call_tmp44;
  return;
}

/* LocaleModel.chpl:196 */
 void chpl__auto_destroy_RootLocale(RootLocale this7) {
  DefaultRectangularArr_locale_1_int64_t_F _field_destructor_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2 = NULL;
  AbstractRootLocale _parent_destructor_tmp_ = NULL;
  locale _parent_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  chpl_check_nil(this7, INT64(199), INT64(23));
  _field_destructor_tmp_ = (this7)->myLocales;
  chpl__autoDestroy3(_field_destructor_tmp_);
  chpl_check_nil(this7, INT64(198), INT64(23));
  _field_destructor_tmp_2 = (this7)->myLocaleSpace;
  chpl__autoDestroy2(_field_destructor_tmp_2);
  _parent_destructor_tmp_ = ((AbstractRootLocale)(this7));
  _parent_destructor_tmp_2 = ((locale)(_parent_destructor_tmp_));
  chpl_check_nil(_parent_destructor_tmp_2, INT64(196), INT64(23));
  _field_destructor_tmp_3 = &((_parent_destructor_tmp_2)->runningTaskCounter);
  chpl_check_nil(_field_destructor_tmp_3, INT64(196), INT64(23));
  call_tmp = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* LocaleModel.chpl:196 */
 RootLocale _construct_RootLocale(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, DefaultRectangularDom_1_int64_t_F myLocaleSpace, DefaultRectangularArr_locale_1_int64_t_F myLocales, RootLocale meme) {
  RootLocale this7 = NULL;
  AbstractRootLocale T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(196), INT64(23));
  T = &((this7)->super);
  _construct_AbstractRootLocale(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, T);
  chpl_check_nil(this7, INT64(198), INT64(23));
  (this7)->myLocaleSpace = myLocaleSpace;
  chpl_check_nil(this7, INT64(199), INT64(23));
  (this7)->myLocales = myLocales;
  return this7;
}

/* LocaleModel.chpl:201 */
 RootLocale RootLocale2(void) {
  int64_t local_numLocales;
  RootLocale this7 = NULL;
  RootLocale this8 = NULL;
  int64_t call_tmp;
  c_void_ptr cast_tmp;
  DefaultRectangularDom_1_int64_t_F _init_class_tmp_ = NULL;
  DefaultRectangularArr_locale_1_int64_t_F _init_class_tmp_2 = NULL;
  locale call_tmp2 = NULL;
  atomic_int64 this9;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  DefaultRectangularDom_1_int64_t_F default_argmyLocaleSpace = NULL;
  chpl___RuntimeTypeInfo call_tmp3;
  chpl___RuntimeTypeInfo wrap_call_tmp2;
  int64_t call_tmp4;
  range_int64_t_bounded_F call_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp6 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F x = NULL;
  DefaultRectangularDom_1_int64_t_F type_tmp2 = NULL;
  DefaultDist _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F default_argmyLocales = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp7 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  chpl___RuntimeTypeInfo3 call_tmp8;
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
  RootLocale wrap_call_tmp3 = NULL;
  locale coerce_tmp = NULL;
  locale call_tmp9 = NULL;
  _ref_locale call_tmp10 = NULL;
  locale coerce_tmp2 = NULL;
  locale call_tmp11 = NULL;
  _ref_int64_t call_tmp12 = NULL;
  locale coerce_tmp3 = NULL;
  locale call_tmp13 = NULL;
  _ref_int64_t call_tmp14 = NULL;
  locale coerce_tmp4 = NULL;
  locale call_tmp15 = NULL;
  _ref_int64_t call_tmp16 = NULL;
  locale coerce_tmp5 = NULL;
  locale call_tmp17 = NULL;
  _ref_int64_t call_tmp18 = NULL;
  locale coerce_tmp6 = NULL;
  locale call_tmp19 = NULL;
  _ref_int64_t call_tmp20 = NULL;
  local_numLocales = numLocales;
  call_tmp = sizeof(chpl_RootLocale_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(17));
  this8 = ((RootLocale)(cast_tmp));
  ((object)(this8))->chpl__cid = chpl__cid_RootLocale;
  _init_class_tmp_ = nil;
  chpl_check_nil(this8, INT64(201), INT64(23));
  (this8)->myLocaleSpace = _init_class_tmp_;
  _init_class_tmp_2 = nil;
  chpl_check_nil(this8, INT64(201), INT64(23));
  (this8)->myLocales = _init_class_tmp_2;
  call_tmp2 = ((locale)(nil));
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this9)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this9);
  wrap_call_tmp2 = chpl__buildDomainRuntimeType(defaultDist);
  call_tmp3 = wrap_call_tmp2;
  call_tmp4 = (local_numLocales - INT64(1));
  ret_to_arg_ref_tmp_ = &call_tmp5;
  chpl_build_bounded_range(INT64(0), call_tmp4, ret_to_arg_ref_tmp_);
  ret_to_arg_ref_tmp_2 = &call_tmp6;
  chpl__buildDomainExpr(&call_tmp5, ret_to_arg_ref_tmp_2);
  _runtime_type_tmp_ = (&call_tmp3)->d;
  ret_to_arg_ref_tmp_3 = &type_tmp2;
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_3);
  x = type_tmp2;
  chpl___ASSIGN_(type_tmp2, call_tmp6);
  default_argmyLocaleSpace = chpl__autoCopy2(x);
  chpl_check_nil(this8, INT64(201), INT64(23));
  (this8)->myLocaleSpace = default_argmyLocaleSpace;
  ret_to_arg_ref_tmp_4 = &call_tmp7;
  chpl__ensureDomainExpr(default_argmyLocaleSpace, ret_to_arg_ref_tmp_4);
  call_tmp8 = chpl__buildArrayRuntimeType(call_tmp7);
  _runtime_type_tmp_2 = (&call_tmp8)->dom;
  ret_to_arg_ref_tmp_5 = &default_argmyLocales;
  chpl__convertRuntimeTypeToValue2(_runtime_type_tmp_2, ret_to_arg_ref_tmp_5);
  chpl_check_nil(this8, INT64(201), INT64(23));
  (this8)->myLocales = default_argmyLocales;
  wrap_call_tmp3 = _construct_RootLocale(call_tmp2, INT64(0), INT64(0), INT64(0), INT64(0), INT64(0), UINT64(0), &wrap_call_tmp, default_argmyLocaleSpace, default_argmyLocales, this8);
  chpl__autoDestroy2(call_tmp7);
  chpl__autoDestroy2(call_tmp6);
  call_tmp9 = ((locale)(wrap_call_tmp3));
  coerce_tmp = call_tmp9;
  chpl_check_nil(coerce_tmp, INT64(202), INT64(23));
  call_tmp10 = &((coerce_tmp)->parent);
  *(call_tmp10) = nil;
  call_tmp11 = ((locale)(wrap_call_tmp3));
  coerce_tmp2 = call_tmp11;
  chpl_check_nil(coerce_tmp2, INT64(203), INT64(23));
  call_tmp12 = &((coerce_tmp2)->nPUsPhysAcc);
  *(call_tmp12) = INT64(0);
  call_tmp13 = ((locale)(wrap_call_tmp3));
  coerce_tmp3 = call_tmp13;
  chpl_check_nil(coerce_tmp3, INT64(204), INT64(23));
  call_tmp14 = &((coerce_tmp3)->nPUsPhysAll);
  *(call_tmp14) = INT64(0);
  call_tmp15 = ((locale)(wrap_call_tmp3));
  coerce_tmp4 = call_tmp15;
  chpl_check_nil(coerce_tmp4, INT64(205), INT64(23));
  call_tmp16 = &((coerce_tmp4)->nPUsLogAcc);
  *(call_tmp16) = INT64(0);
  call_tmp17 = ((locale)(wrap_call_tmp3));
  coerce_tmp5 = call_tmp17;
  chpl_check_nil(coerce_tmp5, INT64(206), INT64(23));
  call_tmp18 = &((coerce_tmp5)->nPUsLogAll);
  *(call_tmp18) = INT64(0);
  call_tmp19 = ((locale)(wrap_call_tmp3));
  coerce_tmp6 = call_tmp19;
  chpl_check_nil(coerce_tmp6, INT64(207), INT64(23));
  call_tmp20 = &((coerce_tmp6)->maxTaskPar);
  *(call_tmp20) = INT64(0);
  return wrap_call_tmp3;
}

/* LocaleModel.chpl:213 */
 void setup2(RootLocale this7) {
  memory_order local_memory_order_relaxed;
  int32_t local_c_sublocid_any;
  int64_t local_numLocales;
  localesBarrier b;
  localesBarrier this8;
  localesBarrier wrap_call_tmp;
  _ref_localesBarrier ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F flags = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F type_tmp = NULL;
  range_int64_t_boundedLow_F call_tmp;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
  int64_t call_tmp2;
  range_int64_t_bounded_F call_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp4 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  chpl___RuntimeTypeInfo2 call_tmp5;
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this9 = NULL;
  int64_t call_tmp6;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this10;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp2;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp2;
  c_void_ptr call_tmp7;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp3 = NULL;
  int64_t call_tmp8;
  int64_t call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  _class_localscoforall_fn _args_forcoforall_fn = NULL;
  int64_t chpl_here_alloc_size;
  c_void_ptr chpl_here_alloc_tmp;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _args_sizecoforall_fn;
  _ref_c_void_ptr _taskListcoforall_fn = NULL;
  int64_t _taskListNodecoforall_fn;
  chpl___EndCount_atomic_int64_int64_t delete_tmp = NULL;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp10 = NULL;
  c_void_ptr call_tmp11;
  locale call_tmp12 = NULL;
  chpl_localeID_t _autoCopy_tmp_;
  locale call_tmp13 = NULL;
  _ref_atomic_int64 call_tmp14 = NULL;
  _ref_atomic_int_least64_t call_tmp15 = NULL;
  local_memory_order_relaxed = memory_order_relaxed;
  local_c_sublocid_any = c_sublocid_any;
  local_numLocales = numLocales;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _construct_localesBarrier(&this8, ret_to_arg_ref_tmp_);
  b = wrap_call_tmp;
  ret_to_arg_ref_tmp_2 = &call_tmp;
  chpl_build_low_bounded_range(INT64(1), ret_to_arg_ref_tmp_2);
  call_tmp2 = (local_numLocales - INT64(1));
  ret_to_arg_ref_tmp_3 = &call_tmp3;
  chpl___POUND_(&call_tmp, call_tmp2, ret_to_arg_ref_tmp_3);
  ret_to_arg_ref_tmp_4 = &call_tmp4;
  chpl__ensureDomainExpr2(&call_tmp3, ret_to_arg_ref_tmp_4);
  call_tmp5 = chpl__buildArrayRuntimeType2(call_tmp4);
  _runtime_type_tmp_ = (&call_tmp5)->dom;
  ret_to_arg_ref_tmp_5 = &type_tmp;
  chpl__convertRuntimeTypeToValue3(_runtime_type_tmp_, ret_to_arg_ref_tmp_5);
  flags = type_tmp;
  call_tmp6 = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
  cast_tmp = chpl_here_alloc(call_tmp6, INT16(2));
  this9 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
  ((object)(this9))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  chpl_check_nil(this9, INT64(214), INT64(23));
  (this9)->i = _init_class_tmp_;
  chpl_check_nil(this9, INT64(214), INT64(23));
  (this9)->taskCnt = INT64(0);
  chpl_check_nil(this9, INT64(214), INT64(23));
  (this9)->taskList = NULL;
  ret = type_tmp2;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this10)->_v = ret;
  wrap_call_tmp2 = _construct_atomic_int64(ret, &this10);
  chpl_check_nil(this9, INT64(214), INT64(23));
  (this9)->i = wrap_call_tmp2;
  chpl_check_nil(this9, INT64(214), INT64(23));
  (this9)->taskCnt = INT64(0);
  call_tmp7 = ((c_void_ptr)(nil));
  chpl_check_nil(this9, INT64(214), INT64(23));
  (this9)->taskList = call_tmp7;
  wrap_call_tmp3 = _construct__EndCount(&wrap_call_tmp2, INT64(0), call_tmp7, this9);
  _coforallCount = wrap_call_tmp3;
  call_tmp8 = (INT64(0) + local_numLocales);
  call_tmp9 = (call_tmp8 - INT64(1));
  _ic__F1_high = call_tmp9;
  chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp9, INT64(1), INT64(0), call_tmp9, UINT8(true));
  for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
    _upEndCount(_coforallCount);
    rvfDerefTmp = _coforallCount;
    chpl_here_alloc_size = sizeof(chpl__class_localscoforall_fn_object);
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(27));
    _args_forcoforall_fn = ((_class_localscoforall_fn)(chpl_here_alloc_tmp));
    chpl_check_nil(_args_forcoforall_fn, INT64(214), INT64(23));
    (_args_forcoforall_fn)->_0_b = b;
    chpl_check_nil(_args_forcoforall_fn, INT64(214), INT64(23));
    (_args_forcoforall_fn)->_1_flags = flags;
    chpl_check_nil(_args_forcoforall_fn, INT64(214), INT64(23));
    (_args_forcoforall_fn)->_2__yieldedIndex = i;
    chpl_check_nil(_args_forcoforall_fn, INT64(214), INT64(23));
    (_args_forcoforall_fn)->_3_rvfDerefTmp = rvfDerefTmp;
    chpl_check_nil(_args_forcoforall_fn, INT64(214), INT64(23));
    (_args_forcoforall_fn)->_4_this = this7;
    _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
    _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn_object);
    chpl_check_nil(rvfDerefTmp, INT64(214), INT64(23));
    _taskListcoforall_fn = &((rvfDerefTmp)->taskList);
    _taskListNodecoforall_fn = chpl_nodeID;
    /*** wrapcoforall_fn ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(0), ((void*)(_args_vforcoforall_fn)), _taskListcoforall_fn, _taskListNodecoforall_fn, INT64(214), INT32(23));
  }
  _waitEndCount(_coforallCount);
  delete_tmp = _coforallCount;
  chpl_check_nil(delete_tmp, INT64(214), INT64(23));
  _field_destructor_tmp_ = &((delete_tmp)->i);
  chpl_check_nil(_field_destructor_tmp_, INT64(214), INT64(23));
  call_tmp10 = &((_field_destructor_tmp_)->_v);
  atomic_destroy_int_least64_t(call_tmp10);
  call_tmp11 = ((void*)(delete_tmp));
  chpl_here_free(call_tmp11);
  chpl__autoDestroy2(call_tmp4);
  chpl__autoDestroy4(flags);
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp13 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp12 = call_tmp13;
  chpl_check_nil(call_tmp12, INT64(224), INT64(23));
  call_tmp14 = &((call_tmp12)->runningTaskCounter);
  chpl_check_nil(call_tmp14, INT64(224), INT64(23));
  call_tmp15 = &((call_tmp14)->_v);
  atomic_store_explicit_int_least64_t(call_tmp15, INT64(0), local_memory_order_relaxed);
  return;
}

/* LocaleModel.chpl:214 */
 void wrapcoforall_fn(_class_localscoforall_fn c) {
  localesBarrier _0_b;
  DefaultRectangularArr_localesSignal_1_int64_t_F _1_flags = NULL;
  int64_t _2__yieldedIndex;
  chpl___EndCount_atomic_int64_int64_t _3_rvfDerefTmp = NULL;
  RootLocale _4_this = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl_check_nil(c, INT64(214), INT64(23));
  _0_b = (c)->_0_b;
  chpl_check_nil(c, INT64(214), INT64(23));
  _1_flags = (c)->_1_flags;
  chpl_check_nil(c, INT64(214), INT64(23));
  _2__yieldedIndex = (c)->_2__yieldedIndex;
  chpl_check_nil(c, INT64(214), INT64(23));
  _3_rvfDerefTmp = (c)->_3_rvfDerefTmp;
  chpl_check_nil(c, INT64(214), INT64(23));
  _4_this = (c)->_4_this;
  coforall_fn(&_0_b, _1_flags, _2__yieldedIndex, _3_rvfDerefTmp, _4_this);
  chpl_check_nil(c, INT64(214), INT64(23));
  endcount = (c)->_3_rvfDerefTmp;
  _downEndCount(endcount);
  chpl_here_free(((void*)(c)));
  return;
}

/* LocaleModel.chpl:214 */
 void coforall_fn(localesBarrier* const b, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t locIdx, chpl___EndCount_atomic_int64_int64_t _coforallCount, RootLocale this7) {
  string local__str_literal_987;
  int32_t local_c_sublocid_any;
  int32_t call_tmp;
  chpl_localeID_t _autoCopy_tmp_;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  LocaleModel const_tmp = NULL;
  locale call_tmp2 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp3 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
  _tuple_1_star_int64_t i;
  _tuple_1_star_int64_t this8;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp4 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  chpl_bool call_tmp5;
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
  chpl_bool call_tmp6;
  string call_tmp7;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  string call_tmp8;
  string _autoCopy_tmp_3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string _ref_tmp_2 = NULL;
  int64_t sum;
  _ref__tuple_1_star_int64_t call_tmp9 = NULL;
  int64_t coerce_tmp3;
  int64_t coerce_tmp4;
  int64_t call_tmp10;
  _ddata_locale coerce_tmp5 = NULL;
  _ref_locale call_tmp11 = NULL;
  locale call_tmp12 = NULL;
  locale coerce_tmp6 = NULL;
  locale call_tmp13 = NULL;
  _ref_int64_t call_tmp14 = NULL;
  locale coerce_tmp7 = NULL;
  locale call_tmp15 = NULL;
  int64_t coerce_tmp8;
  locale coerce_tmp9 = NULL;
  locale call_tmp16 = NULL;
  _ref_int64_t call_tmp17 = NULL;
  locale coerce_tmp10 = NULL;
  locale call_tmp18 = NULL;
  int64_t coerce_tmp11;
  locale coerce_tmp12 = NULL;
  locale call_tmp19 = NULL;
  _ref_int64_t call_tmp20 = NULL;
  locale coerce_tmp13 = NULL;
  locale call_tmp21 = NULL;
  int64_t coerce_tmp14;
  locale coerce_tmp15 = NULL;
  locale call_tmp22 = NULL;
  _ref_int64_t call_tmp23 = NULL;
  locale coerce_tmp16 = NULL;
  locale call_tmp24 = NULL;
  int64_t coerce_tmp17;
  locale coerce_tmp18 = NULL;
  locale call_tmp25 = NULL;
  _ref_int64_t call_tmp26 = NULL;
  locale coerce_tmp19 = NULL;
  locale call_tmp27 = NULL;
  int64_t coerce_tmp20;
  _ref_localesBarrier _ref_tmp_3 = NULL;
  local__str_literal_987 = _str_literal_987;
  local_c_sublocid_any = c_sublocid_any;
  call_tmp = ((int32_t)(locIdx));
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
  chpl_buildLocaleID(call_tmp, local_c_sublocid_any, ret_to_arg_ref_tmp_, INT64(214), INT32(23));
  chpl_defaultDistInitPrivate();
  call_tmp2 = ((locale)(this7));
  const_tmp = LocaleModel2(call_tmp2);
  chpl_check_nil(this7, INT64(216), INT64(23));
  call_tmp3 = (this7)->myLocales;
  coerce_tmp = call_tmp3;
  *(this8 + INT64(0)) = locIdx;
  *(i + INT64(0)) = *(this8 + INT64(0));
  ret = coerce_tmp;
  call_tmp4 = ret;
  chpl_check_nil(call_tmp4, INT64(216), INT64(23));
  coerce_tmp2 = (call_tmp4)->dom;
  chpl_check_nil(coerce_tmp2, INT64(216), INT64(23));
  call_tmp5 = dsiMember(coerce_tmp2, &this8);
  call_tmp6 = (! call_tmp5);
  if (call_tmp6) {
    ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
    _stringify_index(&this8, ret_to_arg_ref_tmp_2);
    call_tmp7 = _autoCopy_tmp_2;
    ret_to_arg_ref_tmp_3 = &_autoCopy_tmp_3;
    chpl___PLUS_(&local__str_literal_987, &_autoCopy_tmp_2, ret_to_arg_ref_tmp_3);
    call_tmp8 = _autoCopy_tmp_3;
    halt(&_autoCopy_tmp_3, INT64(216), INT32(23));
    _ref_tmp_ = &call_tmp7;
    chpl___TILDE_string(_ref_tmp_);
    _ref_tmp_2 = &call_tmp8;
    chpl___TILDE_string(_ref_tmp_2);
  }
  sum = INT64(0);
  chpl_check_nil(call_tmp4, INT64(216), INT64(23));
  call_tmp9 = &((call_tmp4)->blk);
  coerce_tmp3 = *(i + INT64(0));
  coerce_tmp4 = *(*(call_tmp9) + INT64(0));
  call_tmp10 = (coerce_tmp3 * coerce_tmp4);
  sum += call_tmp10;
  chpl_check_nil(call_tmp4, INT64(216), INT64(23));
  coerce_tmp5 = (call_tmp4)->shiftedData;
  call_tmp11 = (coerce_tmp5 + sum);
  call_tmp12 = ((locale)(const_tmp));
  *(call_tmp11) = call_tmp12;
  call_tmp13 = ((locale)(this7));
  coerce_tmp6 = call_tmp13;
  chpl_check_nil(coerce_tmp6, INT64(217), INT64(23));
  call_tmp14 = &((coerce_tmp6)->nPUsPhysAcc);
  call_tmp15 = ((locale)(const_tmp));
  coerce_tmp7 = call_tmp15;
  chpl_check_nil(coerce_tmp7, INT64(217), INT64(23));
  coerce_tmp8 = (coerce_tmp7)->nPUsPhysAcc;
  *(call_tmp14) += coerce_tmp8;
  call_tmp16 = ((locale)(this7));
  coerce_tmp9 = call_tmp16;
  chpl_check_nil(coerce_tmp9, INT64(218), INT64(23));
  call_tmp17 = &((coerce_tmp9)->nPUsPhysAll);
  call_tmp18 = ((locale)(const_tmp));
  coerce_tmp10 = call_tmp18;
  chpl_check_nil(coerce_tmp10, INT64(218), INT64(23));
  coerce_tmp11 = (coerce_tmp10)->nPUsPhysAll;
  *(call_tmp17) += coerce_tmp11;
  call_tmp19 = ((locale)(this7));
  coerce_tmp12 = call_tmp19;
  chpl_check_nil(coerce_tmp12, INT64(219), INT64(23));
  call_tmp20 = &((coerce_tmp12)->nPUsLogAcc);
  call_tmp21 = ((locale)(const_tmp));
  coerce_tmp13 = call_tmp21;
  chpl_check_nil(coerce_tmp13, INT64(219), INT64(23));
  coerce_tmp14 = (coerce_tmp13)->nPUsLogAcc;
  *(call_tmp20) += coerce_tmp14;
  call_tmp22 = ((locale)(this7));
  coerce_tmp15 = call_tmp22;
  chpl_check_nil(coerce_tmp15, INT64(220), INT64(23));
  call_tmp23 = &((coerce_tmp15)->nPUsLogAll);
  call_tmp24 = ((locale)(const_tmp));
  coerce_tmp16 = call_tmp24;
  chpl_check_nil(coerce_tmp16, INT64(220), INT64(23));
  coerce_tmp17 = (coerce_tmp16)->nPUsLogAll;
  *(call_tmp23) += coerce_tmp17;
  call_tmp25 = ((locale)(this7));
  coerce_tmp18 = call_tmp25;
  chpl_check_nil(coerce_tmp18, INT64(221), INT64(23));
  call_tmp26 = &((coerce_tmp18)->maxTaskPar);
  call_tmp27 = ((locale)(const_tmp));
  coerce_tmp19 = call_tmp27;
  chpl_check_nil(coerce_tmp19, INT64(221), INT64(23));
  coerce_tmp20 = (coerce_tmp19)->maxTaskPar;
  *(call_tmp26) += coerce_tmp20;
  _ref_tmp_3 = b;
  chpl_check_nil(_ref_tmp_3, INT64(214), INT64(23));
  wait5(_ref_tmp_3, locIdx, flags);
  chpl_rootLocaleInitPrivate(locIdx);
  return;
}

/* LocaleModel.chpl:231 */
 int64_t chpl_id3(RootLocale this7) {
  int64_t local_numLocales;
  int64_t ret;
  local_numLocales = numLocales;
  ret = local_numLocales;
  return ret;
}

/* LocaleModel.chpl:251 */
 locale getChild3(RootLocale this7, int64_t idx) {
  string local__str_literal_987;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
  _tuple_1_star_int64_t i;
  _tuple_1_star_int64_t this8;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  locale ret2 = NULL;
  chpl_bool call_tmp3;
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
  chpl_bool call_tmp4;
  string call_tmp5;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string call_tmp6;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string _ref_tmp_2 = NULL;
  int64_t sum;
  _ref__tuple_1_star_int64_t call_tmp7 = NULL;
  int64_t coerce_tmp3;
  int64_t coerce_tmp4;
  int64_t call_tmp8;
  _ddata_locale coerce_tmp5 = NULL;
  _ref_locale call_tmp9 = NULL;
  local__str_literal_987 = _str_literal_987;
  chpl_check_nil(this7, INT64(251), INT64(23));
  call_tmp = (this7)->myLocales;
  coerce_tmp = call_tmp;
  *(this8 + INT64(0)) = idx;
  *(i + INT64(0)) = *(this8 + INT64(0));
  ret = coerce_tmp;
  call_tmp2 = ret;
  chpl_check_nil(call_tmp2, INT64(251), INT64(23));
  coerce_tmp2 = (call_tmp2)->dom;
  chpl_check_nil(coerce_tmp2, INT64(251), INT64(23));
  call_tmp3 = dsiMember(coerce_tmp2, &this8);
  call_tmp4 = (! call_tmp3);
  if (call_tmp4) {
    ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
    _stringify_index(&this8, ret_to_arg_ref_tmp_);
    call_tmp5 = _autoCopy_tmp_;
    ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
    chpl___PLUS_(&local__str_literal_987, &_autoCopy_tmp_, ret_to_arg_ref_tmp_2);
    call_tmp6 = _autoCopy_tmp_2;
    halt(&_autoCopy_tmp_2, INT64(251), INT32(23));
    _ref_tmp_ = &call_tmp5;
    chpl___TILDE_string(_ref_tmp_);
    _ref_tmp_2 = &call_tmp6;
    chpl___TILDE_string(_ref_tmp_2);
  }
  sum = INT64(0);
  chpl_check_nil(call_tmp2, INT64(251), INT64(23));
  call_tmp7 = &((call_tmp2)->blk);
  coerce_tmp3 = *(i + INT64(0));
  coerce_tmp4 = *(*(call_tmp7) + INT64(0));
  call_tmp8 = (coerce_tmp3 * coerce_tmp4);
  sum += call_tmp8;
  chpl_check_nil(call_tmp2, INT64(251), INT64(23));
  coerce_tmp5 = (call_tmp2)->shiftedData;
  call_tmp9 = (coerce_tmp5 + sum);
  ret2 = *(call_tmp9);
  return ret2;
}

/* LocaleModel.chpl:259 */
 DefaultRectangularArr_locale_1_int64_t_F getDefaultLocaleArray2(RootLocale this7) {
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  chpl_check_nil(this7, INT64(259), INT64(23));
  call_tmp = (this7)->myLocales;
  return call_tmp;
}

/* LocaleModel.chpl:259 */
 void getDefaultLocaleArray(RootLocale this7, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg) {
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
  chpl_check_nil(this7, INT64(259), INT64(23));
  call_tmp = (this7)->myLocales;
  *(_retArg) = chpl__autoCopy4(call_tmp);
  return;
}

/* LocaleModel.chpl:261 */
 locale localeIDtoLocale2(RootLocale this7, chpl_localeID_t* const id2) {
  string local__str_literal_987;
  int32_t call_tmp;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
  int64_t call_tmp3;
  _tuple_1_star_int64_t i;
  _tuple_1_star_int64_t this8;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp4 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  locale ret2 = NULL;
  chpl_bool call_tmp5;
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
  chpl_bool call_tmp6;
  string call_tmp7;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string call_tmp8;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string _ref_tmp_2 = NULL;
  int64_t sum;
  _ref__tuple_1_star_int64_t call_tmp9 = NULL;
  int64_t coerce_tmp3;
  int64_t coerce_tmp4;
  int64_t call_tmp10;
  _ddata_locale coerce_tmp5 = NULL;
  _ref_locale call_tmp11 = NULL;
  local__str_literal_987 = _str_literal_987;
  call_tmp = chpl_rt_nodeFromLocaleID(*(id2));
  chpl_check_nil(this7, INT64(266), INT64(23));
  call_tmp2 = (this7)->myLocales;
  coerce_tmp = call_tmp2;
  call_tmp3 = ((int64_t)(call_tmp));
  *(this8 + INT64(0)) = call_tmp3;
  *(i + INT64(0)) = *(this8 + INT64(0));
  ret = coerce_tmp;
  call_tmp4 = ret;
  chpl_check_nil(call_tmp4, INT64(266), INT64(23));
  coerce_tmp2 = (call_tmp4)->dom;
  chpl_check_nil(coerce_tmp2, INT64(266), INT64(23));
  call_tmp5 = dsiMember(coerce_tmp2, &this8);
  call_tmp6 = (! call_tmp5);
  if (call_tmp6) {
    ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
    _stringify_index(&this8, ret_to_arg_ref_tmp_);
    call_tmp7 = _autoCopy_tmp_;
    ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
    chpl___PLUS_(&local__str_literal_987, &_autoCopy_tmp_, ret_to_arg_ref_tmp_2);
    call_tmp8 = _autoCopy_tmp_2;
    halt(&_autoCopy_tmp_2, INT64(266), INT32(23));
    _ref_tmp_ = &call_tmp7;
    chpl___TILDE_string(_ref_tmp_);
    _ref_tmp_2 = &call_tmp8;
    chpl___TILDE_string(_ref_tmp_2);
  }
  sum = INT64(0);
  chpl_check_nil(call_tmp4, INT64(266), INT64(23));
  call_tmp9 = &((call_tmp4)->blk);
  coerce_tmp3 = *(i + INT64(0));
  coerce_tmp4 = *(*(call_tmp9) + INT64(0));
  call_tmp10 = (coerce_tmp3 * coerce_tmp4);
  sum += call_tmp10;
  chpl_check_nil(call_tmp4, INT64(266), INT64(23));
  coerce_tmp5 = (call_tmp4)->shiftedData;
  call_tmp11 = (coerce_tmp5 + sum);
  ret2 = *(call_tmp11);
  return ret2;
}

/* LocaleModel.chpl:299 */
 c_void_ptr chpl_here_alloc(int64_t size, int16_t md) {
  string local__str_literal_2657;
  chpl_bool call_tmp;
  uint64_t call_tmp2;
  int16_t call_tmp3;
  int16_t call_tmp4;
  c_void_ptr call_tmp5;
  local__str_literal_2657 = _str_literal_2657;
  call_tmp = (size < INT64(0));
  if (call_tmp) {
    halt(&local__str_literal_2657, INT64(302), INT32(23));
  }
  call_tmp2 = ((uint64_t)(size));
  call_tmp3 = chpl_memhook_md_num();
  call_tmp4 = (md + call_tmp3);
  call_tmp5 = chpl_mem_alloc(call_tmp2, call_tmp4, INT64(302), INT32(23));
  return call_tmp5;
}

/* LocaleModel.chpl:320 */
 c_void_ptr chpl_here_realloc(c_void_ptr ptr, int64_t size, int16_t md) {
  string local__str_literal_2657;
  chpl_bool call_tmp;
  uint64_t call_tmp2;
  int16_t call_tmp3;
  int16_t call_tmp4;
  c_void_ptr call_tmp5;
  local__str_literal_2657 = _str_literal_2657;
  call_tmp = (size < INT64(0));
  if (call_tmp) {
    halt(&local__str_literal_2657, INT64(323), INT32(23));
  }
  call_tmp2 = ((uint64_t)(size));
  call_tmp3 = chpl_memhook_md_num();
  call_tmp4 = (md + call_tmp3);
  call_tmp5 = chpl_mem_realloc(ptr, call_tmp2, call_tmp4, INT64(323), INT32(23));
  return call_tmp5;
}

/* LocaleModel.chpl:326 */
 int64_t chpl_here_good_alloc_size(int64_t min_size) {
  string local__str_literal_2668;
  string local__str_literal_2657;
  chpl_bool call_tmp;
  uint64_t call_tmp2;
  uint64_t call_tmp3;
  chpl_bool call_tmp4;
  int64_t call_tmp5;
  local__str_literal_2668 = _str_literal_2668;
  local__str_literal_2657 = _str_literal_2657;
  call_tmp = (min_size < INT64(0));
  if (call_tmp) {
    halt(&local__str_literal_2657, INT64(329), INT32(23));
  }
  call_tmp2 = ((uint64_t)(min_size));
  call_tmp3 = chpl_mem_good_alloc_size(call_tmp2, INT64(329), INT32(23));
  call_tmp4 = (call_tmp3 > UINT64(9223372036854775807));
  if (call_tmp4) {
    halt(&local__str_literal_2668, INT64(329), INT32(23));
  }
  call_tmp5 = ((int64_t)(call_tmp3));
  return call_tmp5;
}

/* LocaleModel.chpl:333 */
 void chpl_here_free(c_void_ptr ptr) {
  chpl_mem_free(ptr, INT64(336), INT32(23));
  return;
}

/* LocaleModel.chpl:372 */
chpl_bool chpl_doDirectExecuteOn(chpl_localeID_t* const loc) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  call_tmp = chpl_nodeFromLocaleID(loc, INT64(374), INT32(23));
  call_tmp2 = (call_tmp == chpl_nodeID);
  return call_tmp2;
}

/* LocaleModel.chpl:383 */
void chpl_executeOn(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, int32_t _fn) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  int32_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  call_tmp = chpl_nodeFromLocaleID(loc, INT64(388), INT32(23));
  call_tmp2 = (call_tmp == chpl_nodeID);
  if (call_tmp2) {
    chpl_ftable_call(fn, args);
  } else {
    call_tmp3 = chpl_sublocFromLocaleID(loc, INT64(396), INT32(23));
    call_tmp4 = ((int64_t)(call_tmp));
    call_tmp5 = ((int64_t)(call_tmp3));
    chpl_comm_execute_on(call_tmp4, call_tmp5, fn, args, args_size);
  }
  return;
}

/* LocaleModel.chpl:407 */
void chpl_executeOnFast(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, int32_t _fn) {
  int32_t call_tmp;
  chpl_bool call_tmp2;
  int32_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  call_tmp = chpl_nodeFromLocaleID(loc, INT64(412), INT32(23));
  call_tmp2 = (call_tmp == chpl_nodeID);
  if (call_tmp2) {
    chpl_ftable_call(fn, args);
  } else {
    call_tmp3 = chpl_sublocFromLocaleID(loc, INT64(417), INT32(23));
    call_tmp4 = ((int64_t)(call_tmp));
    call_tmp5 = ((int64_t)(call_tmp3));
    chpl_comm_execute_on_fast(call_tmp4, call_tmp5, fn, args, args_size);
  }
  return;
}

/* LocaleModel.chpl:427 */
void chpl_executeOnNB(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, int32_t _fn) {
  int32_t local_c_sublocid_any;
  int32_t call_tmp;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  int64_t call_tmp4;
  chpl_bool call_tmp5;
  int64_t call_tmp6;
  int64_t call_tmp7;
  int64_t call_tmp8;
  int64_t call_tmp9;
  local_c_sublocid_any = c_sublocid_any;
  call_tmp = chpl_nodeFromLocaleID(loc, INT64(436), INT32(23));
  call_tmp2 = (call_tmp == chpl_nodeID);
  if (call_tmp2) {
    call_tmp3 = chpl_task_getSerial();
    if (call_tmp3) {
      chpl_ftable_call(fn, args);
    } else {
      call_tmp4 = ((int64_t)(local_c_sublocid_any));
      chpl_task_taskCallFTable(fn, args, args_size, call_tmp4, INT64(441), INT32(23));
    }
  } else {
    call_tmp5 = chpl_task_getSerial();
    if (call_tmp5) {
      call_tmp6 = ((int64_t)(call_tmp));
      call_tmp7 = ((int64_t)(local_c_sublocid_any));
      chpl_comm_execute_on(call_tmp6, call_tmp7, fn, args, args_size);
    } else {
      call_tmp8 = ((int64_t)(call_tmp));
      call_tmp9 = ((int64_t)(local_c_sublocid_any));
      chpl_comm_execute_on_nb(call_tmp8, call_tmp9, fn, args, args_size);
    }
  }
  return;
}

/* LocaleModel.chpl:469 */
void chpl_taskListAddBegin(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_c_void_ptr tlist, int64_t tlist_node_id, int64_t _ln, int32_t _fn) {
  chpl_task_addToTaskList(fn, args, subloc_id, tlist, tlist_node_id, UINT8(true), INT64(475), INT32(23));
  return;
}

/* LocaleModel.chpl:484 */
void chpl_taskListAddCoStmt(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_c_void_ptr tlist, int64_t tlist_node_id, int64_t _ln, int32_t _fn) {
  chpl_task_addToTaskList(fn, args, subloc_id, tlist, tlist_node_id, UINT8(false), INT64(490), INT32(23));
  return;
}

/* LocaleModel.chpl:498 */
void chpl_taskListExecute(_ref_c_void_ptr task_list, int64_t _ln, int32_t _fn) {
  chpl_task_executeTasksInList(task_list);
  return;
}

