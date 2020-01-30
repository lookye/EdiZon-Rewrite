/**
 * Copyright (C) 2019 - 2020 WerWolv
 * 
 * This file is part of EdiZon.
 * 
 * EdiZon is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 * 
 * EdiZon is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with EdiZon.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "ui/elements/focusable_table.hpp"
#include "cheat/cheat.hpp"

#include "helpers/utils.hpp"

namespace edz::ui::element {

    FocusableTable::FocusableTable() : Table() {

    }

    FocusableTable::~FocusableTable() {
    }

    brls::View* FocusableTable::requestFocus(brls::FocusDirection direction, brls::View *oldFocus, bool fromUp) {        
        return this;
    }

    void FocusableTable::drawHighlight(NVGcontext* vg, brls::ThemeValues* theme, float alpha, brls::Style* style, bool background) {
        // The view has to be focusable for scrolling to work but we don't want the highlight to be drawn
    }

}