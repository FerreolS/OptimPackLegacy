/* 
 *  m_opl_vmlmb_get_reason.c
 *
 * function m_opl_vmlmb_get_reason
 *
 *	Definitions for optimization routines implemented in OptimPack
 *	library.
 *
 *-----------------------------------------------------------------------------
 *
 *      Copyright (c) 2018, Ferreol SOULEZ.
 *
 *	This file is part of OptimPack.
 *
 *	OptimPack is  free software; you can redistribute  it and/or modify
 *	it under the  terms of the GNU General  Public License as published
 *	by the Free  Software Foundation; either version 2  of the License,
 *	or (at your option) any later version.
 *
 *	OptimPack is  distributed in the hope  that it will  be useful, but
 *	WITHOUT  ANY  WARRANTY;  without   even  the  implied  warranty  of
 *	MERCHANTABILITY or  FITNESS FOR A PARTICULAR PURPOSE.   See the GNU
 *	General Public License for more details.
 *
 *	You should have  received a copy of the  GNU General Public License
 *	along with OptimPack (file  "LICENSE" in the top source directory);
 *	if  not, write  to the  Free Software  Foundation, Inc.,  59 Temple
 *	Place, Suite 330, Boston, MA 02111-1307 USA
ws = opl_vmlmb_create(dims, mem, fmin=fmin,fatol=fatol, frtol=frtol,sftol=sftol, sgtol=sgtol, sxtol=sxtol);
*/

#include <errno.h>

#include "mex.h"
#include "optimpacklegacy.h"

#define TRUE  1
#define FALSE 0

void mexFunction( int nlhs, mxArray *plhs[],    
                  int nrhs, const mxArray *prhs[] )
{
  opl_vmlmb_workspace_t* ws;
  
  if (nrhs != 1) {
    mexErrMsgTxt("expecting 1 argument");
  }
  if (nlhs != 1) {
        mexErrMsgTxt("1 output argument allowed."); 
  } 
  
  ws =  (opl_vmlmb_workspace_t*)mxGetPr(prhs[0]); /* get the workspace */
 
  plhs[0] = mxCreateString(opl_vmlmb_get_reason(ws));
}
