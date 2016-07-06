/* ChapelDistribution.chpl:20 */
 void chpl__init_ChapelDistribution(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelDistribution_p) {
    goto _exit_chpl__init_ChapelDistribution;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelDistribution";
  printModuleInit(modFormatStr, modStr, INT64(18));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelDistribution_p = UINT8(true);
  {
    chpl__init_List(INT64(20), INT32(28));
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelDistribution:;
  return;
}

/* ChapelDistribution.chpl:30 */
 BaseDist _construct_BaseDist(atomic_refcnt* const _distCnt, list_BaseDom_chpl* const _doms, atomicflag* const _domsLock, BaseDist meme) {
  BaseDist this7 = NULL;
  object T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(30), INT64(28));
  T = &((this7)->super);
  _construct_object(T);
  chpl_check_nil(this7, INT64(34), INT64(28));
  (this7)->_distCnt = *(_distCnt);
  chpl_check_nil(this7, INT64(35), INT64(28));
  (this7)->_doms = *(_doms);
  chpl_check_nil(this7, INT64(36), INT64(28));
  (this7)->_domsLock = *(_domsLock);
  return this7;
}

/* ChapelDistribution.chpl:30 */
 void chpl__auto_destroy_BaseDist(BaseDist this7) {
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  chpl_check_nil(this7, INT64(36), INT64(28));
  _field_destructor_tmp_ = &((this7)->_domsLock);
  chpl_check_nil(_field_destructor_tmp_, INT64(36), INT64(28));
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  chpl_check_nil(this7, INT64(34), INT64(28));
  _field_destructor_tmp_2 = &((this7)->_distCnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(34), INT64(28));
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  chpl_check_nil(_field_destructor_tmp_3, INT64(34), INT64(28));
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp2);
  return;
}

/* ChapelDistribution.chpl:39 */
 int64_t destroyDist(BaseDist this7) {
  string local__str_literal_1483;
  memory_order local_memory_order_seq_cst;
  _ref_atomic_refcnt call_tmp = NULL;
  _ref_atomic_int64 call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp3 = NULL;
  int64_t call_tmp4;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  local__str_literal_1483 = _str_literal_1483;
  local_memory_order_seq_cst = memory_order_seq_cst;
  compilerAssert();
  compilerAssert();
  chpl_check_nil(this7, INT64(41), INT64(28));
  call_tmp = &((this7)->_distCnt);
  chpl_check_nil(call_tmp, INT64(41), INT64(28));
  call_tmp2 = &((call_tmp)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp2, INT64(41), INT64(28));
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
  call_tmp5 = (call_tmp4 - INT64(1));
  call_tmp6 = (call_tmp5 < INT64(0));
  if (call_tmp6) {
    halt(&local__str_literal_1483, INT64(41), INT32(28));
  }
  return call_tmp5;
}

/* ChapelDistribution.chpl:109 */
 void dsiDestroyDistClass(BaseDist this7) {
  return;
}

/* ChapelDistribution.chpl:118 */
 BaseDom _construct_BaseDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, BaseDom meme) {
  BaseDom this7 = NULL;
  object T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(118), INT64(28));
  T = &((this7)->super);
  _construct_object(T);
  chpl_check_nil(this7, INT64(122), INT64(28));
  (this7)->_domCnt = *(_domCnt);
  chpl_check_nil(this7, INT64(123), INT64(28));
  (this7)->_arrs = *(_arrs);
  chpl_check_nil(this7, INT64(124), INT64(28));
  (this7)->_arrsLock = *(_arrsLock);
  return this7;
}

/* ChapelDistribution.chpl:118 */
 void chpl__auto_destroy_BaseDom(BaseDom this7) {
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  chpl_check_nil(this7, INT64(124), INT64(28));
  _field_destructor_tmp_ = &((this7)->_arrsLock);
  chpl_check_nil(_field_destructor_tmp_, INT64(124), INT64(28));
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  chpl_check_nil(this7, INT64(122), INT64(28));
  _field_destructor_tmp_2 = &((this7)->_domCnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(122), INT64(28));
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  chpl_check_nil(_field_destructor_tmp_3, INT64(122), INT64(28));
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp2);
  return;
}

/* ChapelDistribution.chpl:126 */
 BaseDist dsiMyDist(BaseDom this7) {
  string local__str_literal_1485;
  BaseDist ret = NULL;
  local__str_literal_1485 = _str_literal_1485;
  halt(&local__str_literal_1485, INT64(127), INT32(28));
  ret = nil;
  return ret;
}

/* ChapelDistribution.chpl:132 */
 int64_t destroyDom(BaseDom this7) {
  string local__str_literal_1491;
  memory_order local_memory_order_seq_cst;
  int64_t cnt;
  _ref_atomic_refcnt call_tmp = NULL;
  _ref_atomic_int64 call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp3 = NULL;
  int64_t call_tmp4;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  chpl_bool call_tmp7;
  chpl_bool T;
  chpl_bool call_tmp8;
  int32_t _virtual_method_tmp_;
  BaseDist dist2 = NULL;
  BaseDist call_tmp9 = NULL;
  chpl_bool T2;
  _ref_atomicflag call_tmp10 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp11 = NULL;
  chpl_bool call_tmp12;
  _ref_atomicflag call_tmp13 = NULL;
  memory_order default_argorder3;
  _ref_atomic_flag call_tmp14 = NULL;
  chpl_bool call_tmp15;
  _ref_list_BaseDom call_tmp16 = NULL;
  _ref_atomicflag call_tmp17 = NULL;
  memory_order default_argorder4;
  _ref_atomic_flag call_tmp18 = NULL;
  int64_t call_tmp19;
  chpl_bool call_tmp20;
  BaseDist delete_tmp = NULL;
  chpl_bool _dynamic_dispatch_tmp_;
  DefaultDist _cast_tmp_ = NULL;
  BaseDist _parent_destructor_tmp_ = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp21 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp22 = NULL;
  _ref_atomicflag _field_destructor_tmp_4 = NULL;
  _ref_atomic_flag call_tmp23 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_5 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_6 = NULL;
  _ref_atomic_int_least64_t call_tmp24 = NULL;
  c_void_ptr call_tmp25;
  local__str_literal_1491 = _str_literal_1491;
  local_memory_order_seq_cst = memory_order_seq_cst;
  compilerAssert();
  compilerAssert();
  chpl_check_nil(this7, INT64(134), INT64(28));
  call_tmp = &((this7)->_domCnt);
  chpl_check_nil(call_tmp, INT64(134), INT64(28));
  call_tmp2 = &((call_tmp)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp2, INT64(134), INT64(28));
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
  call_tmp5 = (call_tmp4 - INT64(1));
  call_tmp6 = (call_tmp5 < INT64(0));
  if (call_tmp6) {
    halt(&local__str_literal_1491, INT64(134), INT32(28));
  }
  cnt = call_tmp5;
  call_tmp7 = (call_tmp5 == INT64(0));
  if (call_tmp7) {
    chpl_check_nil(this7, INT64(135), INT64(28));
    _virtual_method_tmp_ = ((object)(this7))->chpl__cid;
    call_tmp8 = ((chpl_bool(*)(BaseDom))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(1))])(this7);
    T = call_tmp8;
  } else {
    T = UINT8(false);
  }
  if (T) {
    chpl_check_nil(this7, INT64(136), INT64(28));
    call_tmp9 = dsiMyDist(this7);
    dist2 = call_tmp9;
    chpl_check_nil(dist2, INT64(138), INT64(28));
    call_tmp10 = &((dist2)->_domsLock);
    default_argorder2 = local_memory_order_seq_cst;
    chpl_check_nil(call_tmp10, INT64(138), INT64(28));
    call_tmp11 = &((call_tmp10)->_v);
    call_tmp12 = atomic_flag_test_and_set_explicit(call_tmp11, default_argorder2);
    T2 = call_tmp12;
    while (T2) {
      chpl_task_yield();
      chpl_check_nil(dist2, INT64(138), INT64(28));
      call_tmp13 = &((dist2)->_domsLock);
      default_argorder3 = local_memory_order_seq_cst;
      chpl_check_nil(call_tmp13, INT64(138), INT64(28));
      call_tmp14 = &((call_tmp13)->_v);
      call_tmp15 = atomic_flag_test_and_set_explicit(call_tmp14, default_argorder3);
      T2 = call_tmp15;
    }
    chpl_check_nil(dist2, INT64(138), INT64(28));
    call_tmp16 = &((dist2)->_doms);
    chpl_check_nil(call_tmp16, INT64(138), INT64(28));
    remove_chpl2(call_tmp16, this7);
    chpl_check_nil(dist2, INT64(138), INT64(28));
    call_tmp17 = &((dist2)->_domsLock);
    default_argorder4 = local_memory_order_seq_cst;
    chpl_check_nil(call_tmp17, INT64(138), INT64(28));
    call_tmp18 = &((call_tmp17)->_v);
    atomic_flag_clear_explicit(call_tmp18, default_argorder4);
    chpl_check_nil(dist2, INT64(139), INT64(28));
    call_tmp19 = destroyDist(dist2);
    call_tmp20 = (call_tmp19 == INT64(0));
    if (call_tmp20) {
      delete_tmp = dist2;
      chpl_check_nil(dist2, INT64(141), INT64(28));
      _dynamic_dispatch_tmp_ = (((object)(dist2))->chpl__cid == chpl__cid_DefaultDist);
      if (_dynamic_dispatch_tmp_) {
        _cast_tmp_ = ((DefaultDist)(dist2));
        _parent_destructor_tmp_ = ((BaseDist)(_cast_tmp_));
        chpl_check_nil(_parent_destructor_tmp_, INT64(141), INT64(28));
        _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_domsLock);
        chpl_check_nil(_field_destructor_tmp_, INT64(141), INT64(28));
        call_tmp21 = &((_field_destructor_tmp_)->_v);
        atomic_destroy_flag(call_tmp21);
        chpl_check_nil(_parent_destructor_tmp_, INT64(141), INT64(28));
        _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_distCnt);
        chpl_check_nil(_field_destructor_tmp_2, INT64(141), INT64(28));
        _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
        chpl_check_nil(_field_destructor_tmp_3, INT64(141), INT64(28));
        call_tmp22 = &((_field_destructor_tmp_3)->_v);
        atomic_destroy_int_least64_t(call_tmp22);
      } else {
        chpl_check_nil(delete_tmp, INT64(141), INT64(28));
        _field_destructor_tmp_4 = &((delete_tmp)->_domsLock);
        chpl_check_nil(_field_destructor_tmp_4, INT64(141), INT64(28));
        call_tmp23 = &((_field_destructor_tmp_4)->_v);
        atomic_destroy_flag(call_tmp23);
        chpl_check_nil(delete_tmp, INT64(141), INT64(28));
        _field_destructor_tmp_5 = &((delete_tmp)->_distCnt);
        chpl_check_nil(_field_destructor_tmp_5, INT64(141), INT64(28));
        _field_destructor_tmp_6 = &((_field_destructor_tmp_5)->_cnt);
        chpl_check_nil(_field_destructor_tmp_6, INT64(141), INT64(28));
        call_tmp24 = &((_field_destructor_tmp_6)->_v);
        atomic_destroy_int_least64_t(call_tmp24);
      }
      call_tmp25 = ((void*)(delete_tmp));
      chpl_here_free(call_tmp25);
    }
  }
  return cnt;
}

/* ChapelDistribution.chpl:213 */
 chpl_bool dsiLinksDistribution(BaseDom this7) {
  return UINT8(true);
}

/* ChapelDistribution.chpl:218 */
 BaseRectangularDom _construct_BaseRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, BaseRectangularDom meme) {
  BaseRectangularDom this7 = NULL;
  BaseDom T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(218), INT64(28));
  T = &((this7)->super);
  _construct_BaseDom(_domCnt, _arrs, _arrsLock, T);
  return meme;
}

/* ChapelDistribution.chpl:218 */
 void chpl__auto_destroy_BaseRectangularDom(BaseRectangularDom this7) {
  BaseDom _parent_destructor_tmp_ = NULL;
  _ref_atomicflag _field_destructor_tmp_ = NULL;
  _ref_atomic_flag call_tmp = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
  _ref_atomic_int_least64_t call_tmp2 = NULL;
  _parent_destructor_tmp_ = ((BaseDom)(this7));
  chpl_check_nil(_parent_destructor_tmp_, INT64(218), INT64(28));
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrsLock);
  chpl_check_nil(_field_destructor_tmp_, INT64(218), INT64(28));
  call_tmp = &((_field_destructor_tmp_)->_v);
  atomic_destroy_flag(call_tmp);
  chpl_check_nil(_parent_destructor_tmp_, INT64(218), INT64(28));
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_domCnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(218), INT64(28));
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
  chpl_check_nil(_field_destructor_tmp_3, INT64(218), INT64(28));
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
  atomic_destroy_int_least64_t(call_tmp2);
  return;
}

/* ChapelDistribution.chpl:270 */
 BaseArr _construct_BaseArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, BaseArr meme) {
  BaseArr this7 = NULL;
  object T = NULL;
  this7 = meme;
  chpl_check_nil(this7, INT64(270), INT64(28));
  T = &((this7)->super);
  _construct_object(T);
  chpl_check_nil(this7, INT64(274), INT64(28));
  (this7)->_arrCnt = *(_arrCnt);
  chpl_check_nil(this7, INT64(275), INT64(28));
  (this7)->_arrAlias = _arrAlias;
  return this7;
}

/* ChapelDistribution.chpl:270 */
 void chpl__auto_destroy_BaseArr(BaseArr this7) {
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp = NULL;
  chpl_check_nil(this7, INT64(274), INT64(28));
  _field_destructor_tmp_ = &((this7)->_arrCnt);
  chpl_check_nil(_field_destructor_tmp_, INT64(274), INT64(28));
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
  chpl_check_nil(_field_destructor_tmp_2, INT64(274), INT64(28));
  call_tmp = &((_field_destructor_tmp_2)->_v);
  atomic_destroy_int_least64_t(call_tmp);
  return;
}

/* ChapelDistribution.chpl:279 */
 BaseDom dsiGetBaseDom(BaseArr this7) {
  string local__str_literal_1497;
  BaseDom ret = NULL;
  local__str_literal_1497 = _str_literal_1497;
  halt(&local__str_literal_1497, INT64(280), INT32(28));
  ret = nil;
  return ret;
}

/* ChapelDistribution.chpl:285 */
 int64_t destroyArr(BaseArr this7) {
  string local__str_literal_1520;
  memory_order local_memory_order_seq_cst;
  int64_t cnt;
  _ref_atomic_refcnt call_tmp = NULL;
  _ref_atomic_int64 call_tmp2 = NULL;
  memory_order default_argorder;
  _ref_atomic_int_least64_t call_tmp3 = NULL;
  int64_t call_tmp4;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  chpl_bool call_tmp7;
  BaseArr coerce_tmp = NULL;
  object call_tmp8 = NULL;
  chpl_bool call_tmp9;
  int64_t call_tmp10;
  BaseArr coerce_tmp2 = NULL;
  chpl_bool call_tmp11;
  BaseArr coerce_tmp3 = NULL;
  chpl_bool _dynamic_dispatch_tmp_;
  DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_ = NULL;
  BaseArr _parent_destructor_tmp_ = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
  _ref_atomic_int_least64_t call_tmp12 = NULL;
  chpl_bool _dynamic_dispatch_tmp_2;
  DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_2 = NULL;
  BaseArr _parent_destructor_tmp_2 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_3 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_4 = NULL;
  _ref_atomic_int_least64_t call_tmp13 = NULL;
  chpl_bool _dynamic_dispatch_tmp_3;
  DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_3 = NULL;
  BaseArr _parent_destructor_tmp_3 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_5 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_6 = NULL;
  _ref_atomic_int_least64_t call_tmp14 = NULL;
  chpl_bool _dynamic_dispatch_tmp_4;
  DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_4 = NULL;
  BaseArr _parent_destructor_tmp_4 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_7 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_8 = NULL;
  _ref_atomic_int_least64_t call_tmp15 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_9 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_10 = NULL;
  _ref_atomic_int_least64_t call_tmp16 = NULL;
  c_void_ptr call_tmp17;
  BaseArr castDeref = NULL;
  int32_t _virtual_method_tmp_;
  chpl_bool call_tmp18;
  BaseDom dom = NULL;
  BaseDom call_tmp19 = NULL;
  int32_t _virtual_method_tmp_2;
  chpl_bool T;
  _ref_atomicflag call_tmp20 = NULL;
  memory_order default_argorder2;
  _ref_atomic_flag call_tmp21 = NULL;
  chpl_bool call_tmp22;
  _ref_atomicflag call_tmp23 = NULL;
  memory_order default_argorder3;
  _ref_atomic_flag call_tmp24 = NULL;
  chpl_bool call_tmp25;
  _ref_list_BaseArr call_tmp26 = NULL;
  _ref_atomicflag call_tmp27 = NULL;
  memory_order default_argorder4;
  _ref_atomic_flag call_tmp28 = NULL;
  int64_t call_tmp29;
  chpl_bool call_tmp30;
  BaseDom delete_tmp = NULL;
  chpl_bool _dynamic_dispatch_tmp_5;
  BaseRectangularDom _cast_tmp_5 = NULL;
  chpl_bool _dynamic_dispatch_tmp_6;
  DefaultRectangularDom_1_int64_t_F _cast_tmp_6 = NULL;
  BaseRectangularDom _parent_destructor_tmp_5 = NULL;
  BaseDom _parent_destructor_tmp_6 = NULL;
  _ref_atomicflag _field_destructor_tmp_11 = NULL;
  _ref_atomic_flag call_tmp31 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_12 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_13 = NULL;
  _ref_atomic_int_least64_t call_tmp32 = NULL;
  chpl_bool _dynamic_dispatch_tmp_7;
  DefaultRectangularDom_1_int64_t_F _cast_tmp_7 = NULL;
  BaseRectangularDom _parent_destructor_tmp_7 = NULL;
  BaseDom _parent_destructor_tmp_8 = NULL;
  _ref_atomicflag _field_destructor_tmp_14 = NULL;
  _ref_atomic_flag call_tmp33 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_15 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_16 = NULL;
  _ref_atomic_int_least64_t call_tmp34 = NULL;
  BaseDom _parent_destructor_tmp_9 = NULL;
  _ref_atomicflag _field_destructor_tmp_17 = NULL;
  _ref_atomic_flag call_tmp35 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_18 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_19 = NULL;
  _ref_atomic_int_least64_t call_tmp36 = NULL;
  chpl_bool _dynamic_dispatch_tmp_8;
  DefaultRectangularDom_1_int64_t_F _cast_tmp_8 = NULL;
  BaseRectangularDom _parent_destructor_tmp_10 = NULL;
  BaseDom _parent_destructor_tmp_11 = NULL;
  _ref_atomicflag _field_destructor_tmp_20 = NULL;
  _ref_atomic_flag call_tmp37 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_21 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_22 = NULL;
  _ref_atomic_int_least64_t call_tmp38 = NULL;
  chpl_bool _dynamic_dispatch_tmp_9;
  DefaultRectangularDom_1_int64_t_F _cast_tmp_9 = NULL;
  BaseRectangularDom _parent_destructor_tmp_12 = NULL;
  BaseDom _parent_destructor_tmp_13 = NULL;
  _ref_atomicflag _field_destructor_tmp_23 = NULL;
  _ref_atomic_flag call_tmp39 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_24 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_25 = NULL;
  _ref_atomic_int_least64_t call_tmp40 = NULL;
  _ref_atomicflag _field_destructor_tmp_26 = NULL;
  _ref_atomic_flag call_tmp41 = NULL;
  _ref_atomic_refcnt _field_destructor_tmp_27 = NULL;
  _ref_atomic_int64 _field_destructor_tmp_28 = NULL;
  _ref_atomic_int_least64_t call_tmp42 = NULL;
  c_void_ptr call_tmp43;
  local__str_literal_1520 = _str_literal_1520;
  local_memory_order_seq_cst = memory_order_seq_cst;
  compilerAssert();
  compilerAssert();
  chpl_check_nil(this7, INT64(287), INT64(28));
  call_tmp = &((this7)->_arrCnt);
  chpl_check_nil(call_tmp, INT64(287), INT64(28));
  call_tmp2 = &((call_tmp)->_cnt);
  default_argorder = local_memory_order_seq_cst;
  chpl_check_nil(call_tmp2, INT64(287), INT64(28));
  call_tmp3 = &((call_tmp2)->_v);
  call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
  call_tmp5 = (call_tmp4 - INT64(1));
  call_tmp6 = (call_tmp5 < INT64(0));
  if (call_tmp6) {
    halt(&local__str_literal_1520, INT64(287), INT32(28));
  }
  cnt = call_tmp5;
  call_tmp7 = (call_tmp5 == INT64(0));
  if (call_tmp7) {
    chpl_check_nil(this7, INT64(289), INT64(28));
    coerce_tmp = (this7)->_arrAlias;
    call_tmp8 = ((object)(coerce_tmp));
    call_tmp9 = (call_tmp8 != nil);
    if (call_tmp9) {
      chpl_check_nil(this7, INT64(291), INT64(28));
      coerce_tmp2 = (this7)->_arrAlias;
      chpl_check_nil(coerce_tmp2, INT64(291), INT64(28));
      call_tmp10 = destroyArr(coerce_tmp2);
      call_tmp11 = (call_tmp10 == INT64(0));
      if (call_tmp11) {
        chpl_check_nil(this7, INT64(293), INT64(28));
        coerce_tmp3 = (this7)->_arrAlias;
        chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
        _dynamic_dispatch_tmp_ = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
        if (_dynamic_dispatch_tmp_) {
          _cast_tmp_ = ((DefaultRectangularArr_locale_1_int64_t_F)(coerce_tmp3));
          _parent_destructor_tmp_ = ((BaseArr)(_cast_tmp_));
          chpl_check_nil(_parent_destructor_tmp_, INT64(293), INT64(28));
          _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
          chpl_check_nil(_field_destructor_tmp_, INT64(293), INT64(28));
          _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
          chpl_check_nil(_field_destructor_tmp_2, INT64(293), INT64(28));
          call_tmp12 = &((_field_destructor_tmp_2)->_v);
          atomic_destroy_int_least64_t(call_tmp12);
        } else {
          chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
          _dynamic_dispatch_tmp_2 = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
          if (_dynamic_dispatch_tmp_2) {
            _cast_tmp_2 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(coerce_tmp3));
            _parent_destructor_tmp_2 = ((BaseArr)(_cast_tmp_2));
            chpl_check_nil(_parent_destructor_tmp_2, INT64(293), INT64(28));
            _field_destructor_tmp_3 = &((_parent_destructor_tmp_2)->_arrCnt);
            chpl_check_nil(_field_destructor_tmp_3, INT64(293), INT64(28));
            _field_destructor_tmp_4 = &((_field_destructor_tmp_3)->_cnt);
            chpl_check_nil(_field_destructor_tmp_4, INT64(293), INT64(28));
            call_tmp13 = &((_field_destructor_tmp_4)->_v);
            atomic_destroy_int_least64_t(call_tmp13);
          } else {
            chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
            _dynamic_dispatch_tmp_3 = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
            if (_dynamic_dispatch_tmp_3) {
              _cast_tmp_3 = ((DefaultRectangularArr_locale_1_int64_t_F)(coerce_tmp3));
              _parent_destructor_tmp_3 = ((BaseArr)(_cast_tmp_3));
              chpl_check_nil(_parent_destructor_tmp_3, INT64(293), INT64(28));
              _field_destructor_tmp_5 = &((_parent_destructor_tmp_3)->_arrCnt);
              chpl_check_nil(_field_destructor_tmp_5, INT64(293), INT64(28));
              _field_destructor_tmp_6 = &((_field_destructor_tmp_5)->_cnt);
              chpl_check_nil(_field_destructor_tmp_6, INT64(293), INT64(28));
              call_tmp14 = &((_field_destructor_tmp_6)->_v);
              atomic_destroy_int_least64_t(call_tmp14);
            } else {
              chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
              _dynamic_dispatch_tmp_4 = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
              if (_dynamic_dispatch_tmp_4) {
                _cast_tmp_4 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(coerce_tmp3));
                _parent_destructor_tmp_4 = ((BaseArr)(_cast_tmp_4));
                chpl_check_nil(_parent_destructor_tmp_4, INT64(293), INT64(28));
                _field_destructor_tmp_7 = &((_parent_destructor_tmp_4)->_arrCnt);
                chpl_check_nil(_field_destructor_tmp_7, INT64(293), INT64(28));
                _field_destructor_tmp_8 = &((_field_destructor_tmp_7)->_cnt);
                chpl_check_nil(_field_destructor_tmp_8, INT64(293), INT64(28));
                call_tmp15 = &((_field_destructor_tmp_8)->_v);
                atomic_destroy_int_least64_t(call_tmp15);
              } else {
                chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
                _field_destructor_tmp_9 = &((coerce_tmp3)->_arrCnt);
                chpl_check_nil(_field_destructor_tmp_9, INT64(293), INT64(28));
                _field_destructor_tmp_10 = &((_field_destructor_tmp_9)->_cnt);
                chpl_check_nil(_field_destructor_tmp_10, INT64(293), INT64(28));
                call_tmp16 = &((_field_destructor_tmp_10)->_v);
                atomic_destroy_int_least64_t(call_tmp16);
              }
            }
          }
        }
        chpl_check_nil(this7, INT64(293), INT64(28));
        castDeref = (this7)->_arrAlias;
        call_tmp17 = ((void*)(castDeref));
        chpl_here_free(call_tmp17);
      }
    } else {
      chpl_check_nil(this7, INT64(296), INT64(28));
      _virtual_method_tmp_ = ((object)(this7))->chpl__cid;
      ((void(*)(BaseArr))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(3))])(this7);
    }
  }
  call_tmp18 = (call_tmp5 == INT64(0));
  if (call_tmp18) {
    chpl_check_nil(this7, INT64(300), INT64(28));
    _virtual_method_tmp_2 = ((object)(this7))->chpl__cid;
    call_tmp19 = ((BaseDom(*)(BaseArr))chpl_vmtable[((INT64(4) * _virtual_method_tmp_2) + INT64(1))])(this7);
    dom = call_tmp19;
    chpl_check_nil(dom, INT64(302), INT64(28));
    call_tmp20 = &((dom)->_arrsLock);
    default_argorder2 = local_memory_order_seq_cst;
    chpl_check_nil(call_tmp20, INT64(302), INT64(28));
    call_tmp21 = &((call_tmp20)->_v);
    call_tmp22 = atomic_flag_test_and_set_explicit(call_tmp21, default_argorder2);
    T = call_tmp22;
    while (T) {
      chpl_task_yield();
      chpl_check_nil(dom, INT64(302), INT64(28));
      call_tmp23 = &((dom)->_arrsLock);
      default_argorder3 = local_memory_order_seq_cst;
      chpl_check_nil(call_tmp23, INT64(302), INT64(28));
      call_tmp24 = &((call_tmp23)->_v);
      call_tmp25 = atomic_flag_test_and_set_explicit(call_tmp24, default_argorder3);
      T = call_tmp25;
    }
    chpl_check_nil(dom, INT64(302), INT64(28));
    call_tmp26 = &((dom)->_arrs);
    chpl_check_nil(call_tmp26, INT64(302), INT64(28));
    remove_chpl(call_tmp26, this7);
    chpl_check_nil(dom, INT64(302), INT64(28));
    call_tmp27 = &((dom)->_arrsLock);
    default_argorder4 = local_memory_order_seq_cst;
    chpl_check_nil(call_tmp27, INT64(302), INT64(28));
    call_tmp28 = &((call_tmp27)->_v);
    atomic_flag_clear_explicit(call_tmp28, default_argorder4);
    chpl_check_nil(dom, INT64(303), INT64(28));
    call_tmp29 = destroyDom(dom);
    call_tmp30 = (call_tmp29 == INT64(0));
    if (call_tmp30) {
      delete_tmp = dom;
      chpl_check_nil(dom, INT64(305), INT64(28));
      _dynamic_dispatch_tmp_5 = (((object)(dom))->chpl__cid == chpl__cid_BaseRectangularDom);
      if (_dynamic_dispatch_tmp_5) {
        _cast_tmp_5 = ((BaseRectangularDom)(dom));
        chpl_check_nil(_cast_tmp_5, INT64(305), INT64(28));
        _dynamic_dispatch_tmp_6 = (((object)(_cast_tmp_5))->chpl__cid == chpl__cid_DefaultRectangularDom_1_int64_t_F);
        if (_dynamic_dispatch_tmp_6) {
          _cast_tmp_6 = ((DefaultRectangularDom_1_int64_t_F)(_cast_tmp_5));
          _parent_destructor_tmp_5 = ((BaseRectangularDom)(_cast_tmp_6));
          _parent_destructor_tmp_6 = ((BaseDom)(_parent_destructor_tmp_5));
          chpl_check_nil(_parent_destructor_tmp_6, INT64(305), INT64(28));
          _field_destructor_tmp_11 = &((_parent_destructor_tmp_6)->_arrsLock);
          chpl_check_nil(_field_destructor_tmp_11, INT64(305), INT64(28));
          call_tmp31 = &((_field_destructor_tmp_11)->_v);
          atomic_destroy_flag(call_tmp31);
          chpl_check_nil(_parent_destructor_tmp_6, INT64(305), INT64(28));
          _field_destructor_tmp_12 = &((_parent_destructor_tmp_6)->_domCnt);
          chpl_check_nil(_field_destructor_tmp_12, INT64(305), INT64(28));
          _field_destructor_tmp_13 = &((_field_destructor_tmp_12)->_cnt);
          chpl_check_nil(_field_destructor_tmp_13, INT64(305), INT64(28));
          call_tmp32 = &((_field_destructor_tmp_13)->_v);
          atomic_destroy_int_least64_t(call_tmp32);
        } else {
          chpl_check_nil(_cast_tmp_5, INT64(305), INT64(28));
          _dynamic_dispatch_tmp_7 = (((object)(_cast_tmp_5))->chpl__cid == chpl__cid_DefaultRectangularDom_1_int64_t_F);
          if (_dynamic_dispatch_tmp_7) {
            _cast_tmp_7 = ((DefaultRectangularDom_1_int64_t_F)(_cast_tmp_5));
            _parent_destructor_tmp_7 = ((BaseRectangularDom)(_cast_tmp_7));
            _parent_destructor_tmp_8 = ((BaseDom)(_parent_destructor_tmp_7));
            chpl_check_nil(_parent_destructor_tmp_8, INT64(305), INT64(28));
            _field_destructor_tmp_14 = &((_parent_destructor_tmp_8)->_arrsLock);
            chpl_check_nil(_field_destructor_tmp_14, INT64(305), INT64(28));
            call_tmp33 = &((_field_destructor_tmp_14)->_v);
            atomic_destroy_flag(call_tmp33);
            chpl_check_nil(_parent_destructor_tmp_8, INT64(305), INT64(28));
            _field_destructor_tmp_15 = &((_parent_destructor_tmp_8)->_domCnt);
            chpl_check_nil(_field_destructor_tmp_15, INT64(305), INT64(28));
            _field_destructor_tmp_16 = &((_field_destructor_tmp_15)->_cnt);
            chpl_check_nil(_field_destructor_tmp_16, INT64(305), INT64(28));
            call_tmp34 = &((_field_destructor_tmp_16)->_v);
            atomic_destroy_int_least64_t(call_tmp34);
          } else {
            _parent_destructor_tmp_9 = ((BaseDom)(_cast_tmp_5));
            chpl_check_nil(_parent_destructor_tmp_9, INT64(305), INT64(28));
            _field_destructor_tmp_17 = &((_parent_destructor_tmp_9)->_arrsLock);
            chpl_check_nil(_field_destructor_tmp_17, INT64(305), INT64(28));
            call_tmp35 = &((_field_destructor_tmp_17)->_v);
            atomic_destroy_flag(call_tmp35);
            chpl_check_nil(_parent_destructor_tmp_9, INT64(305), INT64(28));
            _field_destructor_tmp_18 = &((_parent_destructor_tmp_9)->_domCnt);
            chpl_check_nil(_field_destructor_tmp_18, INT64(305), INT64(28));
            _field_destructor_tmp_19 = &((_field_destructor_tmp_18)->_cnt);
            chpl_check_nil(_field_destructor_tmp_19, INT64(305), INT64(28));
            call_tmp36 = &((_field_destructor_tmp_19)->_v);
            atomic_destroy_int_least64_t(call_tmp36);
          }
        }
      } else {
        chpl_check_nil(dom, INT64(305), INT64(28));
        _dynamic_dispatch_tmp_8 = (((object)(dom))->chpl__cid == chpl__cid_DefaultRectangularDom_1_int64_t_F);
        if (_dynamic_dispatch_tmp_8) {
          _cast_tmp_8 = ((DefaultRectangularDom_1_int64_t_F)(dom));
          _parent_destructor_tmp_10 = ((BaseRectangularDom)(_cast_tmp_8));
          _parent_destructor_tmp_11 = ((BaseDom)(_parent_destructor_tmp_10));
          chpl_check_nil(_parent_destructor_tmp_11, INT64(305), INT64(28));
          _field_destructor_tmp_20 = &((_parent_destructor_tmp_11)->_arrsLock);
          chpl_check_nil(_field_destructor_tmp_20, INT64(305), INT64(28));
          call_tmp37 = &((_field_destructor_tmp_20)->_v);
          atomic_destroy_flag(call_tmp37);
          chpl_check_nil(_parent_destructor_tmp_11, INT64(305), INT64(28));
          _field_destructor_tmp_21 = &((_parent_destructor_tmp_11)->_domCnt);
          chpl_check_nil(_field_destructor_tmp_21, INT64(305), INT64(28));
          _field_destructor_tmp_22 = &((_field_destructor_tmp_21)->_cnt);
          chpl_check_nil(_field_destructor_tmp_22, INT64(305), INT64(28));
          call_tmp38 = &((_field_destructor_tmp_22)->_v);
          atomic_destroy_int_least64_t(call_tmp38);
        } else {
          chpl_check_nil(dom, INT64(305), INT64(28));
          _dynamic_dispatch_tmp_9 = (((object)(dom))->chpl__cid == chpl__cid_DefaultRectangularDom_1_int64_t_F);
          if (_dynamic_dispatch_tmp_9) {
            _cast_tmp_9 = ((DefaultRectangularDom_1_int64_t_F)(dom));
            _parent_destructor_tmp_12 = ((BaseRectangularDom)(_cast_tmp_9));
            _parent_destructor_tmp_13 = ((BaseDom)(_parent_destructor_tmp_12));
            chpl_check_nil(_parent_destructor_tmp_13, INT64(305), INT64(28));
            _field_destructor_tmp_23 = &((_parent_destructor_tmp_13)->_arrsLock);
            chpl_check_nil(_field_destructor_tmp_23, INT64(305), INT64(28));
            call_tmp39 = &((_field_destructor_tmp_23)->_v);
            atomic_destroy_flag(call_tmp39);
            chpl_check_nil(_parent_destructor_tmp_13, INT64(305), INT64(28));
            _field_destructor_tmp_24 = &((_parent_destructor_tmp_13)->_domCnt);
            chpl_check_nil(_field_destructor_tmp_24, INT64(305), INT64(28));
            _field_destructor_tmp_25 = &((_field_destructor_tmp_24)->_cnt);
            chpl_check_nil(_field_destructor_tmp_25, INT64(305), INT64(28));
            call_tmp40 = &((_field_destructor_tmp_25)->_v);
            atomic_destroy_int_least64_t(call_tmp40);
          } else {
            chpl_check_nil(delete_tmp, INT64(305), INT64(28));
            _field_destructor_tmp_26 = &((delete_tmp)->_arrsLock);
            chpl_check_nil(_field_destructor_tmp_26, INT64(305), INT64(28));
            call_tmp41 = &((_field_destructor_tmp_26)->_v);
            atomic_destroy_flag(call_tmp41);
            chpl_check_nil(delete_tmp, INT64(305), INT64(28));
            _field_destructor_tmp_27 = &((delete_tmp)->_domCnt);
            chpl_check_nil(_field_destructor_tmp_27, INT64(305), INT64(28));
            _field_destructor_tmp_28 = &((_field_destructor_tmp_27)->_cnt);
            chpl_check_nil(_field_destructor_tmp_28, INT64(305), INT64(28));
            call_tmp42 = &((_field_destructor_tmp_28)->_v);
            atomic_destroy_int_least64_t(call_tmp42);
          }
        }
      }
      call_tmp43 = ((void*)(delete_tmp));
      chpl_here_free(call_tmp43);
    }
  }
  return cnt;
}

/* ChapelDistribution.chpl:311 */
 void dsiDestroyData(BaseArr this7) {
  return;
}

/* ChapelDistribution.chpl:313 */
 void dsiReallocate(BaseArr this7, DefaultRectangularDom_1_int64_t_F d) {
  string local__str_literal_1500;
  local__str_literal_1500 = _str_literal_1500;
  halt(&local__str_literal_1500, INT64(314), INT32(28));
  return;
}

/* ChapelDistribution.chpl:317 */
 void dsiPostReallocate(BaseArr this7) {
  return;
}

