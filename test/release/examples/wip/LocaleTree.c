/* LocaleTree.chpl:25 */
 void chpl__init_LocaleTree(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl_localeTreeRecord this7;
  locale call_tmp = NULL;
  locale call_tmp2 = NULL;
  chpl_localeTreeRecord wrap_call_tmp;
  _ref_chpl_localeTreeRecord ret_to_arg_ref_tmp_ = NULL;
  if (chpl__init_LocaleTree_p) {
    goto _exit_chpl__init_LocaleTree;
  }
  modFormatStr = "%*s\n";
  modStr = "LocaleTree";
  printModuleInit(modFormatStr, modStr, INT64(10));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocaleTree_p = UINT8(true);
  {
    chpl__init_ChapelLocale(INT64(25), INT32(30));
  }
  (&this7)->left = nil;
  (&this7)->right = nil;
  call_tmp = ((locale)(nil));
  (&this7)->left = call_tmp;
  call_tmp2 = ((locale)(nil));
  (&this7)->right = call_tmp2;
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
  _construct_chpl_localeTreeRecord(call_tmp, call_tmp2, &this7, ret_to_arg_ref_tmp_);
  chpl_localeTree = wrap_call_tmp;
  chpl_initLocaleTree();
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleTree:;
  return;
}

/* LocaleTree.chpl:29 */
 void _construct_chpl_localeTreeRecord(locale left, locale right, chpl_localeTreeRecord* const meme, _ref_chpl_localeTreeRecord _retArg) {
  chpl_localeTreeRecord this7;
  this7 = *(meme);
  (&this7)->left = left;
  (&this7)->right = right;
  *(_retArg) = this7;
  return;
}

/* LocaleTree.chpl:35 */
 void chpl_initLocaleTree(void) {
  int64_t local_numLocales;
  DefaultRectangularDom_1_int64_t_F local_LocaleSpace = NULL;
  DefaultRectangularDom_1_int64_t_F ret = NULL;
  _tuple_1_star_int64_t default_argoffset;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
  DefaultRectangularDom_1_int64_t_F this7 = NULL;
  range_int64_t_bounded_F coerce_tmp;
  range_int64_t_bounded_F _ic__F0_this;
  _ref_range_int64_t_bounded_F this8 = NULL;
  int64_t i;
  int64_t ret2;
  int64_t end;
  int64_t ret3;
  locale left = NULL;
  locale type_tmp = NULL;
  locale right = NULL;
  locale type_tmp2 = NULL;
  int64_t child;
  int64_t call_tmp;
  int64_t call_tmp2;
  int64_t call_tmp3;
  chpl_bool call_tmp4;
  locale call_tmp5 = NULL;
  int32_t _virtual_method_tmp_;
  chpl_bool call_tmp6;
  locale call_tmp7 = NULL;
  int32_t _virtual_method_tmp_2;
  int32_t _virtual_method_tmp_3;
  _ref_locale call_tmp8 = NULL;
  _ref_locale call_tmp9 = NULL;
  local_numLocales = numLocales;
  local_LocaleSpace = LocaleSpace;
  ret = local_LocaleSpace;
  ret_to_arg_ref_tmp_ = &default_argoffset;
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_);
  this7 = ret;
  chpl_check_nil(this7, INT64(36), INT64(30));
  _this_tmp_ = &((this7)->ranges);
  coerce_tmp = *(*(_this_tmp_) + INT64(0));
  _ic__F0_this = coerce_tmp;
  this8 = &_ic__F0_this;
  chpl_check_nil(this8, INT64(36), INT64(30));
  checkIfIterWillOverflow(this8, UINT8(true));
  ret2 = (&_ic__F0_this)->_low;
  ret3 = (&_ic__F0_this)->_high;
  end = ret3;
  type_tmp = nil;
  type_tmp2 = nil;
  chpl_check_nil(rootLocale, INT64(46), INT64(30));
  _virtual_method_tmp_3 = ((object)(rootLocale))->chpl__cid;
  for (i = ret2; ((i <= end)); i += INT64(1)) {
    left = type_tmp;
    right = type_tmp2;
    call_tmp = (i + INT64(1));
    call_tmp2 = (call_tmp * INT64(2));
    call_tmp3 = (call_tmp2 - INT64(1));
    child = call_tmp3;
    call_tmp4 = (call_tmp3 < local_numLocales);
    if (call_tmp4) {
      chpl_check_nil(rootLocale, INT64(41), INT64(30));
      _virtual_method_tmp_ = ((object)(rootLocale))->chpl__cid;
      call_tmp5 = ((locale(*)(locale, int64_t))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(1))])(rootLocale, call_tmp3);
      left = call_tmp5;
      child += INT64(1);
      call_tmp6 = (child < local_numLocales);
      if (call_tmp6) {
        chpl_check_nil(rootLocale, INT64(44), INT64(30));
        _virtual_method_tmp_2 = ((object)(rootLocale))->chpl__cid;
        call_tmp7 = ((locale(*)(locale, int64_t))chpl_vmtable[((INT64(4) * _virtual_method_tmp_2) + INT64(1))])(rootLocale, child);
        right = call_tmp7;
      }
    }
    ((locale(*)(locale, int64_t))chpl_vmtable[((INT64(4) * _virtual_method_tmp_3) + INT64(1))])(rootLocale, i);
    call_tmp8 = &((&chpl_localeTree)->left);
    *(call_tmp8) = left;
    call_tmp9 = &((&chpl_localeTree)->right);
    *(call_tmp9) = right;
  }
  return;
}

