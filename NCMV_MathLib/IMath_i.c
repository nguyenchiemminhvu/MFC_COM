/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri May 08 14:35:15 2020
 */
/* Compiler settings for E:\Projects\MFC_COM\NCMV_MathLib\IMath.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IMath = {0x1221db62,0xf3d8,0x11d4,{0x82,0x5d,0x00,0x10,0x4b,0x36,0x46,0xc1}};


const IID LIBID_NCMV_MathLib = {0x3ff1aab8,0xf3d8,0x11d4,{0x82,0x5d,0x00,0x10,0x4b,0x36,0x46,0xc1}};


#ifdef __cplusplus
}
#endif

