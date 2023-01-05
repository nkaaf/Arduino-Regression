/*!
    * @file Linear2DRegression.cpp
    *
    ** @mainpage
    *
    * @section intro_sec Introduction
    *
    * This is the documentation for the Signature Library for the Arduino platform.
    * This library handles a feature of the microcontrollers from the AVR series of
    * Microchip/Atmel. Therefore this library can only be used for projects on
    * these controllers. But it does not depend on any Arduino-specific libraries
    * so it could be used in any project build for AVR microcontrollers.
    * It extends the arduino ecosystem with easy way of reading the so called
    * "signature" of these controllers. It sometimes stores factory calibrations.
    *
    *
    * @section author Author
    *
    * Written by Niklas Kaaf (nkaaf@protonmail.com) with passion and the goal to
    * provide a simple and well implemented basic structure for building great
    * software.
    *
    * @section license License
    *
    * This file is part of the Regression library. It provides classes representing different types of regressions.
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

#ifndef ARDUINO_REGRESSION_LINEAR2DREGRESSION_HPP
#define ARDUINO_REGRESSION_LINEAR2DREGRESSION_HPP


class Linear2DRegression {
private:
    double intercept, slope, sumX = 0.0, sumX2 = 0.0, sumY = 0.0, sumY2 = 0.0,
                             sumXY = 0.0;
    int n = 0;

public:
    void setPoint(double x, double y);
    double calculate(double x);
    void reset();
};

#endif// ARDUINO_REGRESSION_LINEAR2DREGRESSION_HPP
