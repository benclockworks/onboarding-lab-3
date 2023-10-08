// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VExercise1.h"
#include "VExercise1__Syms.h"

//============================================================
// Constructors

VExercise1::VExercise1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VExercise1__Syms(contextp(), _vcname__, this)}
    , op{vlSymsp->TOP.op}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VExercise1::VExercise1(const char* _vcname__)
    : VExercise1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VExercise1::~VExercise1() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VExercise1___024root___eval_debug_assertions(VExercise1___024root* vlSelf);
#endif  // VL_DEBUG
void VExercise1___024root___eval_static(VExercise1___024root* vlSelf);
void VExercise1___024root___eval_initial(VExercise1___024root* vlSelf);
void VExercise1___024root___eval_settle(VExercise1___024root* vlSelf);
void VExercise1___024root___eval(VExercise1___024root* vlSelf);

void VExercise1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VExercise1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VExercise1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VExercise1___024root___eval_static(&(vlSymsp->TOP));
        VExercise1___024root___eval_initial(&(vlSymsp->TOP));
        VExercise1___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VExercise1___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VExercise1::eventsPending() { return false; }

uint64_t VExercise1::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VExercise1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VExercise1___024root___eval_final(VExercise1___024root* vlSelf);

VL_ATTR_COLD void VExercise1::final() {
    VExercise1___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VExercise1::hierName() const { return vlSymsp->name(); }
const char* VExercise1::modelName() const { return "VExercise1"; }
unsigned VExercise1::threads() const { return 1; }
void VExercise1::prepareClone() const { contextp()->prepareClone(); }
void VExercise1::atClone() const {
    contextp()->threadPoolpOnClone();
}
