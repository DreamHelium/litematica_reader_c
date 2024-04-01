/*  recipes_smelting - Recipes smelting and blasting Object and class
    Copyright (C) 2024 Dream Helium
    This file is part of litematica_reader_c.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>. */

#ifndef RECIPES_SMELTING_H
#define RECIPES_SMELTING_H

#include "recipes_general.h"

G_BEGIN_DECLS

#define RECIPES_TYPE_SMELTING recipes_smelting_get_type()
G_DECLARE_FINAL_TYPE (RecipesSmelting, recipes_smelting, RECIPES, SMELTING, RecipesGeneral)

G_END_DECLS

#endif /* RECIPES_SMELTING_H */
