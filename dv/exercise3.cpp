#include <VExercise3.h>
#include <iostream>
using namespace std;
int main() {
  VExercise3 model;
  //  input clk, 0 or 1
  //   input reset, 0 or 1
  //   input [3:0] a,
  //   input [15:0] b,
  //   input [15:0] c,
  //   output [15:0] out
  
  for (size_t a=0;a<4;++a){
      for (size_t b=0;b<65536;++b){
        for (size_t c=0;c<65536;++c){
          // inputs

          model.clk=0;

          //count odd(clk=1) or even(clk=0)
          model.reset=0;
          model.a=a;
          model.b=b;
          model.c=c;
            // Evaluate the model
          model.eval();
          int value;
          // Read the output
          uint8_t result = model.out;
           bool pass=0;
          //Excercise 3 begin

          cout<<"Mystery1 Behavior : ";
          if (model.a==0){
             value = ((model.b & 0x00) << 6) | ((model.b & 0x07) << 3) | (model.c & 0x07);
            pass= (result==value);
            

          }
        
          else if (model.a==1){
             value = ((model.b & 0x01) << 6) | ((model.b & 0x07) << 3) | (model.c & 0x07);
   
            pass=(result==value);

          }
          else if (model.a ==2){
            
            pass=(result==model.b);

          }
          else if (model.a ==3){
          
            pass=(result==model.c);

          }
          cout<<pass<<endl;
          cout<<"Mystery 2 operation";
          for (size_t i=0; i<6;++i){
            cout<<"Behavior:";// TRue or false will indicate state
            
            if (i>1){
              model.eval_end_step();//behavior accoording to the header
              model.eval_step();
            }
            cout<<endl;
         
           switch (i) {
            case 0:
                pass=(result == ((a << 8) | (result & 0xFF)));
                break;
            case 1:
                pass =(result == ((result & 0xFF00) | b));
                break;
            case 2:
                pass=(result == ((a << 8) | (result & 0xFF)));
                break;
            case 3:
                pass=(result == (((result & 0xFFF0) << 4) | ((result & 0x000F) << 8)));
                break;
           }
           if (i==0){

              model.eval_step();//for first value 
            }

            cout<<pass<<endl;
          }
        //Excercise 3 end
          // Print the results
          cout << "Clk: " << model.clk << " A: " << a << " B: " << b <<" RST: "<<model.reset <<" Result: " << int(result) << endl;
          // Print the results with 
          model.clk=1;
          model.eval();
          // Read the output
          result = model.out;
          cout << "Clk: " << model.clk << " A: " << a << " B: " << b <<" RST: "<<model.reset <<" Result: " << int(result) << endl;
          //print with alternative reset
          model.reset=1;
          model.eval();
          // Read the output
          result = model.out;
          cout << "Clk: " << model.clk << " A: " << a << " B: " << b <<" RST: "<<model.reset <<" Result: " << int(result) << endl;

          
        }
      }
    }
}
