# Wireless Battery (versión personal)

Widget de Windows que muestra la batería de ratones, teclados y auriculares inalámbricos.

Es una versión personal y reducida de [Wireless-Device-Battery-Monitor](https://github.com/krisgfx9/Wireless-Device-Battery-Monitor) (licencia GPL, ver `LICENSE`). Todo el trabajo de los drivers es del proyecto original; esta copia solo recorta y ajusta cosas.

## Cambios respecto al original
- Cuando un dispositivo entra en reposo y su receptor deja de responder, se mantiene el último valor (atenuado) hasta 24 h, en lugar de borrarlo a los pocos minutos.
- Sin conexión a internet: se eliminó el formulario de «solicitar soporte» y todo el código de red.
- Se eliminaron enlaces de donaciones, CI, instalador, documentación de contribución y la versión Linux.

## Compilar
Con MSYS2 (MinGW64) y `gcc` + `make` instalados:

```
make
make test
```

o con `build.bat` si `g++` y `windres` están en el PATH. Genera `WirelessBattery.exe`.

## Uso
Ejecuta `WirelessBattery.exe`. Clic derecho sobre el widget o el icono de la bandeja para ver las opciones (idioma, autoarranque, ocultar dispositivos, etc.). El autoarranque es opcional.

## Créditos
- Proyecto original: krisgfx9 y colaboradores, GPL.
- [HeadsetControl](https://github.com/Sapd/HeadsetControl) (opcional, GPL) para algunos auriculares.
