#include <VExercise4.h>
#include <iostream>
using namespace std;
int main() {
  VExercise4 model;
  model.cs=0;
  // input [7:0] alpha,
  //   input [7:0] beta,
  //   input [7:0] gamma,
  bool pass=0;
  for (size_t alpha=0;alpha<=255;++alpha){
    for (size_t beta=0;beta<=255;++beta){
      for (size_t gamma=0;gamma<=255;++gamma){
          for (size_t sel=0;sel<4 ;++sel){
          model.sel=sel;
          model.alpha=alpha;
          model.beta=beta;
          model.gamma=gamma;
          model.eval();
          uint8_t result = model.out;
          cout<<"Alpha: "<<alpha<<" Beta: "<< beta<< "Gamma: "<<"Pass: ";
          switch (sel){
            case 0: pass=(result==alpha);
            case 1: pass=(result==beta);
            case 2: pass=(result ==gamma);
            case 3: pass=(result ==( alpha& (beta | gamma)) );
          }
          cout<<pass<<endl;


    }

  }
    }

  }
  
  
}
