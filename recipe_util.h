#ifndef RECIPE_UTIL_H
#define RECIPE_UTIL_H

#ifdef __cplusplus
extern "C"{
#endif

#include "dhlrc_list.h"

#ifdef LOAD_RECIPES
#include <cjson/cJSON.h>
#include <dirent.h>
ItemList* ItemList_Recipe(char* block_name,int num);
#endif

int ItemList_CombineRecipe(ItemList** o_bl);
long *NumArray_GetFromInput(int *array_num, int max_num);
char** NameArray_CanCraft(int* num, ItemList* il);

char* Name_BlockTranslate(char* block_name);

#ifdef __cplusplus
}
#endif

#endif // RECIPE_UTIL_H
