/*!
 * @file Linear2DRegression.cpp
 *
 * This file is part of the Regression library. It provides classes representing
 * different types of regressions.
 *
 * Copyright (C) 2023  Niklas Kaaf
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301
 * USA
 */

#include "Linear2DRegression.hpp"

#include <math.h>

void Linear2DRegression::addPoint(double x, double y) {
  this->n++;

  this->sumX += x;
  this->sumX2 += pow(x, 2);
  this->sumY += y;
  this->sumY2 += pow(y, 2);
  this->sumXY += x * y;

  /** The formula: https://www.wallstreetmojo.com/regression-formula/ */
  this->intercept =
      ((sumY * sumX2) - (sumX * sumXY)) / (n * sumX2 - pow(sumX, 2));
  this->slope = ((n * sumXY) - (sumX * sumY)) / (n * sumX2 - pow(sumX, 2));
}

double Linear2DRegression::calculate(double x) {
  return (this->slope * x) + this->intercept;
}

void Linear2DRegression::reset() {
  this->n = 0;

  this->sumX = 0;
  this->sumX2 = 0;
  this->sumY = 0;
  this->sumY2 = 0;
  this->sumXY = 0;

  this->intercept = 0;
  this->slope = 0;
}
