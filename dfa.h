#ifndef DFA_H
#define DFA_H
#include "machine.h"

class DfaMachine :
    public Machine
{

public:
    DfaMachine();
    virtual ~DfaMachine();

    void addTransition(Transition) override;
    void removeTransition(Transition*) override;

    virtual bool calc(std::string input)override;
};

#endif // DFA_H


