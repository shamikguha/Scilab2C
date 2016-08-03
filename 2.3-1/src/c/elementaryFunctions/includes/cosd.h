/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Shamik Guha
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __COSD_H__
#define __COSD_H__
#include "types.h"

 #ifdef  __cplusplus
 extern "C" {
 #endif

void dcosda(double* in,int size,double* out);
void scosda(float* in,int size,float* out);
double dcosds(double in);
float scosds(float in);
 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__COSD_H__*/
