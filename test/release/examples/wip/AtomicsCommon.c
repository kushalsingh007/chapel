/* AtomicsCommon.chpl:20 */
 void chpl__init_AtomicsCommon(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_AtomicsCommon_p) {
    goto _exit_chpl__init_AtomicsCommon;
  }
  modFormatStr = "%*s\n";
  modStr = "AtomicsCommon";
  printModuleInit(modFormatStr, modStr, INT64(13));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_AtomicsCommon_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_AtomicsCommon:;
  return;
}

/* AtomicsCommon.chpl:21 */
 void _construct_atomic_refcnt(atomic_int64* const _cnt, atomic_refcnt* const meme, _ref_atomic_refcnt _retArg) {
  atomic_refcnt this7;
  this7 = *(meme);
  (&this7)->_cnt = *(_cnt);
  *(_retArg) = this7;
  return;
}

