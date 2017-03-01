#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTask.h"
#include "CEventGroup.h"
class CTaskManager {
public:
    CTask *m_aPrimaryTasks[5];
    CTask *m_aSecondaryTasks[6];
    class CPed *m_pPed;
    
    CTaskManager(CPed* ped);
    ~CTaskManager();
    CTask* GetActiveTask();
    CTask* FindActiveTaskByType(int taskType);
    CTask* FindTaskByType(int taskIndex, int taskType);
    CTask* GetTaskSecondary(int taskIndex);
    bool HasTaskSecondary(CTask const* task);
    void Flush();
    void FlushImmediately();
    void SetNextSubTask(CTask* task);
    CTask* GetSimplestTask(CTask* task);
    void StopTimers(CEvent const* _event);
    CTask* GetSimplestActiveTask();
    CTask* GetSimplestTask(int taskIndex);
    void AddSubTasks(CTask* task);
    void ParentsControlChildren(CTask* task);
    void SetTask(CTask* task, int taskIndex, bool arg2);
    void SetTaskSecondary(CTask* task, int taskIndex);
    void ClearTaskEventResponse();
    void ManageTasks();
};

VALIDATE_SIZE(CTaskManager, 0x30);