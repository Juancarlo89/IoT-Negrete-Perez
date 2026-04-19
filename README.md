# Instalación y Configuración de Mosquitto MQTT en Raspberry Pi con ESP32

**Escuela Superior de Cómputo (ESCOM) - IPN** 
**Materia:** Internet of Things (IoT)  
**Autor:** Negrete Pérez Juan Carlos  
**Fecha de entrega:** 22 de abril de 2026  

## 1. Descripción
Este proyecto demuestra la implementación de una arquitectura IoT utilizando el protocolo **MQTT**. 
Se configuró una Raspberry Pi como servidor central (Broker) y una ESP32 como dispositivo periférico (Publisher) para el envío de telemetría.

## 2. Configuración del Servidor (Raspberry Pi)
Se utilizó una Raspberry Pi 4 con el hostname `eiot6cm3`.

### Instalación de Mosquitto:
1. **Actualización:** `sudo apt update && sudo apt upgrade -y`
2. **Instalación:** `sudo apt install -y mosquitto mosquitto-clients`
3. **Persistencia:** `sudo systemctl enable mosquitto`

### Prueba de Broker:
Para verificar el funcionamiento, se ejecutó un suscriptor local:

```bash mosquitto_sub -h localhost -t "escom/iot/prueba" -v
