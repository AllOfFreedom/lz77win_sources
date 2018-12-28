#pragma once
#include <unknwn.h>     // For IClassFactory  
#include <windows.h>  
#include "Shlwapi.h"  
#pragma comment(lib,"Shlwapi.lib")
#include "lz77_right_menu.h"

class CFactoryClass :public IClassFactory,
  public CLz77RMenu
{
public:
  /////////////////////IUnknown�ӿڵķ���  
  STDMETHODIMP QueryInterface(REFIID riid, void **ppv);
  STDMETHODIMP_(ULONG) AddRef();
  STDMETHODIMP_(ULONG) Release();
  ////////////////////IClassFactory�ӿڷ���  
  STDMETHODIMP CreateInstance(IUnknown *pUnkOuter, REFIID riid, void **ppv);
  STDMETHODIMP LockServer(BOOL fLock);

};