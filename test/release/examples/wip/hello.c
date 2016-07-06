/* hello.chpl:1 */
#include "chpl__header.h"

 void chpl__init_hello(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  string local__str_literal_1760_chpl;
  if (chpl__init_hello_p) {
    goto _exit_chpl__init_hello_chpl;
  }
  modFormatStr_chpl = "%*s\n";
  modStr_chpl = "hello";
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(5));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_hello_p = UINT8(true);
  local__str_literal_1760_chpl = _str_literal_1760;
  writeln_chpl2(&local__str_literal_1760_chpl);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_hello_chpl:;
  return;
}

/* hello.chpl:1 */
 void chpl_user_main(void) {
  return;
}

/* hello.chpl:1 */
int64_t chpl_gen_main(chpl_main_argument* const _arg) {
  chpl___EndCount_atomic_int64_int64_t this_chpl = NULL;
  int64_t call_tmp_chpl;
  c_void_ptr cast_tmp_chpl;
  atomic_int64 _init_class_tmp__chpl;
  atomic_int64 this_chpl2;
  atomic_int_least64_t ret_chpl;
  atomic_int_least64_t type_tmp_chpl;
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
  atomic_int64 wrap_call_tmp_chpl;
  c_void_ptr call_tmp_chpl2;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl2 = NULL;
  call_tmp_chpl = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
  cast_tmp_chpl = chpl_here_alloc(call_tmp_chpl, INT16(2));
  this_chpl = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl));
  ((object)(this_chpl))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  chpl_check_nil(this_chpl, INT64(1), INT64(42));
  (this_chpl)->i = _init_class_tmp__chpl;
  chpl_check_nil(this_chpl, INT64(1), INT64(42));
  (this_chpl)->taskCnt = INT64(0);
  chpl_check_nil(this_chpl, INT64(1), INT64(42));
  (this_chpl)->taskList = NULL;
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
  (&this_chpl2)->_v = ret_chpl;
  wrap_call_tmp_chpl = _construct_atomic_int64(ret_chpl, &this_chpl2);
  chpl_check_nil(this_chpl, INT64(1), INT64(42));
  (this_chpl)->i = wrap_call_tmp_chpl;
  chpl_check_nil(this_chpl, INT64(1), INT64(42));
  (this_chpl)->taskCnt = INT64(0);
  call_tmp_chpl2 = ((c_void_ptr)(nil));
  chpl_check_nil(this_chpl, INT64(1), INT64(42));
  (this_chpl)->taskList = call_tmp_chpl2;
  wrap_call_tmp_chpl2 = _construct__EndCount(&wrap_call_tmp_chpl, INT64(0), call_tmp_chpl2, this_chpl);
  chpl_rt_preUserCodeHook();
  chpl__init_hello(INT64(1), INT32(42));
  chpl_user_main();
  chpl_rt_postUserCodeHook();
  _waitEndCount2(wrap_call_tmp_chpl2);
  chpl__autoDestroyGlobals();
  return INT64(0);
}

/* ChapelBase.chpl:23 */
 void chpl__autoDestroyGlobals(void) {
  DefaultRectangularDom_1_int64_t_F local_LocaleSpace_chpl = NULL;
  DefaultRectangularArr_locale_1_int64_t_F local_chpl_emptyLocales_chpl = NULL;
  DefaultRectangularDom_1_int64_t_F local_chpl_emptyLocaleSpace_chpl = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  _ref_string _field_destructor_tmp__chpl = NULL;
  _ref_string _field_destructor_tmp__chpl2 = NULL;
  _ref_string _field_destructor_tmp__chpl3 = NULL;
  _ref_string _field_destructor_tmp__chpl4 = NULL;
  _ref_string _field_destructor_tmp__chpl5 = NULL;
  _ref_string _field_destructor_tmp__chpl6 = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl6 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl7 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl8 = NULL;
  local_LocaleSpace_chpl = LocaleSpace;
  local_chpl_emptyLocales_chpl = chpl_emptyLocales;
  local_chpl_emptyLocaleSpace_chpl = chpl_emptyLocaleSpace;
  chpl__autoDestroy2(local_chpl_emptyLocaleSpace_chpl);
  chpl__autoDestroy3(local_chpl_emptyLocales_chpl);
  chpl__autoDestroy(defaultDist);
  chpl__autoDestroy3(Locales);
  chpl__autoDestroy2(local_LocaleSpace_chpl);
  _ref_tmp__chpl = &memLog;
  chpl___TILDE_string(_ref_tmp__chpl);
  _ref_tmp__chpl2 = &_r_chpl;
  chpl___TILDE_string(_ref_tmp__chpl2);
  _ref_tmp__chpl3 = &_rw_chpl;
  chpl___TILDE_string(_ref_tmp__chpl3);
  _ref_tmp__chpl4 = &_cw_chpl;
  chpl___TILDE_string(_ref_tmp__chpl4);
  _ref_tmp__chpl5 = &_cwr_chpl;
  chpl___TILDE_string(_ref_tmp__chpl5);
  _field_destructor_tmp__chpl = (_arg_to_proto_names_chpl + INT64(5));
  chpl___TILDE_string(_field_destructor_tmp__chpl);
  _field_destructor_tmp__chpl2 = (_arg_to_proto_names_chpl + INT64(4));
  chpl___TILDE_string(_field_destructor_tmp__chpl2);
  _field_destructor_tmp__chpl3 = (_arg_to_proto_names_chpl + INT64(3));
  chpl___TILDE_string(_field_destructor_tmp__chpl3);
  _field_destructor_tmp__chpl4 = (_arg_to_proto_names_chpl + INT64(2));
  chpl___TILDE_string(_field_destructor_tmp__chpl4);
  _field_destructor_tmp__chpl5 = (_arg_to_proto_names_chpl + INT64(1));
  chpl___TILDE_string(_field_destructor_tmp__chpl5);
  _field_destructor_tmp__chpl6 = (_arg_to_proto_names_chpl + INT64(0));
  chpl___TILDE_string(_field_destructor_tmp__chpl6);
  _ref_tmp__chpl6 = &stdin_chpl;
  chpl___TILDE_channel2(_ref_tmp__chpl6);
  _ref_tmp__chpl7 = &stdout_chpl;
  chpl___TILDE_channel(_ref_tmp__chpl7);
  _ref_tmp__chpl8 = &stderr_chpl;
  chpl___TILDE_channel(_ref_tmp__chpl8);
  return;
}

