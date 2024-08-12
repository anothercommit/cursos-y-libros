CXX = gcc
CXXFLAGS = -g -O2 -Wconversion -Wshadow -Wall -Wextra -D_GLIBCXX_DEBUG
SRC = 1-18.c

# Nombre del archivo ejecutable
TARGET = a.out

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
