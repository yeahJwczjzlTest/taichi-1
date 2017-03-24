/*******************************************************************************
    Taichi - Physically based Computer Graphics Library

    Copyright (c) 2016 Yuanming Hu <yuanmhu@gmail.com>

    All rights reserved. Use of this source code is governed by
    the MIT license as written in the LICENSE file.
*******************************************************************************/

#include "framebuffer.h"

TC_NAMESPACE_BEGIN


class NaiveFramebuffer : public Framebuffer {

};

TC_IMPLEMENTATION(Framebuffer, NaiveFramebuffer, "naive");

TC_NAMESPACE_END

