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


#ifndef __DOCUMENT_VIEW_H__
#define __DOCUMENT_VIEW_H__


/*** Included Headers ***/
#include "Utility/wutil.h"


/*** Local Defines ***/
//None


/*** C++ Class Predefines ***/
class WCDocument;


/***********************************************~***************************************************/


class WCDocumentView : public CWnd {
protected:
	HDC											m_hgldc;											//!< GDI Device Context
	HGLRC										m_hglRC;											//!< Rendering context
	WCDocument									*_document;											//!< Associated Wildcat document

//	afx_msg void OnPaint();																			//!< Windows message function
//	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);											//!< Windows message function
//	afx_msg void OnSize(UINT nType, int cx, int cy);												//!< Windows message function
//	afx_msg BOOL OnEraseBkgnd(CDC *pDC);															//!< Windows message function
//	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);									//!< Windows message function
//	afx_msg void OnMouseMove(UINT nFlags, CPoint point);											//!< Windows message function
//	DECLARE_MESSAGE_MAP()																			//!< Windows message function
public:
	//Constructors and Destructors
	WCDocumentView();																				//!< Default constructor
	virtual ~WCDocumentView();																		//!< Default destructor

	//Member Access Methods
	inline WCDocument* Document(void)			{ return this->_document; }							//!< Get the associated document

	//Class Methods
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);													//!< Standard pre-creation method
	BOOL SetFormat(HDC hdc);																		//!< Set the pixel format

	void OnInitGL(void);
	void OnSetFocus(void);
	void OnKillFocus(void);
	void OnDisplay(void);
	void OnResize(const int &width, const int &height);
	void OnIdle(void);
	void OnMousePress(void);
	void OnMouseMovement(const int &x, const int &y);
	void OnKeyPress(void);
	void OnWindowWillClose(void);
};


/***********************************************~***************************************************/


#endif //__DOCUMENT_VIEW_H__

