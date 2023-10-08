#include <VExercise1.h>
#include <iostream>
using namespace std;
/**
  @brief A simple ALU-like module

  @input op   opcode for the operation to perform
  @input a    input to calculation
  @input b    input to calulation
  @output out result of calculation
*/
int main() {
  // input [1:0] op,
  //   input [7:0] a,
  //   input [7:0] b,
  //   output logic [7:0] out
  VExercise1 model;
  bool pass;
  for (size_t a=0; a< 256;++a){
    for (size_t b=0;b<256;++b){
      for (size_t op=0; op<4;++op){
       // inputs
      model.op = op;
      model.a = a;
      model.b = b;

      // evaluate: reffered to header file
      model.eval();

      // getting the output and i used the   VL_OUT8(&out,7,0); to assume the type
      //as well as lab 2's spec
      uint8_t result = model.out;
      cout<<"Pass: ";
      switch (op){
        case 0: pass = (result==(a^b));
        case 1: pass= (result ==(a<<b));
        case 2: pass =(result== (a%b));
        case 3: pass = (result == (~(a&b)));
      }
      cout<<pass<<endl;
      // Print the results
      cout << "OP: " << op << " A: " << a << " B: " << b << " Result: " << int(result) << endl;
      
      }
    }
  }
  return 0;
}
