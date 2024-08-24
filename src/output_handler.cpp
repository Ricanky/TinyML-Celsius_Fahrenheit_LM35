/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "output_handler.h"
#include <cstdio>
#include <Arduino.h>

// Definir el pin del LED interno de la ESP32
#define LED_PIN 2

void HandleOutput(tflite::ErrorReporter* error_reporter, float celsius, float fahrenheit) {
  // Formatear los valores de temperatura con dos decimales
  char celsius_str[10];
  char fahrenheit_str[10];
  snprintf(celsius_str, sizeof(celsius_str), "%.2f", celsius);
  snprintf(fahrenheit_str, sizeof(fahrenheit_str), "%.2f", fahrenheit);

  // Mostrar los valores en el formato deseado
  error_reporter->Report("%s Celsius -> %s Fahrenheit", celsius_str, fahrenheit_str);

  if(fahrenheit>=125){
    digitalWrite(LED_PIN, HIGH); // Encender el LED interno
  } else {
    digitalWrite(LED_PIN, LOW);  // Apagar el LED interno
  }
}
