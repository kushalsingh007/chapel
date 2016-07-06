/* List.chpl:27 */
 void chpl__init_List(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_List_p) {
    goto _exit_chpl__init_List_chpl;
  }
  modFormatStr_chpl = "%*s\n";
  modStr_chpl = "List";
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(4));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_List_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_List_chpl:;
  return;
}

/* List.chpl:30 */
 listNode_BaseArr_chpl _construct_listNode_chpl(BaseArr data_chpl, listNode_BaseArr_chpl next_chpl, listNode_BaseArr_chpl meme_chpl) {
  listNode_BaseArr_chpl this_chpl = NULL;
  object tmp_chpl = NULL;
  this_chpl = meme_chpl;
  chpl_check_nil(this_chpl, INT64(30), INT64(50));
  tmp_chpl = &((this_chpl)->super_chpl);
  _construct_object(tmp_chpl);
  chpl_check_nil(this_chpl, INT64(32), INT64(50));
  (this_chpl)->data_chpl = data_chpl;
  chpl_check_nil(this_chpl, INT64(33), INT64(50));
  (this_chpl)->next_chpl = next_chpl;
  return this_chpl;
}

/* List.chpl:30 */
 void chpl__auto_destroy_listNode2(listNode_BaseArr_chpl this_chpl) {
  return;
}

/* List.chpl:30 */
 void chpl__auto_destroy_listNode(listNode_BaseDom_chpl this_chpl) {
  return;
}

/* List.chpl:45 */
 void _construct_list_chpl2(listNode_BaseArr_chpl first_chpl, listNode_BaseArr_chpl last_chpl, int64_t length_chpl, list_BaseArr_chpl* const meme_chpl, _ref_list_BaseArr _retArg_chpl) {
  list_BaseArr_chpl this_chpl;
  this_chpl = *(meme_chpl);
  (&this_chpl)->first_chpl = first_chpl;
  (&this_chpl)->last_chpl = last_chpl;
  (&this_chpl)->length_chpl = length_chpl;
  *(_retArg_chpl) = this_chpl;
  return;
}

/* List.chpl:45 */
 void _construct_list_chpl(listNode_BaseDom_chpl first_chpl, listNode_BaseDom_chpl last_chpl, int64_t length_chpl, list_BaseDom_chpl* const meme_chpl, _ref_list_BaseDom _retArg_chpl) {
  list_BaseDom_chpl this_chpl;
  this_chpl = *(meme_chpl);
  (&this_chpl)->first_chpl = first_chpl;
  (&this_chpl)->last_chpl = last_chpl;
  (&this_chpl)->length_chpl = length_chpl;
  *(_retArg_chpl) = this_chpl;
  return;
}

/* List.chpl:82 */
 void append_chpl(_ref_list_BaseArr this_chpl, BaseArr e_chpl) {
  listNode_BaseArr_chpl coerce_tmp_chpl = NULL;
  object call_tmp_chpl = NULL;
  chpl_bool call_tmp_chpl2;
  listNode_BaseArr_chpl coerce_tmp_chpl2 = NULL;
  _ref_listNode_BaseArr call_tmp_chpl3 = NULL;
  listNode_BaseArr_chpl this_chpl2 = NULL;
  int64_t call_tmp_chpl4;
  c_void_ptr cast_tmp_chpl;
  listNode_BaseArr_chpl call_tmp_chpl5 = NULL;
  listNode_BaseArr_chpl wrap_call_tmp_chpl = NULL;
  _ref_listNode_BaseArr call_tmp_chpl6 = NULL;
  listNode_BaseArr_chpl coerce_tmp_chpl3 = NULL;
  listNode_BaseArr_chpl coerce_tmp_chpl4 = NULL;
  _ref_listNode_BaseArr call_tmp_chpl7 = NULL;
  listNode_BaseArr_chpl this_chpl3 = NULL;
  int64_t call_tmp_chpl8;
  c_void_ptr cast_tmp_chpl2;
  listNode_BaseArr_chpl call_tmp_chpl9 = NULL;
  listNode_BaseArr_chpl wrap_call_tmp_chpl2 = NULL;
  _ref_listNode_BaseArr call_tmp_chpl10 = NULL;
  listNode_BaseArr_chpl coerce_tmp_chpl5 = NULL;
  _ref_int64_t call_tmp_chpl11 = NULL;
  chpl_check_nil(this_chpl, INT64(83), INT64(50));
  coerce_tmp_chpl = (this_chpl)->last_chpl;
  call_tmp_chpl = ((object)(coerce_tmp_chpl));
  call_tmp_chpl2 = (call_tmp_chpl != nil);
  if (call_tmp_chpl2) {
    chpl_check_nil(this_chpl, INT64(84), INT64(50));
    coerce_tmp_chpl2 = (this_chpl)->last_chpl;
    chpl_check_nil(coerce_tmp_chpl2, INT64(84), INT64(50));
    call_tmp_chpl3 = &((coerce_tmp_chpl2)->next_chpl);
    call_tmp_chpl4 = sizeof(chpl_listNode_BaseArr_chpl_object);
    cast_tmp_chpl = chpl_here_alloc(call_tmp_chpl4, INT16(10));
    this_chpl2 = ((listNode_BaseArr_chpl)(cast_tmp_chpl));
    ((object)(this_chpl2))->chpl__cid = chpl__cid_listNode_BaseArr_chpl;
    chpl_check_nil(this_chpl2, INT64(84), INT64(50));
    (this_chpl2)->data_chpl = nil;
    chpl_check_nil(this_chpl2, INT64(84), INT64(50));
    (this_chpl2)->next_chpl = nil;
    chpl_check_nil(this_chpl2, INT64(84), INT64(50));
    (this_chpl2)->data_chpl = e_chpl;
    call_tmp_chpl5 = ((listNode_BaseArr_chpl)(nil));
    chpl_check_nil(this_chpl2, INT64(84), INT64(50));
    (this_chpl2)->next_chpl = call_tmp_chpl5;
    wrap_call_tmp_chpl = _construct_listNode_chpl(e_chpl, call_tmp_chpl5, this_chpl2);
    *(call_tmp_chpl3) = wrap_call_tmp_chpl;
    chpl_check_nil(this_chpl, INT64(85), INT64(50));
    call_tmp_chpl6 = &((this_chpl)->last_chpl);
    chpl_check_nil(this_chpl, INT64(85), INT64(50));
    coerce_tmp_chpl3 = (this_chpl)->last_chpl;
    chpl_check_nil(coerce_tmp_chpl3, INT64(85), INT64(50));
    coerce_tmp_chpl4 = (coerce_tmp_chpl3)->next_chpl;
    *(call_tmp_chpl6) = coerce_tmp_chpl4;
  } else {
    chpl_check_nil(this_chpl, INT64(87), INT64(50));
    call_tmp_chpl7 = &((this_chpl)->first_chpl);
    call_tmp_chpl8 = sizeof(chpl_listNode_BaseArr_chpl_object);
    cast_tmp_chpl2 = chpl_here_alloc(call_tmp_chpl8, INT16(10));
    this_chpl3 = ((listNode_BaseArr_chpl)(cast_tmp_chpl2));
    ((object)(this_chpl3))->chpl__cid = chpl__cid_listNode_BaseArr_chpl;
    chpl_check_nil(this_chpl3, INT64(87), INT64(50));
    (this_chpl3)->data_chpl = nil;
    chpl_check_nil(this_chpl3, INT64(87), INT64(50));
    (this_chpl3)->next_chpl = nil;
    chpl_check_nil(this_chpl3, INT64(87), INT64(50));
    (this_chpl3)->data_chpl = e_chpl;
    call_tmp_chpl9 = ((listNode_BaseArr_chpl)(nil));
    chpl_check_nil(this_chpl3, INT64(87), INT64(50));
    (this_chpl3)->next_chpl = call_tmp_chpl9;
    wrap_call_tmp_chpl2 = _construct_listNode_chpl(e_chpl, call_tmp_chpl9, this_chpl3);
    *(call_tmp_chpl7) = wrap_call_tmp_chpl2;
    chpl_check_nil(this_chpl, INT64(88), INT64(50));
    call_tmp_chpl10 = &((this_chpl)->last_chpl);
    chpl_check_nil(this_chpl, INT64(88), INT64(50));
    coerce_tmp_chpl5 = (this_chpl)->first_chpl;
    *(call_tmp_chpl10) = coerce_tmp_chpl5;
  }
  chpl_check_nil(this_chpl, INT64(90), INT64(50));
  call_tmp_chpl11 = &((this_chpl)->length_chpl);
  *(call_tmp_chpl11) += INT64(1);
  return;
}

/* List.chpl:138 */
 void remove_chpl2(_ref_list_BaseDom this_chpl, BaseDom x_chpl) {
  listNode_BaseDom_chpl tmp_chpl = NULL;
  listNode_BaseDom_chpl coerce_tmp_chpl = NULL;
  listNode_BaseDom_chpl prev_chpl = NULL;
  listNode_BaseDom_chpl type_tmp_chpl = NULL;
  chpl_bool tmp_chpl2;
  object call_tmp_chpl = NULL;
  chpl_bool call_tmp_chpl2;
  chpl_bool tmp_chpl3;
  listNode_BaseDom_chpl tmp_chpl4 = NULL;
  BaseDom coerce_tmp_chpl2 = NULL;
  object call_tmp_chpl3 = NULL;
  object call_tmp_chpl4 = NULL;
  chpl_bool call_tmp_chpl5;
  listNode_BaseDom_chpl coerce_tmp_chpl3 = NULL;
  object call_tmp_chpl6 = NULL;
  chpl_bool call_tmp_chpl7;
  chpl_bool tmp_chpl5;
  listNode_BaseDom_chpl tmp_chpl6 = NULL;
  BaseDom coerce_tmp_chpl4 = NULL;
  object call_tmp_chpl8 = NULL;
  object call_tmp_chpl9 = NULL;
  chpl_bool call_tmp_chpl10;
  object call_tmp_chpl11 = NULL;
  chpl_bool call_tmp_chpl12;
  object call_tmp_chpl13 = NULL;
  chpl_bool call_tmp_chpl14;
  _ref_listNode_BaseDom call_tmp_chpl15 = NULL;
  listNode_BaseDom_chpl coerce_tmp_chpl5 = NULL;
  listNode_BaseDom_chpl coerce_tmp_chpl6 = NULL;
  object call_tmp_chpl16 = NULL;
  object call_tmp_chpl17 = NULL;
  chpl_bool call_tmp_chpl18;
  _ref_listNode_BaseDom call_tmp_chpl19 = NULL;
  listNode_BaseDom_chpl coerce_tmp_chpl7 = NULL;
  listNode_BaseDom_chpl coerce_tmp_chpl8 = NULL;
  object call_tmp_chpl20 = NULL;
  object call_tmp_chpl21 = NULL;
  chpl_bool call_tmp_chpl22;
  _ref_listNode_BaseDom call_tmp_chpl23 = NULL;
  c_void_ptr call_tmp_chpl24;
  _ref_int64_t call_tmp_chpl25 = NULL;
  chpl_check_nil(this_chpl, INT64(139), INT64(50));
  coerce_tmp_chpl = (this_chpl)->first_chpl;
  tmp_chpl = coerce_tmp_chpl;
  type_tmp_chpl = nil;
  prev_chpl = type_tmp_chpl;
  call_tmp_chpl = ((object)(coerce_tmp_chpl));
  call_tmp_chpl2 = (call_tmp_chpl != nil);
  if (call_tmp_chpl2) {
    tmp_chpl4 = coerce_tmp_chpl;
    chpl_check_nil(tmp_chpl4, INT64(141), INT64(50));
    coerce_tmp_chpl2 = (tmp_chpl4)->data_chpl;
    call_tmp_chpl3 = ((object)(coerce_tmp_chpl2));
    call_tmp_chpl4 = ((object)(x_chpl));
    call_tmp_chpl5 = (call_tmp_chpl3 != call_tmp_chpl4);
    tmp_chpl3 = call_tmp_chpl5;
  } else {
    tmp_chpl3 = UINT8(false);
  }
  tmp_chpl2 = tmp_chpl3;
  while (tmp_chpl2) {
    prev_chpl = tmp_chpl;
    chpl_check_nil(tmp_chpl, INT64(143), INT64(50));
    coerce_tmp_chpl3 = (tmp_chpl)->next_chpl;
    tmp_chpl = coerce_tmp_chpl3;
    call_tmp_chpl6 = ((object)(coerce_tmp_chpl3));
    call_tmp_chpl7 = (call_tmp_chpl6 != nil);
    if (call_tmp_chpl7) {
      tmp_chpl6 = coerce_tmp_chpl3;
      chpl_check_nil(tmp_chpl6, INT64(141), INT64(50));
      coerce_tmp_chpl4 = (tmp_chpl6)->data_chpl;
      call_tmp_chpl8 = ((object)(coerce_tmp_chpl4));
      call_tmp_chpl9 = ((object)(x_chpl));
      call_tmp_chpl10 = (call_tmp_chpl8 != call_tmp_chpl9);
      tmp_chpl5 = call_tmp_chpl10;
    } else {
      tmp_chpl5 = UINT8(false);
    }
    tmp_chpl2 = tmp_chpl5;
  }
  call_tmp_chpl11 = ((object)(tmp_chpl));
  call_tmp_chpl12 = (call_tmp_chpl11 != nil);
  if (call_tmp_chpl12) {
    call_tmp_chpl13 = ((object)(prev_chpl));
    call_tmp_chpl14 = (call_tmp_chpl13 != nil);
    if (call_tmp_chpl14) {
      chpl_check_nil(prev_chpl, INT64(147), INT64(50));
      call_tmp_chpl15 = &((prev_chpl)->next_chpl);
      chpl_check_nil(tmp_chpl, INT64(147), INT64(50));
      coerce_tmp_chpl5 = (tmp_chpl)->next_chpl;
      *(call_tmp_chpl15) = coerce_tmp_chpl5;
    }
    chpl_check_nil(this_chpl, INT64(148), INT64(50));
    coerce_tmp_chpl6 = (this_chpl)->first_chpl;
    call_tmp_chpl16 = ((object)(coerce_tmp_chpl6));
    call_tmp_chpl17 = ((object)(tmp_chpl));
    call_tmp_chpl18 = (call_tmp_chpl16 == call_tmp_chpl17);
    if (call_tmp_chpl18) {
      chpl_check_nil(this_chpl, INT64(149), INT64(50));
      call_tmp_chpl19 = &((this_chpl)->first_chpl);
      chpl_check_nil(tmp_chpl, INT64(149), INT64(50));
      coerce_tmp_chpl7 = (tmp_chpl)->next_chpl;
      *(call_tmp_chpl19) = coerce_tmp_chpl7;
    }
    chpl_check_nil(this_chpl, INT64(150), INT64(50));
    coerce_tmp_chpl8 = (this_chpl)->last_chpl;
    call_tmp_chpl20 = ((object)(coerce_tmp_chpl8));
    call_tmp_chpl21 = ((object)(tmp_chpl));
    call_tmp_chpl22 = (call_tmp_chpl20 == call_tmp_chpl21);
    if (call_tmp_chpl22) {
      chpl_check_nil(this_chpl, INT64(151), INT64(50));
      call_tmp_chpl23 = &((this_chpl)->last_chpl);
      *(call_tmp_chpl23) = prev_chpl;
    }
    call_tmp_chpl24 = ((void*)(tmp_chpl));
    chpl_here_free(call_tmp_chpl24);
    chpl_check_nil(this_chpl, INT64(153), INT64(50));
    call_tmp_chpl25 = &((this_chpl)->length_chpl);
    *(call_tmp_chpl25) -= INT64(1);
  }
  return;
}

/* List.chpl:138 */
 void remove_chpl(_ref_list_BaseArr this_chpl, BaseArr x_chpl) {
  listNode_BaseArr_chpl tmp_chpl = NULL;
  listNode_BaseArr_chpl coerce_tmp_chpl = NULL;
  listNode_BaseArr_chpl prev_chpl = NULL;
  listNode_BaseArr_chpl type_tmp_chpl = NULL;
  chpl_bool tmp_chpl2;
  object call_tmp_chpl = NULL;
  chpl_bool call_tmp_chpl2;
  chpl_bool tmp_chpl3;
  listNode_BaseArr_chpl tmp_chpl4 = NULL;
  BaseArr coerce_tmp_chpl2 = NULL;
  object call_tmp_chpl3 = NULL;
  object call_tmp_chpl4 = NULL;
  chpl_bool call_tmp_chpl5;
  listNode_BaseArr_chpl coerce_tmp_chpl3 = NULL;
  object call_tmp_chpl6 = NULL;
  chpl_bool call_tmp_chpl7;
  chpl_bool tmp_chpl5;
  listNode_BaseArr_chpl tmp_chpl6 = NULL;
  BaseArr coerce_tmp_chpl4 = NULL;
  object call_tmp_chpl8 = NULL;
  object call_tmp_chpl9 = NULL;
  chpl_bool call_tmp_chpl10;
  object call_tmp_chpl11 = NULL;
  chpl_bool call_tmp_chpl12;
  object call_tmp_chpl13 = NULL;
  chpl_bool call_tmp_chpl14;
  _ref_listNode_BaseArr call_tmp_chpl15 = NULL;
  listNode_BaseArr_chpl coerce_tmp_chpl5 = NULL;
  listNode_BaseArr_chpl coerce_tmp_chpl6 = NULL;
  object call_tmp_chpl16 = NULL;
  object call_tmp_chpl17 = NULL;
  chpl_bool call_tmp_chpl18;
  _ref_listNode_BaseArr call_tmp_chpl19 = NULL;
  listNode_BaseArr_chpl coerce_tmp_chpl7 = NULL;
  listNode_BaseArr_chpl coerce_tmp_chpl8 = NULL;
  object call_tmp_chpl20 = NULL;
  object call_tmp_chpl21 = NULL;
  chpl_bool call_tmp_chpl22;
  _ref_listNode_BaseArr call_tmp_chpl23 = NULL;
  c_void_ptr call_tmp_chpl24;
  _ref_int64_t call_tmp_chpl25 = NULL;
  chpl_check_nil(this_chpl, INT64(139), INT64(50));
  coerce_tmp_chpl = (this_chpl)->first_chpl;
  tmp_chpl = coerce_tmp_chpl;
  type_tmp_chpl = nil;
  prev_chpl = type_tmp_chpl;
  call_tmp_chpl = ((object)(coerce_tmp_chpl));
  call_tmp_chpl2 = (call_tmp_chpl != nil);
  if (call_tmp_chpl2) {
    tmp_chpl4 = coerce_tmp_chpl;
    chpl_check_nil(tmp_chpl4, INT64(141), INT64(50));
    coerce_tmp_chpl2 = (tmp_chpl4)->data_chpl;
    call_tmp_chpl3 = ((object)(coerce_tmp_chpl2));
    call_tmp_chpl4 = ((object)(x_chpl));
    call_tmp_chpl5 = (call_tmp_chpl3 != call_tmp_chpl4);
    tmp_chpl3 = call_tmp_chpl5;
  } else {
    tmp_chpl3 = UINT8(false);
  }
  tmp_chpl2 = tmp_chpl3;
  while (tmp_chpl2) {
    prev_chpl = tmp_chpl;
    chpl_check_nil(tmp_chpl, INT64(143), INT64(50));
    coerce_tmp_chpl3 = (tmp_chpl)->next_chpl;
    tmp_chpl = coerce_tmp_chpl3;
    call_tmp_chpl6 = ((object)(coerce_tmp_chpl3));
    call_tmp_chpl7 = (call_tmp_chpl6 != nil);
    if (call_tmp_chpl7) {
      tmp_chpl6 = coerce_tmp_chpl3;
      chpl_check_nil(tmp_chpl6, INT64(141), INT64(50));
      coerce_tmp_chpl4 = (tmp_chpl6)->data_chpl;
      call_tmp_chpl8 = ((object)(coerce_tmp_chpl4));
      call_tmp_chpl9 = ((object)(x_chpl));
      call_tmp_chpl10 = (call_tmp_chpl8 != call_tmp_chpl9);
      tmp_chpl5 = call_tmp_chpl10;
    } else {
      tmp_chpl5 = UINT8(false);
    }
    tmp_chpl2 = tmp_chpl5;
  }
  call_tmp_chpl11 = ((object)(tmp_chpl));
  call_tmp_chpl12 = (call_tmp_chpl11 != nil);
  if (call_tmp_chpl12) {
    call_tmp_chpl13 = ((object)(prev_chpl));
    call_tmp_chpl14 = (call_tmp_chpl13 != nil);
    if (call_tmp_chpl14) {
      chpl_check_nil(prev_chpl, INT64(147), INT64(50));
      call_tmp_chpl15 = &((prev_chpl)->next_chpl);
      chpl_check_nil(tmp_chpl, INT64(147), INT64(50));
      coerce_tmp_chpl5 = (tmp_chpl)->next_chpl;
      *(call_tmp_chpl15) = coerce_tmp_chpl5;
    }
    chpl_check_nil(this_chpl, INT64(148), INT64(50));
    coerce_tmp_chpl6 = (this_chpl)->first_chpl;
    call_tmp_chpl16 = ((object)(coerce_tmp_chpl6));
    call_tmp_chpl17 = ((object)(tmp_chpl));
    call_tmp_chpl18 = (call_tmp_chpl16 == call_tmp_chpl17);
    if (call_tmp_chpl18) {
      chpl_check_nil(this_chpl, INT64(149), INT64(50));
      call_tmp_chpl19 = &((this_chpl)->first_chpl);
      chpl_check_nil(tmp_chpl, INT64(149), INT64(50));
      coerce_tmp_chpl7 = (tmp_chpl)->next_chpl;
      *(call_tmp_chpl19) = coerce_tmp_chpl7;
    }
    chpl_check_nil(this_chpl, INT64(150), INT64(50));
    coerce_tmp_chpl8 = (this_chpl)->last_chpl;
    call_tmp_chpl20 = ((object)(coerce_tmp_chpl8));
    call_tmp_chpl21 = ((object)(tmp_chpl));
    call_tmp_chpl22 = (call_tmp_chpl20 == call_tmp_chpl21);
    if (call_tmp_chpl22) {
      chpl_check_nil(this_chpl, INT64(151), INT64(50));
      call_tmp_chpl23 = &((this_chpl)->last_chpl);
      *(call_tmp_chpl23) = prev_chpl;
    }
    call_tmp_chpl24 = ((void*)(tmp_chpl));
    chpl_here_free(call_tmp_chpl24);
    chpl_check_nil(this_chpl, INT64(153), INT64(50));
    call_tmp_chpl25 = &((this_chpl)->length_chpl);
    *(call_tmp_chpl25) -= INT64(1);
  }
  return;
}

