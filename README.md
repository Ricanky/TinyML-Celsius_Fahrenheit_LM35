# Proyecto TinyML: Conversión de Temperatura de Celsius a Fahrenheit en ESP32

Este proyecto implementa una red neuronal básica en una ESP32 para realizar la conversión de temperaturas de Celsius a Fahrenheit. Se ha diseñado utilizando TinyML y TensorFlow Lite en un entorno de recursos limitados, con el objetivo de explorar las capacidades de machine learning en microcontroladores.

## Descripción del Proyecto
Este repositorio contiene el código y los archivos necesarios para integrar una red neuronal entrenada en Google Colab con una ESP32 mediante PlatformIO y VS Code. El modelo de red neuronal convierte temperaturas de Celsius a Fahrenheit y se basa en un sensor LM35 como entrada de datos.

## Requisitos Previos

### Hardware:
- ESP32
- Sensor de temperatura LM35
- Cables de conexión
- (Opcional) Protoboard

### Software:
- Visual Studio Code (VS Code)
- PlatformIO extension para VS Code
- Conexión a internet para descargar librerías necesarias y entrenar el modelo en Google Colab

## Instalación y Configuración

1. Clonar el repositorio:
    ```bash
    git clone https://github.com/tu_usuario/TinyML-Celsius_Fahrenheit_LM35.git
    ```

2. Abrir el proyecto en PlatformIO:
   Una vez clonado, abre el proyecto en VS Code con la extensión de PlatformIO.

3. Configurar el archivo `platformio.ini`:
   Si usas una ESP32-CAM, asegúrate de incluir las siguientes líneas en el archivo `platformio.ini` para ver el monitor serial:
    ```ini
    monitor_rts = 0
    monitor_dtr = 0
    ```

4. Subir el código:
   Conecta la ESP32 a tu computadora y carga el código en la placa mediante PlatformIO.

## Instrucciones de Uso

1. Entrenar el modelo:
   El entrenamiento se realiza en Google Colab. Consulta el archivo de entrenamiento en `model_training.ipynb`.

2. Convertir el modelo a .cpp:
   Después del entrenamiento, convierte el modelo a un archivo `.cpp` y reemplaza el archivo en el proyecto.

3. Prueba de funcionamiento:
   Sube el proyecto a la ESP32 y verifica que la conversión de temperatura se muestre en el monitor serial.

## Estructura del Proyecto

- `src/`: Contiene el código principal y archivos fuente.
- `lib/`: Bibliotecas necesarias para el proyecto.
- `include/`: Archivos de encabezado.
- `platformio.ini`: Configuraciones del proyecto para PlatformIO.
- `model_training.ipynb`: Notebook de Google Colab para entrenar el modelo.

## Solución de Problemas

### La ESP32 no es detectada:
- Asegúrate de tener el driver correcto para tu placa y de usar un cable de datos.

### Problemas con el monitor serial en la ESP32-CAM:
- Agrega las líneas `monitor_rts = 0` y `monitor_dtr = 0` en `platformio.ini`.

