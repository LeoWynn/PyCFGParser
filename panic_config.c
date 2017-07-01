//
//  panic_config.c
//  pythoncall
//
//  Created by coreos on 5/16/17.
//  Copyright © 2017 Leo Wen. All rights reserved.
//

#include "panic_config.h"


void getcurrent();

const char* listPanicTriage();
const char* getCMDWithTriage();

void getcurrent()
{
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('/usr/local/bin/PanicCFG/')");
    return;
}

const char* listPanicTriage()
{
    
    Py_Initialize();
    getcurrent();
    PyObject *pModule = NULL, *pDict = NULL, *pFunc = NULL,*pArg = NULL, *result = NULL;
    pModule = PyImport_ImportModule(MODULE_NAME);
    pDict = PyModule_GetDict(pModule);
    pFunc = PyDict_GetItemString(pDict, "listPanicTriage");
    pArg = Py_BuildValue("(i)","1");
    result = PyEval_CallObject(pFunc, pArg);
    char* str;
    PyArg_Parse(result, "s",&str);
    //printf("sum= %s\n",str);
    Py_Finalize();
    return str;
    
}

const char* getCMDWithTriage(char* cmd)
{
    Py_Initialize();
    getcurrent();
    PyObject *pModule = NULL, *pDict = NULL, *pFunc = NULL,*pArg = NULL, *result = NULL;
    pModule = PyImport_ImportModule(MODULE_NAME);
    pDict = PyModule_GetDict(pModule);
    pFunc = PyDict_GetItemString(pDict, "getCMDWithTriage");
    pArg = Py_BuildValue("(s)",cmd);
    result = PyEval_CallObject(pFunc, pArg);
    char* str;
    PyArg_Parse(result, "s",&str);
    //printf("cmd= %s\n",str);
    Py_Finalize();
    return str;
}



