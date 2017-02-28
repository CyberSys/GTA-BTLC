#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTask.h"

class CTaskComplex : public CTask { 
    CTaskComplex() = delete;
protected:
    CTaskComplex(plugin::dummy_func_t a) : CTask(a) {}
public:
	CTask *m_pSubTask;

	// vtable
	virtual void SetSubTask(CTask *subTask);
	virtual CTask *CreateNextSubTask(class CPed *ped);//=0
	virtual CTask *CreateFirstSubTask(class CPed *ped);//=0
	virtual CTask *ControlSubTask(class CPed *ped);//=0
};

