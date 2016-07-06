/* ChapelLocale.chpl:67 */
 void chpl__init_ChapelLocale(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  locale type_tmp = NULL;
  locale type_tmp2 = NULL;
  locale const_tmp = NULL;
  if (chpl__init_ChapelLocale_p) {
    goto _exit_chpl__init_ChapelLocale;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelLocale";
  printModuleInit(modFormatStr, modStr, INT64(12));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelLocale_p = UINT8(true);
  {
    chpl__init_LocaleModel(INT64(67), INT32(24));
  }
  type_tmp = nil;
  rootLocale = type_tmp;
  type_tmp2 = nil;
  origRootLocale = type_tmp2;
  const_tmp = locale2();
  dummyLocale = const_tmp;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelLocale:;
  return;
}

/* ChapelLocale.chpl:90 */
 locale _construct_locale(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, locale meme) {
  locale this7 = NULL;
  object T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(90), INT64(24));
  T = &((this7)->super);
  _construct_object(T);
  chpl_check_nil(this7, INT64(102), INT64(24));
  (this7)->parent = parent;
  chpl_check_nil(this7, INT64(104), INT64(24));
  (this7)->nPUsLogAcc = nPUsLogAcc;
  chpl_check_nil(this7, INT64(105), INT64(24));
  (this7)->nPUsLogAll = nPUsLogAll;
  chpl_check_nil(this7, INT64(106), INT64(24));
  (this7)->nPUsPhysAcc = nPUsPhysAcc;
  chpl_check_nil(this7, INT64(107), INT64(24));
  (this7)->nPUsPhysAll = nPUsPhysAll;
  chpl_check_nil(this7, INT64(163), INT64(24));
  (this7)->maxTaskPar = maxTaskPar;
  chpl_check_nil(this7, INT64(171), INT64(24));
  (this7)->callStackSize = callStackSize;
  chpl_check_nil(this7, INT64(212), INT64(24));
  (this7)->runningTaskCounter = *(runningTaskCounter);
  return this7;
}

/* ChapelLocale.chpl:90 */
 void chpl__auto_destroy_locale(locale this7) {
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  chpl_check_nil(this7, INT64(212), INT64(24));
  _field_destructor_tmp_ = &((this7)->runningTaskCounter);
  chpl_check_nil(_field_destructor_tmp_, INT64(212), INT64(24));
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* ChapelLocale.chpl:93 */
 locale locale2(void) {
  locale this7 = NULL;
  locale this8 = NULL;
  int64_t call_tmp;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  locale call_tmp2 = NULL;
  atomic_int64 this9;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  locale wrap_call_tmp2 = NULL;
  call_tmp = sizeof(chpl_locale_object);
  cast_tmp = chpl_here_alloc(call_tmp, INT16(3));
  this8 = ((locale)(cast_tmp));
  ((object)(this8))->chpl__cid = chpl__cid_locale;
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->parent = nil;
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->nPUsLogAcc = INT64(0);
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->nPUsLogAll = INT64(0);
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->nPUsPhysAcc = INT64(0);
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->nPUsPhysAll = INT64(0);
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->maxTaskPar = INT64(0);
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->callStackSize = UINT64(0);
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->runningTaskCounter = _init_class_tmp_;
  call_tmp2 = ((locale)(nil));
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->parent = call_tmp2;
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->nPUsLogAcc = INT64(0);
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->nPUsLogAll = INT64(0);
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->nPUsPhysAcc = INT64(0);
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->nPUsPhysAll = INT64(0);
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->maxTaskPar = INT64(0);
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->callStackSize = UINT64(0);
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this9)->_v = ret;
  wrap_call_tmp = _construct_atomic_int64(ret, &this9);
  chpl_check_nil(this8, INT64(93), INT64(24));
  (this8)->runningTaskCounter = wrap_call_tmp;
  wrap_call_tmp2 = _construct_locale(call_tmp2, INT64(0), INT64(0), INT64(0), INT64(0), INT64(0), UINT64(0), &wrap_call_tmp, this8);
  return wrap_call_tmp2;
}

/* ChapelLocale.chpl:180 */
 int64_t id(locale this7) {
  int64_t call_tmp;
  int32_t _virtual_method_tmp_;
  chpl_check_nil(this7, INT64(180), INT64(24));
  _virtual_method_tmp_ = ((object)(this7))->chpl__cid;
  call_tmp = ((int64_t(*)(locale))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(2))])(this7);
  return call_tmp;
}

/* ChapelLocale.chpl:243 */
 int64_t chpl_id(locale this7) {
  string local__str_literal_32;
  local__str_literal_32 = _str_literal_32;
  halt(&local__str_literal_32, INT64(244), INT32(24));
  return INT64(-1);
}

/* ChapelLocale.chpl:286 */
 locale getChild(locale this7, int64_t idx) {
  string local__str_literal_32;
  local__str_literal_32 = _str_literal_32;
  halt(&local__str_literal_32, INT64(287), INT32(24));
  return this7;
}

/* ChapelLocale.chpl:302 */
 AbstractLocaleModel _construct_AbstractLocaleModel(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, AbstractLocaleModel meme) {
  AbstractLocaleModel this7 = NULL;
  locale T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(302), INT64(24));
  T = &((this7)->super);
  _construct_locale(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, T);
  return meme;
}

/* ChapelLocale.chpl:302 */
 void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this7) {
  locale _parent_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _parent_destructor_tmp_ = ((locale)(this7));
  chpl_check_nil(_parent_destructor_tmp_, INT64(302), INT64(24));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->runningTaskCounter);
  chpl_check_nil(_field_destructor_tmp_, INT64(302), INT64(24));
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* ChapelLocale.chpl:338 */
 AbstractRootLocale _construct_AbstractRootLocale(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, AbstractRootLocale meme) {
  AbstractRootLocale this7 = NULL;
  locale T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(338), INT64(24));
  T = &((this7)->super);
  _construct_locale(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, T);
  return meme;
}

/* ChapelLocale.chpl:338 */
 void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this7) {
  locale _parent_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  _parent_destructor_tmp_ = ((locale)(this7));
  chpl_check_nil(_parent_destructor_tmp_, INT64(338), INT64(24));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->runningTaskCounter);
  chpl_check_nil(_field_destructor_tmp_, INT64(338), INT64(24));
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* ChapelLocale.chpl:356 */
 locale localeIDtoLocale(AbstractRootLocale this7, chpl_localeID_t* const id2) {
  string local__str_literal_32;
  locale call_tmp = NULL;
  local__str_literal_32 = _str_literal_32;
  halt(&local__str_literal_32, INT64(357), INT32(24));
  call_tmp = ((locale)(this7));
  return call_tmp;
}

/* ChapelLocale.chpl:413 */
 localesSignal _construct_localesSignal(atomicflag* const s, localesSignal meme) {
  localesSignal this7 = NULL;
  object T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(413), INT64(24));
  T = &((this7)->super);
  _construct_object(T);
  chpl_check_nil(this7, INT64(414), INT64(24));
  (this7)->s = *(s);
  return this7;
}

/* ChapelLocale.chpl:413 */
 void chpl__auto_destroy_localesSignal(localesSignal this7) {
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  chpl_check_nil(this7, INT64(414), INT64(24));
  _field_destructor_tmp_ = &((this7)->s);
  chpl_check_nil(_field_destructor_tmp_, INT64(414), INT64(24));
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  return;
}

/* ChapelLocale.chpl:417 */
 void _construct_localesBarrier(localesBarrier* const meme, _ref_localesBarrier _retArg) {
  localesBarrier this7;
  *(_retArg) = *(meme);
  return;
}

/* ChapelLocale.chpl:418 */
 void wait5(_ref_localesBarrier this7, int64_t locIdx, DefaultRectangularArr_localesSignal_1_int64_t_F flags) {
  memory_order local_memory_order_relaxed;
  string local__str_literal_987;
  int64_t local_numLocales;
  memory_order local_memory_order_seq_cst;
  chpl_bool call_tmp;
  chpl_bool T;
  memory_order default_argorder;
  int64_t count;
  DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F _ic__F0_this = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F this8 = NULL;
  int64_t call_tmp2;
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F this9 = NULL;
  int64_t sum;
  _ref__tuple_1_star_int64_t call_tmp3 = NULL;
  int64_t coerce_tmp2;
  int64_t call_tmp4;
  DefaultRectangularArr_localesSignal_1_int64_t_F this10 = NULL;
  int64_t call_tmp5;
  DefaultRectangularDom_1_int64_t_F coerce_tmp3 = NULL;
  int64_t call_tmp6;
  DefaultRectangularArr_localesSignal_1_int64_t_F this11 = NULL;
  int64_t sum2;
  _ref__tuple_1_star_int64_t call_tmp7 = NULL;
  int64_t coerce_tmp4;
  int64_t call_tmp8;
  int64_t call_tmp9;
  DefaultRectangularArr_localesSignal_1_int64_t_F this12 = NULL;
  int64_t call_tmp10;
  DefaultRectangularDom_1_int64_t_F coerce_tmp5 = NULL;
  int64_t call_tmp11;
  int64_t call_tmp12;
  int64_t call_tmp13;
  int64_t _ic__F1_high;
  int64_t _ic__F2_stride;
  chpl_bool call_tmp14;
  int64_t i;
  DefaultRectangularArr_localesSignal_1_int64_t_F this13 = NULL;
  _ddata_localesSignal coerce_tmp6 = NULL;
  _ref_localesSignal call_tmp15 = NULL;
  localesSignal coerce_tmp7 = NULL;
  object call_tmp16 = NULL;
  chpl_bool call_tmp17;
  int64_t call_tmp18;
  chpl_bool call_tmp19;
  DefaultRectangularArr_localesSignal_1_int64_t_F ret2 = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F _ic__F0_this2 = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F this14 = NULL;
  int64_t call_tmp20;
  DefaultRectangularDom_1_int64_t_F coerce_tmp8 = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F this15 = NULL;
  int64_t sum3;
  _ref__tuple_1_star_int64_t call_tmp21 = NULL;
  int64_t coerce_tmp9;
  int64_t call_tmp22;
  DefaultRectangularArr_localesSignal_1_int64_t_F this16 = NULL;
  int64_t call_tmp23;
  DefaultRectangularDom_1_int64_t_F coerce_tmp10 = NULL;
  int64_t call_tmp24;
  DefaultRectangularArr_localesSignal_1_int64_t_F this17 = NULL;
  int64_t sum4;
  _ref__tuple_1_star_int64_t call_tmp25 = NULL;
  int64_t coerce_tmp11;
  int64_t call_tmp26;
  int64_t call_tmp27;
  DefaultRectangularArr_localesSignal_1_int64_t_F this18 = NULL;
  int64_t call_tmp28;
  DefaultRectangularDom_1_int64_t_F coerce_tmp12 = NULL;
  int64_t call_tmp29;
  int64_t call_tmp30;
  int64_t call_tmp31;
  int64_t _ic__F1_high2;
  int64_t _ic__F2_stride2;
  chpl_bool call_tmp32;
  int64_t i2;
  DefaultRectangularArr_localesSignal_1_int64_t_F this19 = NULL;
  _ddata_localesSignal coerce_tmp13 = NULL;
  _ref_localesSignal call_tmp33 = NULL;
  localesSignal coerce_tmp14 = NULL;
  _ref_atomicflag call_tmp34 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp35 = NULL;
  localesSignal f = NULL;
  localesSignal this20 = NULL;
  int64_t call_tmp36;
  c_void_ptr cast_tmp;
  atomicflag _init_class_tmp_;
  atomicflag this21;
  atomic_flag ret3;
  atomic_flag type_tmp;
  _ref_atomic_flag _ref_tmp_ = NULL;
  atomicflag wrap_call_tmp;
  localesSignal wrap_call_tmp2 = NULL;
  _tuple_1_star_int64_t i3;
  _tuple_1_star_int64_t this22;
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp37 = NULL;
  DefaultRectangularArr_localesSignal_1_int64_t_F ret4 = NULL;
  chpl_bool call_tmp38;
  DefaultRectangularDom_1_int64_t_F coerce_tmp15 = NULL;
  chpl_bool call_tmp39;
  string call_tmp40;
  string _autoCopy_tmp_;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string call_tmp41;
  string _autoCopy_tmp_2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string _ref_tmp_2 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  int64_t sum5;
  _ref__tuple_1_star_int64_t call_tmp42 = NULL;
  int64_t coerce_tmp16;
  int64_t coerce_tmp17;
  int64_t call_tmp43;
  _ddata_localesSignal coerce_tmp18 = NULL;
  _ref_localesSignal call_tmp44 = NULL;
  _ref_atomicflag call_tmp45 = NULL;
  memory_order default_argorder3;
  chpl_bool T2;
  _ref_atomic_flag call_tmp46 = NULL;
  chpl_bool call_tmp47;
  chpl_bool call_tmp48;
  _ref_atomic_flag call_tmp49 = NULL;
  chpl_bool call_tmp50;
  chpl_bool call_tmp51;
  localesSignal delete_tmp = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp52 = NULL;
  c_void_ptr call_tmp53;
  local_memory_order_relaxed = memory_order_relaxed;
  local__str_literal_987 = _str_literal_987;
  local_numLocales = numLocales;
  local_memory_order_seq_cst = memory_order_seq_cst;
  call_tmp = (locIdx == INT64(0));
  if (call_tmp) {
    T = UINT8(true);
    ret = flags;
    _ic__F0_this = ret;
    this8 = ret;
    this9 = ret;
    chpl_check_nil(this9, INT64(430), INT64(24));
    call_tmp3 = &((this9)->blk);
    coerce_tmp2 = *(*(call_tmp3) + INT64(0));
    this10 = ret;
    this11 = ret;
    chpl_check_nil(this11, INT64(430), INT64(24));
    call_tmp7 = &((this11)->blk);
    coerce_tmp4 = *(*(call_tmp7) + INT64(0));
    this12 = ret;
    call_tmp18 = (local_numLocales - INT64(1));
    while (T) {
      default_argorder = local_memory_order_seq_cst;
      atomic_fence(default_argorder);
      count = INT64(0);
      chpl_check_nil(this8, INT64(430), INT64(24));
      coerce_tmp = (this8)->dom;
      chpl_check_nil(coerce_tmp, INT64(430), INT64(24));
      call_tmp2 = dsiLow(coerce_tmp);
      sum = INT64(0);
      call_tmp4 = (call_tmp2 * coerce_tmp2);
      sum += call_tmp4;
      chpl_check_nil(this10, INT64(430), INT64(24));
      coerce_tmp3 = (this10)->dom;
      chpl_check_nil(coerce_tmp3, INT64(430), INT64(24));
      call_tmp5 = dsiLow(coerce_tmp3);
      call_tmp6 = (call_tmp5 + INT64(1));
      sum2 = INT64(0);
      call_tmp8 = (call_tmp6 * coerce_tmp4);
      sum2 += call_tmp8;
      call_tmp9 = (sum2 - sum);
      chpl_check_nil(this12, INT64(430), INT64(24));
      coerce_tmp5 = (this12)->dom;
      chpl_check_nil(coerce_tmp5, INT64(430), INT64(24));
      call_tmp10 = dsiNumIndices(coerce_tmp5);
      call_tmp11 = (call_tmp10 - INT64(1));
      call_tmp12 = (call_tmp11 * call_tmp9);
      call_tmp13 = (sum + call_tmp12);
      _ic__F1_high = call_tmp13;
      _ic__F2_stride = call_tmp9;
      call_tmp14 = (call_tmp9 == INT64(0));
      if (call_tmp14) {
        chpl_error("the step argument of the 'by' operator is zero", INT64(430), INT32(24));
      }
      chpl_checkIfRangeIterWillOverflow(sum, call_tmp13, call_tmp9, sum, call_tmp13, UINT8(true));
      this13 = _ic__F0_this;
      chpl_check_nil(this13, INT64(430), INT64(24));
      coerce_tmp6 = (this13)->shiftedData;
      for (i = sum; ((i <= _ic__F1_high)); i += _ic__F2_stride) {
        call_tmp15 = (coerce_tmp6 + i);
        coerce_tmp7 = *(call_tmp15);
        call_tmp16 = ((object)(coerce_tmp7));
        call_tmp17 = (call_tmp16 != nil);
        if (call_tmp17) {
          count += INT64(1);
        }
      }
      call_tmp19 = (count == call_tmp18);
      if (call_tmp19) {
        goto _breakLabel;
      }
      chpl_task_yield();
      T = UINT8(true);
    }
    _breakLabel:;
    ret2 = flags;
    _ic__F0_this2 = ret2;
    this14 = ret2;
    chpl_check_nil(this14, INT64(438), INT64(24));
    coerce_tmp8 = (this14)->dom;
    chpl_check_nil(coerce_tmp8, INT64(438), INT64(24));
    call_tmp20 = dsiLow(coerce_tmp8);
    this15 = ret2;
    sum3 = INT64(0);
    chpl_check_nil(this15, INT64(438), INT64(24));
    call_tmp21 = &((this15)->blk);
    coerce_tmp9 = *(*(call_tmp21) + INT64(0));
    call_tmp22 = (call_tmp20 * coerce_tmp9);
    sum3 += call_tmp22;
    this16 = ret2;
    chpl_check_nil(this16, INT64(438), INT64(24));
    coerce_tmp10 = (this16)->dom;
    chpl_check_nil(coerce_tmp10, INT64(438), INT64(24));
    call_tmp23 = dsiLow(coerce_tmp10);
    call_tmp24 = (call_tmp23 + INT64(1));
    this17 = ret2;
    sum4 = INT64(0);
    chpl_check_nil(this17, INT64(438), INT64(24));
    call_tmp25 = &((this17)->blk);
    coerce_tmp11 = *(*(call_tmp25) + INT64(0));
    call_tmp26 = (call_tmp24 * coerce_tmp11);
    sum4 += call_tmp26;
    call_tmp27 = (sum4 - sum3);
    this18 = ret2;
    chpl_check_nil(this18, INT64(438), INT64(24));
    coerce_tmp12 = (this18)->dom;
    chpl_check_nil(coerce_tmp12, INT64(438), INT64(24));
    call_tmp28 = dsiNumIndices(coerce_tmp12);
    call_tmp29 = (call_tmp28 - INT64(1));
    call_tmp30 = (call_tmp29 * call_tmp27);
    call_tmp31 = (sum3 + call_tmp30);
    _ic__F1_high2 = call_tmp31;
    _ic__F2_stride2 = call_tmp27;
    call_tmp32 = (call_tmp27 == INT64(0));
    if (call_tmp32) {
      chpl_error("the step argument of the 'by' operator is zero", INT64(438), INT32(24));
    }
    chpl_checkIfRangeIterWillOverflow(sum3, call_tmp31, call_tmp27, sum3, call_tmp31, UINT8(true));
    for (i2 = sum3; ((i2 <= _ic__F1_high2)); i2 += _ic__F2_stride2) {
      this19 = _ic__F0_this2;
      chpl_check_nil(this19, INT64(438), INT64(24));
      coerce_tmp13 = (this19)->shiftedData;
      call_tmp33 = (coerce_tmp13 + i2);
      coerce_tmp14 = *(call_tmp33);
      chpl_check_nil(coerce_tmp14, INT64(439), INT64(24));
      call_tmp34 = &((coerce_tmp14)->s);
      default_argorder2 = local_memory_order_seq_cst;
      chpl_check_nil(call_tmp34, INT64(439), INT64(24));
      call_tmp35 = &((call_tmp34)->_v);
      atomic_flag_test_and_set_explicit(call_tmp35, default_argorder2);
    }
  } else {
    call_tmp36 = sizeof(chpl_localesSignal_object);
    cast_tmp = chpl_here_alloc(call_tmp36, INT16(24));
    this20 = ((localesSignal)(cast_tmp));
    ((object)(this20))->chpl__cid = chpl__cid_localesSignal;
    chpl_check_nil(this20, INT64(441), INT64(24));
    (this20)->s = _init_class_tmp_;
    ret3 = type_tmp;
    _ref_tmp_ = &ret3;
    atomic_init_flag(_ref_tmp_, UINT8(false));
    (&this21)->_v = ret3;
    wrap_call_tmp = _construct_atomicflag(ret3, &this21);
    chpl_check_nil(this20, INT64(441), INT64(24));
    (this20)->s = wrap_call_tmp;
    wrap_call_tmp2 = _construct_localesSignal(&wrap_call_tmp, this20);
    f = wrap_call_tmp2;
    *(this22 + INT64(0)) = locIdx;
    *(i3 + INT64(0)) = *(this22 + INT64(0));
    ret4 = flags;
    call_tmp37 = ret4;
    chpl_check_nil(call_tmp37, INT64(443), INT64(24));
    coerce_tmp15 = (call_tmp37)->dom;
    chpl_check_nil(coerce_tmp15, INT64(443), INT64(24));
    call_tmp38 = dsiMember(coerce_tmp15, &this22);
    call_tmp39 = (! call_tmp38);
    if (call_tmp39) {
      ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
      _stringify_index(&this22, ret_to_arg_ref_tmp_);
      call_tmp40 = _autoCopy_tmp_;
      ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
      chpl___PLUS_(&local__str_literal_987, &_autoCopy_tmp_, ret_to_arg_ref_tmp_2);
      call_tmp41 = _autoCopy_tmp_2;
      halt(&_autoCopy_tmp_2, INT64(443), INT32(24));
      _ref_tmp_2 = &call_tmp40;
      chpl___TILDE_string(_ref_tmp_2);
      _ref_tmp_3 = &call_tmp41;
      chpl___TILDE_string(_ref_tmp_3);
    }
    sum5 = INT64(0);
    chpl_check_nil(call_tmp37, INT64(443), INT64(24));
    call_tmp42 = &((call_tmp37)->blk);
    coerce_tmp16 = *(i3 + INT64(0));
    coerce_tmp17 = *(*(call_tmp42) + INT64(0));
    call_tmp43 = (coerce_tmp16 * coerce_tmp17);
    sum5 += call_tmp43;
    chpl_check_nil(call_tmp37, INT64(443), INT64(24));
    coerce_tmp18 = (call_tmp37)->shiftedData;
    call_tmp44 = (coerce_tmp18 + sum5);
    *(call_tmp44) = wrap_call_tmp2;
    chpl_check_nil(f, INT64(445), INT64(24));
    call_tmp45 = &((f)->s);
    default_argorder3 = local_memory_order_seq_cst;
    chpl_check_nil(call_tmp45, INT64(445), INT64(24));
    call_tmp46 = &((call_tmp45)->_v);
    call_tmp47 = atomic_load_explicit_flag(call_tmp46, local_memory_order_relaxed);
    call_tmp48 = (call_tmp47 != UINT8(true));
    T2 = call_tmp48;
    while (T2) {
      chpl_task_yield();
      chpl_check_nil(call_tmp45, INT64(445), INT64(24));
      call_tmp49 = &((call_tmp45)->_v);
      call_tmp50 = atomic_load_explicit_flag(call_tmp49, local_memory_order_relaxed);
      call_tmp51 = (call_tmp50 != UINT8(true));
      T2 = call_tmp51;
    }
    atomic_thread_fence(default_argorder3);
    delete_tmp = f;
    chpl_check_nil(delete_tmp, INT64(447), INT64(24));
    _field_destructor_tmp_ = &((delete_tmp)->s);
    chpl_check_nil(_field_destructor_tmp_, INT64(447), INT64(24));
    call_tmp52 = &((_field_destructor_tmp_)->_v);
    atomic_destroy_flag(call_tmp52);
    call_tmp53 = ((void*)(delete_tmp));
    chpl_here_free(call_tmp53);
  }
  return;
}

/* ChapelLocale.chpl:461 */
 void chpl_init_rootLocale(void) {
  RootLocale call_tmp = NULL;
  locale call_tmp2 = NULL;
  RootLocale _formal_type_tmp_ = NULL;
  RootLocale T = NULL;
  object call_tmp3 = NULL;
  chpl_bool call_tmp4;
  RootLocale call_tmp5 = NULL;
  RootLocale call_tmp6 = NULL;
  call_tmp = RootLocale2();
  call_tmp2 = ((locale)(call_tmp));
  origRootLocale = call_tmp2;
  call_tmp3 = ((object)(origRootLocale));
  call_tmp4 = (call_tmp3 != nil);
  if (call_tmp4) {
    call_tmp5 = ((((object)(origRootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(origRootLocale))):(((RootLocale)(NULL)));
    T = call_tmp5;
  } else {
    call_tmp6 = ((RootLocale)(nil));
    T = call_tmp6;
  }
  chpl_check_nil(T, INT64(463), INT64(24));
  setup2(T);
  return;
}

/* ChapelLocale.chpl:471 */
 void chpl_rootLocaleInitPrivate(int64_t locIdx) {
  int64_t local_numLocales;
  chpl_bool call_tmp;
  RootLocale newRootLocale = NULL;
  DefaultRectangularArr_locale_1_int64_t_F origLocales = NULL;
  RootLocale _formal_type_tmp_ = NULL;
  RootLocale T = NULL;
  object call_tmp2 = NULL;
  chpl_bool call_tmp3;
  RootLocale call_tmp4 = NULL;
  RootLocale call_tmp5 = NULL;
  _ddata_locale origRL = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp6 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
  _ddata_locale coerce_tmp = NULL;
  _ddata_locale newRL = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp7 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp8 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F ret2 = NULL;
  _ddata_locale coerce_tmp2 = NULL;
  _ref_locale call_tmp9 = NULL;
  _ref_locale call_tmp10 = NULL;
  uint64_t call_tmp11;
  locale call_tmp12 = NULL;
  chpl_bool call_tmp13;
  RootLocale _formal_type_tmp_2 = NULL;
  RootLocale T2 = NULL;
  object call_tmp14 = NULL;
  chpl_bool call_tmp15;
  RootLocale call_tmp16 = NULL;
  RootLocale call_tmp17 = NULL;
  local_numLocales = numLocales;
  rootLocale = origRootLocale;
  call_tmp = (locIdx != INT64(0));
  if (call_tmp) {
    newRootLocale = RootLocale2();
    call_tmp2 = ((object)(origRootLocale));
    call_tmp3 = (call_tmp2 != nil);
    if (call_tmp3) {
      call_tmp4 = ((((object)(origRootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(origRootLocale))):(((RootLocale)(NULL)));
      T = call_tmp4;
    } else {
      call_tmp5 = ((RootLocale)(nil));
      T = call_tmp5;
    }
    chpl_check_nil(T, INT64(483), INT64(24));
    origLocales = getDefaultLocaleArray2(T);
    ret = origLocales;
    call_tmp6 = ret;
    chpl_check_nil(call_tmp6, INT64(484), INT64(24));
    coerce_tmp = (call_tmp6)->shiftedData;
    origRL = coerce_tmp;
    ret_to_arg_ref_tmp_ = &call_tmp7;
    chpl_check_nil(newRootLocale, INT64(485), INT64(24));
    getDefaultLocaleArray(newRootLocale, ret_to_arg_ref_tmp_);
    ret2 = call_tmp7;
    call_tmp8 = ret2;
    chpl_check_nil(call_tmp8, INT64(485), INT64(24));
    coerce_tmp2 = (call_tmp8)->shiftedData;
    newRL = coerce_tmp2;
    call_tmp9 = (newRL + INT64(0));
    call_tmp10 = (origRL + INT64(0));
    call_tmp11 = ((uint64_t)(local_numLocales));
    chpl_gen_comm_get(((void*)(call_tmp9)), INT64(0), call_tmp10, (sizeof(locale) * call_tmp11), -1, INT64(489), INT32(24));
    call_tmp12 = ((locale)(newRootLocale));
    rootLocale = call_tmp12;
    chpl__autoDestroy3(call_tmp7);
  }
  call_tmp13 = (locIdx != INT64(0));
  if (call_tmp13) {
    call_tmp14 = ((object)(rootLocale));
    call_tmp15 = (call_tmp14 != nil);
    if (call_tmp15) {
      call_tmp16 = ((((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(rootLocale))):(((RootLocale)(NULL)));
      T2 = call_tmp16;
    } else {
      call_tmp17 = ((RootLocale)(nil));
      T2 = call_tmp17;
    }
    chpl_check_nil(T2, INT64(500), INT64(24));
    Locales = getDefaultLocaleArray2(T2);
  }
  return;
}

/* ChapelLocale.chpl:520 */
void chpl_getLocaleID(_ref_chpl_localeID_t localeID, int64_t _ln, int32_t _fn) {
  int32_t local_c_sublocid_any;
  chpl_localeID_t _autoCopy_tmp_;
  local_c_sublocid_any = c_sublocid_any;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  *(localeID) = _autoCopy_tmp_;
  return;
}

/* ChapelLocale.chpl:545 */
 locale chpl_localeID_to_locale(chpl_localeID_t* const id2) {
  locale local_dummyLocale = NULL;
  locale ret = NULL;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  AbstractRootLocale _formal_type_tmp_ = NULL;
  AbstractRootLocale T = NULL;
  object call_tmp3 = NULL;
  chpl_bool call_tmp4;
  AbstractRootLocale call_tmp5 = NULL;
  AbstractRootLocale call_tmp6 = NULL;
  locale call_tmp7 = NULL;
  int32_t _virtual_method_tmp_;
  local_dummyLocale = dummyLocale;
  call_tmp = ((object)(rootLocale));
  call_tmp2 = (call_tmp != nil);
  if (call_tmp2) {
    call_tmp3 = ((object)(rootLocale));
    call_tmp4 = (call_tmp3 != nil);
    if (call_tmp4) {
      call_tmp5 = (((((object)(rootLocale))->chpl__cid == chpl__cid_AbstractRootLocale) || (((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale)))?(((AbstractRootLocale)(rootLocale))):(((AbstractRootLocale)(NULL)));
      T = call_tmp5;
    } else {
      call_tmp6 = ((AbstractRootLocale)(nil));
      T = call_tmp6;
    }
    chpl_check_nil(T, INT64(547), INT64(24));
    _virtual_method_tmp_ = ((object)(T))->chpl__cid;
    call_tmp7 = ((locale(*)(AbstractRootLocale, chpl_localeID_t* const))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(3))])(T, id2);
    ret = call_tmp7;
    goto _end_chpl_localeID_to_locale;
  } else {
    ret = local_dummyLocale;
    goto _end_chpl_localeID_to_locale;
  }
  _end_chpl_localeID_to_locale:;
  return ret;
}

/* ChapelLocale.chpl:611 */
void chpl_taskRunningCntInc(int64_t _ln, int32_t _fn) {
  memory_order local_memory_order_relaxed;
  int32_t local_c_sublocid_any;
  locale call_tmp = NULL;
  chpl_localeID_t _autoCopy_tmp_;
  locale call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_relaxed = memory_order_relaxed;
  local_c_sublocid_any = c_sublocid_any;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp2 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp = call_tmp2;
  chpl_check_nil(call_tmp, INT64(612), INT64(24));
  call_tmp3 = &((call_tmp)->runningTaskCounter);
  chpl_check_nil(call_tmp3, INT64(612), INT64(24));
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), local_memory_order_relaxed);
  return;
}

/* ChapelLocale.chpl:618 */
void chpl_taskRunningCntDec(int64_t _ln, int32_t _fn) {
  memory_order local_memory_order_relaxed;
  int32_t local_c_sublocid_any;
  locale call_tmp = NULL;
  chpl_localeID_t _autoCopy_tmp_;
  locale call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  _ref_atomic_int_least64_t call_tmp4 = NULL;
  local_memory_order_relaxed = memory_order_relaxed;
  local_c_sublocid_any = c_sublocid_any;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp2 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp = call_tmp2;
  chpl_check_nil(call_tmp, INT64(619), INT64(24));
  call_tmp3 = &((call_tmp)->runningTaskCounter);
  chpl_check_nil(call_tmp3, INT64(619), INT64(24));
  call_tmp4 = &((call_tmp3)->_v);
  atomic_fetch_sub_explicit_int_least64_t(call_tmp4, INT64(1), local_memory_order_relaxed);
  return;
}

