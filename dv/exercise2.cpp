#include <VExercise2.h>
#include <iostream>
using namespace std;
/**
  @brief A fibonacci linear feedback shift register module

  @input clk    clock
  @input reset  active-high reset
  @input init   inverse of initial value following a reset
  @output out   current output
*/
int main() {
  VExercise2 model;
  // input clk,
  //   input reset,
  //   input [15:0] init,
  //   output logic [15:0] out
  for (size_t init =0; init<65536;++init){
    model.clk=0;
    model.reset=0;
    cout<<"CLK:"<<model.clk<<" Reset: "<<model.reset<<endl;
    model.init=init;
    model.eval();
    uint8_t result = model.out;
    cout<<"INIT:"<<init;
    cout<<" Result: "<<result;
    model.clk=1;
    model.reset=0;
    cout<<"CLK:"<<model.clk<<" Reset: "<<model.reset<<endl;
    model.eval();
    result = model.out;
    cout<<" Result: "<<result;
    model.clk=1;
    model.reset=1;
    cout<<"CLK:"<<model.clk<<" Reset: "<<model.reset<<endl;
    model.eval();
    result = model.out;
    cout<<" Result: "<<result;
    model.clk=1;
    model.reset=0;
    cout<<"CLK:"<<model.clk<<" Reset: "<<model.reset<<endl;
    model.eval();
    result = model.out;
    cout<<" Result: "<<result;

  }
  
    
  
  return 0;
        
      
  
}
