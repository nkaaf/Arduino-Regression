#include <Linear2DRegression.hpp>

// Create a new Regression that will be learned in setup
Linear2DRegression *linear2DRegression = new Linear2DRegression();

void setup() {
  Serial.begin(9600);

  // Set points of a linear graph: y = 2 * x + 10
  linear2DRegression->addPoint(0, 10);
  linear2DRegression->addPoint(5, 20);

  // Test functionality with a simple x-value => 10
  Serial.println("Simple test: y = 2 * 10 + 10 => y should be 30");
  Serial.print("y = ");
  Serial.println(linear2DRegression->calculate(10));

  // print all corresponding values of the function from 0 to 100
  for (int i = 0; i < 100; ++i) {
    Serial.print(i);
    Serial.print(": y = ");
    Serial.println(linear2DRegression->calculate(i));
  }

  // Clear regression
  linear2DRegression->reset();
}

void loop() {}