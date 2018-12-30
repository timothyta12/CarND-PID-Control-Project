#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  Kp = Kp;
  Ki = Ki;
  Kd = Kd;
  
  cte_prev = 0;
  cte_total = 0;
}

void PID::UpdateError(double cte) {
}

double PID::TotalError() {
}

double PID::CalculateValue(double cte) {
  double diff_cte = cte - cte_prev;
  cte_prev = cte;
  cte_total += cte;
  return -Kp * cte - Kd * diff_cte - Ki * cte_total;
}

