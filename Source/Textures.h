/*
(c) 2008 Victor "ErV" Eremin (Voronezh, Russia)
mailto:ErV2005@rambler.ru, erv@box.vsi.ru
for non-commercial use only
*/
#ifndef TEXTURES_H
#define TEXTURES_H

#include <SDL/SDL.h>
#include <GL/gl.h>

GLuint loadTexture(const char* filename, GLenum minFilter = GL_LINEAR, GLenum magFilter = GL_LINEAR, bool mipmaps = true);

#endif
