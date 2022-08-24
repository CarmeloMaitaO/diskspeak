ejecutar: diskspeak
  ./diskspeak
diskspeak: clean
  g++ main.cpp
clean:
  touch diskspeak
  rm diskspeak
.PHONY: ejecutar limpiar
