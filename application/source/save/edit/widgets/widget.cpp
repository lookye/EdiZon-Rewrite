/**
 * Copyright (C) 2019 WerWolv
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

#include "save/edit/widgets/widget.hpp"

namespace edz::save::edit::widget {

    Widget::Widget(std::string name) : m_name(name) {
        this->m_widgetView = nullptr;
    }

    Widget::~Widget() {
        if (this->m_widgetView != nullptr)
            delete this->m_widgetView;
    }


    void Widget::sendValueToScript(std::shared_ptr<widget::Arg> arg) {

    }

    void Widget::setDescription(std::string description) {
        this->m_description = description;
    }

    void Widget::addArgument(std::string argumentName, std::shared_ptr<widget::Arg> argument) {
        this->m_arguments.insert({ argumentName, argument });
    }


}