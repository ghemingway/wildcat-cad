/*******************************************************************************
* Copyright (c) 2007, 2008, CerroKai Development
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*     * Redistributions of source code must retain the above copyright
*       notice, this list of conditions and the following disclaimer.
*     * Redistributions in binary form must reproduce the above copyright
*       notice, this list of conditions and the following disclaimer in the
*       documentation and/or other materials provided with the distribution.
*     * Neither the name of CerroKai Development nor the
*       names of its contributors may be used to endorse or promote products
*       derived from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY CerroKai Development ``AS IS'' AND ANY
* EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL CerroKai Development BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
********************************************************************************/


/*** Included Header Files ***/
#include "Utility/wutil.h"


/***********************************************~***************************************************/


// GL version 1.5 functions
PFNGLGENQUERIESPROC								glGenQueries = NULL;
PFNGLDELETEQUERIESPROC							glDeleteQueries = NULL;
PFNGLISQUERYPROC								glIsQuery = NULL;
PFNGLBEGINQUERYPROC								glBeginQuery = NULL;
PFNGLENDQUERYPROC								glEndQuery = NULL;
PFNGLGETQUERYIVPROC								glGetQueryiv = NULL;
PFNGLGETQUERYOBJECTIVPROC						glGetQueryObjectiv = NULL;
PFNGLGETQUERYOBJECTUIVPROC						glGetQueryObjectuiv = NULL;
PFNGLBINDBUFFERPROC								glBindBuffer = NULL;
PFNGLDELETEBUFFERSPROC							glDeleteBuffers = NULL;
PFNGLGENBUFFERSPROC								glGenBuffers = NULL;
PFNGLISBUFFERPROC								glIsBuffer = NULL;
PFNGLBUFFERDATAPROC								glBufferData = NULL;
PFNGLBUFFERSUBDATAPROC							glBufferSubData = NULL;
PFNGLGETBUFFERSUBDATAPROC						glGetBufferSubData = NULL;
PFNGLMAPBUFFERPROC								glMapBuffer = NULL;
PFNGLUNMAPBUFFERPROC							glUnmapBuffer = NULL;
PFNGLGETBUFFERPARAMETERIVPROC					glGetBufferParameteriv = NULL;
PFNGLGETBUFFERPOINTERVPROC						glGetBufferPointerv = NULL;

// GL version 2.0 functions
PFNGLBLENDEQUATIONSEPARATEPROC					glBlendEquationSeparate = NULL;
PFNGLDRAWBUFFERSPROC							glDrawBuffers = NULL;
PFNGLSTENCILOPSEPARATEPROC						glStencilOpSeparate = NULL;
PFNGLSTENCILFUNCSEPARATEPROC					glStencilFuncSeparate = NULL;
PFNGLSTENCILMASKSEPARATEPROC					glStencilMaskSeparate = NULL;
PFNGLATTACHSHADERPROC							glAttachShader = NULL;
PFNGLBINDATTRIBLOCATIONPROC						glBindAttribLocation = NULL;
PFNGLCOMPILESHADERPROC							glCompileShader = NULL;
PFNGLCREATEPROGRAMPROC							glCreateProgram = NULL;
PFNGLCREATESHADERPROC							glCreateShader = NULL;
PFNGLDELETEPROGRAMPROC							glDeleteProgram = NULL;
PFNGLDELETESHADERPROC							glDeleteShader = NULL;
PFNGLDETACHSHADERPROC							glDetachShader = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYPROC				glDisableVertexAttribArray = NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC				glEnableVertexAttribArray = NULL;
PFNGLGETACTIVEATTRIBPROC						glGetActiveAttrib = NULL;
PFNGLGETACTIVEUNIFORMPROC						glGetActiveUniform = NULL;
PFNGLGETATTACHEDSHADERSPROC						glGetAttachedShaders = NULL;
PFNGLGETATTRIBLOCATIONPROC						glGetAttribLocation = NULL;
PFNGLGETPROGRAMIVPROC							glGetProgramiv = NULL;
PFNGLGETPROGRAMINFOLOGPROC						glGetProgramInfoLog = NULL;
PFNGLGETSHADERIVPROC							glGetShaderiv = NULL;
PFNGLGETSHADERINFOLOGPROC						glGetShaderInfoLog = NULL;
PFNGLGETSHADERSOURCEPROC						glGetShaderSource = NULL;
PFNGLGETUNIFORMLOCATIONPROC						glGetUniformLocation = NULL;
PFNGLGETUNIFORMFVPROC							glGetUniformfv = NULL;
PFNGLGETUNIFORMIVPROC							glGetUniformiv = NULL;
PFNGLGETVERTEXATTRIBDVPROC						glGetVertexAttribdv = NULL;
PFNGLGETVERTEXATTRIBFVPROC						glGetVertexAttribfv = NULL;
PFNGLGETVERTEXATTRIBIVPROC						glGetVertexAttribiv = NULL;
PFNGLGETVERTEXATTRIBPOINTERVPROC				glGetVertexAttribPointerv = NULL;
PFNGLISPROGRAMPROC								glIsProgram = NULL;
PFNGLISSHADERPROC								glIsShader = NULL;
PFNGLLINKPROGRAMPROC							glLinkProgram = NULL;
PFNGLSHADERSOURCEPROC							glShaderSource = NULL;
PFNGLUSEPROGRAMPROC								glUseProgram = NULL;
PFNGLUNIFORM1FPROC								glUniform1f = NULL;
PFNGLUNIFORM2FPROC								glUniform2f = NULL;
PFNGLUNIFORM3FPROC								glUniform3f = NULL;
PFNGLUNIFORM4FPROC								glUniform4f = NULL;
PFNGLUNIFORM1IPROC								glUniform1i = NULL;
PFNGLUNIFORM2IPROC								glUniform2i = NULL;
PFNGLUNIFORM3IPROC								glUniform3i = NULL;
PFNGLUNIFORM4IPROC								glUniform4i = NULL;
PFNGLUNIFORM1FVPROC								glUniform1fv = NULL;
PFNGLUNIFORM2FVPROC								glUniform2fv = NULL;
PFNGLUNIFORM3FVPROC								glUniform3fv = NULL;
PFNGLUNIFORM4FVPROC								glUniform4fv = NULL;
PFNGLUNIFORM1IVPROC								glUniform1iv = NULL;
PFNGLUNIFORM2IVPROC								glUniform2iv = NULL;
PFNGLUNIFORM3IVPROC								glUniform3iv = NULL;
PFNGLUNIFORM4IVPROC								glUniform4iv = NULL;
PFNGLUNIFORMMATRIX2FVPROC						glUniformMatrix2fv = NULL;
PFNGLUNIFORMMATRIX3FVPROC						glUniformMatrix3fv = NULL;
PFNGLUNIFORMMATRIX4FVPROC						glUniformMatrix4fv = NULL;
PFNGLVALIDATEPROGRAMPROC						glValidateProgram = NULL;
PFNGLVERTEXATTRIB1DPROC							glVertexAttrib1d = NULL;
PFNGLVERTEXATTRIB1DVPROC						glVertexAttrib1dv = NULL;
PFNGLVERTEXATTRIB1FPROC							glVertexAttrib1f = NULL;
PFNGLVERTEXATTRIB1FVPROC						glVertexAttrib1fv = NULL;
PFNGLVERTEXATTRIB1SPROC							glVertexAttrib1s = NULL;
PFNGLVERTEXATTRIB1SVPROC						glVertexAttrib1sv = NULL;
PFNGLVERTEXATTRIB2DPROC							glVertexAttrib2d = NULL;
PFNGLVERTEXATTRIB2DVPROC						glVertexAttrib2dv = NULL;
PFNGLVERTEXATTRIB2FPROC							glVertexAttrib2f = NULL;
PFNGLVERTEXATTRIB2FVPROC						glVertexAttrib2fv = NULL;
PFNGLVERTEXATTRIB2SPROC							glVertexAttrib2s = NULL;
PFNGLVERTEXATTRIB2SVPROC						glVertexAttrib2sv = NULL;
PFNGLVERTEXATTRIB3DPROC							glVertexAttrib3d = NULL;
PFNGLVERTEXATTRIB3DVPROC						glVertexAttrib3dv = NULL;
PFNGLVERTEXATTRIB3FPROC							glVertexAttrib3f = NULL;
PFNGLVERTEXATTRIB3FVPROC						glVertexAttrib3fv = NULL;
PFNGLVERTEXATTRIB3SPROC							glVertexAttrib3s = NULL;
PFNGLVERTEXATTRIB3SVPROC						glVertexAttrib3sv = NULL;
PFNGLVERTEXATTRIB4NBVPROC						glVertexAttrib4nbv = NULL;
PFNGLVERTEXATTRIB4NIVPROC						glVertexAttrib4niv = NULL;
PFNGLVERTEXATTRIB4NSVPROC						glVertexAttrib4nsv = NULL;
PFNGLVERTEXATTRIB4NUBPROC						glVertexAttrib4nub = NULL;
PFNGLVERTEXATTRIB4NUBVPROC						glVertexAttrib4nubv = NULL;
PFNGLVERTEXATTRIB4NUIVPROC						glVertexAttrib4nuiv = NULL;
PFNGLVERTEXATTRIB4NUSVPROC						glVertexAttrib4nusv = NULL;
PFNGLVERTEXATTRIB4BVPROC						glVertexAttrib4bv = NULL;
PFNGLVERTEXATTRIB4DPROC							glVertexAttrib4d = NULL;
PFNGLVERTEXATTRIB4DVPROC						glVertexAttrib4dv = NULL;
PFNGLVERTEXATTRIB4FPROC							glVertexAttrib4f = NULL;
PFNGLVERTEXATTRIB4FVPROC						glVertexAttrib4fv = NULL;
PFNGLVERTEXATTRIB4IVPROC						glVertexAttrib4iv = NULL;
PFNGLVERTEXATTRIB4SPROC							glVertexAttrib4s = NULL;
PFNGLVERTEXATTRIB4SVPROC						glVertexAttrib4sv = NULL;
PFNGLVERTEXATTRIB4UBVPROC						glVertexAttrib4ubv = NULL;
PFNGLVERTEXATTRIB4UIVPROC						glVertexAttrib4uiv = NULL;
PFNGLVERTEXATTRIB4USVPROC						glVertexAttrib4usv = NULL;
PFNGLVERTEXATTRIBPOINTERPROC					glVertexAttribPointer = NULL;


//EXT_GEOMETRY_SHADER4
PFNGLPROGRAMPARAMETERIEXTPROC					glProgramParameteriEXT = NULL;

// EXT_TRANSFORM_FEEDBACK
PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC			glTransformFeedbackVaryingsEXT = NULL;


/***********************************************~***************************************************/


void InitOpenGL(void) {
	glDeleteBuffers = (PFNGLDELETEBUFFERSPROC) wglGetProcAddress("glDeleteBuffers");
}


/***********************************************~***************************************************/

