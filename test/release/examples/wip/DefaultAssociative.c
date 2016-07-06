/* DefaultAssociative.chpl:22 */
 void chpl__init_DefaultAssociative(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_DefaultAssociative_p) {
    goto _exit_chpl__init_DefaultAssociative;
  }
  modFormatStr = "%*s\n";
  modStr = "DefaultAssociative";
  printModuleInit(modFormatStr, modStr, INT64(18));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_DefaultAssociative_p = UINT8(true);
  {
    chpl__init_DSIUtil(INT64(22), INT32(31));
    chpl__init_Sort(INT64(22), INT32(31));
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_DefaultAssociative:;
  return;
}

