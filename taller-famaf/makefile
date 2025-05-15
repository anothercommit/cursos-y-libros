CXX = g++
CXXFLAGS = -std=gnu++23 -O3 -Wconversion -Wno-conversion -Wfloat-conversion -Wshadow -Wall -Wextra -pedantic-errors
SRC = dragons.cpp

# Nombre del archivo ejecutable
TARGET = main

# Regla por defecto para compilar y ejecutar
all: $(TARGET) run

# Regla para compilar el ejecutable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Regla para ejecutar el programa
run: $(TARGET)
	./$(TARGET)

# Regla para limpiar archivos generados
clean:
	rm -f $(TARGET)
