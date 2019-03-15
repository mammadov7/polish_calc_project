#ifndef POL_CALC
#define POL_CAlC


namespace pc {
  union element;
  class polish_calc;  
} // pc


union element{
  unsigned long op; 
  double num;
};

class polish_calc{
  polish_calc()=default;
private:

};


#endif