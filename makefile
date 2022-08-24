ejecutar: diskspeak
  ./diskspeak
diskspeak: clean
  g++ main.cpp
clean:
  rm diskspeak
.PHONY: ejecutar limpiar
