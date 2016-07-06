/* ChapelTaskTable.chpl:22 */
 void chpl__init_ChapelTaskTable(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelTaskTable_p) {
    goto _exit_chpl__init_ChapelTaskTable;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelTaskTable";
  printModuleInit(modFormatStr, modStr, INT64(15));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelTaskTable_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelTaskTable:;
  return;
}

/* ChapelTaskTable.chpl:33 */
void chpldev_taskTable_add(chpl_taskID_t taskID, uint32_t lineno, int32_t filename, uint64_t tl_info) {
  return;
}

/* ChapelTaskTable.chpl:40 */
void chpldev_taskTable_remove(chpl_taskID_t taskID) {
  return;
}

/* ChapelTaskTable.chpl:44 */
void chpldev_taskTable_set_active(chpl_taskID_t taskID) {
  return;
}

/* ChapelTaskTable.chpl:48 */
void chpldev_taskTable_set_suspended(chpl_taskID_t taskID) {
  return;
}

/* ChapelTaskTable.chpl:52 */
void chpldev_taskTable_get_tl_info(chpl_taskID_t taskID) {
  return;
}

/* ChapelTaskTable.chpl:56 */
void chpldev_taskTable_print(void) {
  string local__str_literal_1749;
  local__str_literal_1749 = _str_literal_1749;
  halt(&local__str_literal_1749, INT64(58), INT32(35));
  return;
}

